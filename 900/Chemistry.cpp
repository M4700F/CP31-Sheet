// tc - 2 sec per test -> 2 * 10^8 ops
// sum of n over all test cases is 2 * 10^5
// now n can be 10 ^ 5.
// so O(n) solution is possible
// O(nlog2n) is also possible
// O(n^2) is not possible

// solution calculate the odd freq of char
// now I want to remove odd freq so that the I can make palindrome
// now suppose I have x odd freq char if I can get x - k = 0 that is fine. all char are even freq. I can make palindrome
// if x - k = 1 that is fine. I can put the odd freq char in the middle and make a palidrome just like this abcba
// so if x - k <= 1 print "YES" otherwise "NO"
// now what if the odd freq is less than k suppose there is no odd freq char and I have k = 3
// I can remove 2 even freq char and 1 even freq char. This will become a odd freq char. Then I can put this into the middle of the string.
// so this is handled automatically

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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> char_freq(26, 0);

        for(int i = 0; i < n; i++){
            char_freq[s[i] - 'a']++;
        }

        int num_odd_freq_char = 0;

        for(int i = 0; i < 26; i++){
            if(char_freq[i] % 2) num_odd_freq_char++;
        }

        if(num_odd_freq_char <= (k + 1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}