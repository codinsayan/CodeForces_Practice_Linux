#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define cinv(v) for(auto &i: v) {cin>>i;}
#define cins(s,n) for(int i=0; i<n; i++) {int k; cin>>k; s.insert(k);}
#define coutv(v) for(auto &it: v) {cout<<it<<" ";} cout<<endl;
#define couts(s) cout<<"{"; for(auto &it: s) {cout<<it<<", ";} cout<<"}"<<endl;
#define coutm(m) for(auto &it: m) {cout<<it.first<<": "<<it.second<<endl;}
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define forin(i, j, n) for(int i = j; i < n; i++)
#define forikn(i,j,n,k) for(int i = j; i < n; i+=k)
#define forn(i, n) for(int i = 0; i < n; i++)
#define ford(i,n) for(int i = n-1; i >= 0; i--)
#define forit(i, v) for(typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define foritd(i, v) for(typeof((v).begin()) i = --(v).end(); i != (v).begin(); --i)
#define psum(v) for(int i = 1; i < v.size(); i++) v[i] = v[i]+v[i-1]
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/(__gcd(a,b)))*b
#define qsort(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define vn vector <int>
#define int long long
#define double long double
#define ff first
#define ss second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define endl "\n"
const int N=2*1e5+3;
const int mod=1e9+7;
const int mod1=998244353;
double eps=1e-5;

void solve() {
    string s;
    cin>>s;
    int mn = INT_MAX;
    int l=0, r=0;
    unordered_map<char, int> mp;

    while(l<s.size() && r<s.size()) {
        mp[s[r]]++;
        if(mp['1']>0 && mp['2']>0 && mp['3']>0) {
            // cout<<'l'<<l<<endl;
            // coutm(mp);
        
            unordered_map<char,int> temp = mp;

            for(int i=l; i<r; i++) {
                if(temp[s[i]]>1) temp[s[i]]--;
                else {
                    // cout<<r<<" "<<i<<endl;
                    mn = min(mn, r-i+1);
                    l = r+1;
                    mp.clear();
                    break;
                }
            }
        }
        r++;
    }
    if(mn == INT_MAX) cout<<0<<endl;
    else cout<<mn<<endl;
}

signed main() {
    fast;
    int t;
    cin>>t;
    while(t--) {

        solve();

    }
    return 0;
}