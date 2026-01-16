// can I use manhattan dist
// suppose there is a king at (0,0)
// and my knight is at (2,1)
// manhattan dist = (2-0) + (1-0) = 3
// now the knight has move 2 1 which is 3 in total
// now to fork the manhattan dist (king) = manhattan dist (queen) = sum of knight valid moves


// lets do some clever thing
// lets take the king and find all the valid moves that get it trapped by the knight
// we will get moves
// store all the x and y values as a pair
// then do for the same for the queen
// and store them as well
// and compare them. How many we get similar that will be the answer
// now how to store the x, y pair?
// can we use pair?

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pair<int,int>>
#define vll vector<pair<ll,ll>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vvii vector<vector<pair<int,int>>>
#define vvll vector<vector<pair<ll,ll>>>
#define vst vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define mkunique(x) sort(all(x));(x).erase(unique(all(x)),(x).end())
#define fi first
#define se second
#define mp make_pair
#define si(x) int(x.size())
#define f(i,n) for (int i = 0; i < (n); i++)
const int mod=998244353,MAX=300005,INF=15<<26;

int dx[4] = {1, -1, -1, 1}, dy[4] = {1, 1, -1, -1};

int main(){
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);

    int T;cin>>T;
    while(T--){
        int a, b;
        cin >> a >> b;

        int x_king, y_king;
        cin >> x_king >> y_king;

        int x_queen, y_queen;
        cin >> x_queen >> y_queen;

        set<pair<int, int>> king_hits, queen_hits;

        for(int i = 0; i < 4; i++){ // 4
            king_hits.insert({x_king + dx[i] * a, y_king + dy[i] * b}); // log2(8)
            king_hits.insert({x_king + dx[i] * b, y_king + dy[i] * a});

            queen_hits.insert({x_queen + dx[i] * a, y_queen + dy[i] * b});
            queen_hits.insert({x_queen + dx[i] * b, y_queen + dy[i] * a});
        }

        int ans = 0;

        for(auto pos: king_hits){ // 8
            if(queen_hits.find(pos) != queen_hits.end()) ans++; // log2(8)
        }
        
        cout << ans << endl;
    }

    return 0;
}

// tc - O(4*log2(8) + 8*log2(8)) ~ O(8*log2(8)) = O(8*3) = O(24)
// sc - O(8)