// O(n) solution is not possible
// O(1) or O(log2n) solution is required

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

int main(){
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);

    int T;cin>>T;
    while(T--){
        ll n, k, x;
        cin >> n >> k >> x;

        ll min_sum = (k * (k + 1)) / 2;
        ll max_sum = ((n * (n + 1)) / 2) - (((n - k)*(n - k + 1)) / 2);

        if(x >= min_sum && x <= max_sum) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}