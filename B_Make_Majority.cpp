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
#define copyto(c,v) for(int i = 0; i<v.size(); i++) c.push_back(v[i])
#define forin(i, j, n) for(int i = j; i < n; i++)
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
    int n;
    cin>>n;
    string s; cin>>s;

    if(n == 1) {
        if(s[0] == '1') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {

        if(s[0] == '1' && s[n-1] == '1' || (s[0]=='1'&&s[1]=='1')||(s[n-1]=='1'&&s[n-2]=='1')) {cout<<"YES"<<endl; return;}
        int cnt = 0;
        forn(i,n-1) {
            if(s[i] == '1' && s[i+1]=='1') cnt++;
        }
        if(cnt >1 || (cnt>0 && (s[0]=='1' || s[n-1] == '1'))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

signed main() {
    int t;
    cin>>t;
    while(t--) {

        solve();

    }
    return 0;
}

/*
Cases for 1
111 at any position - 01110
11 at any two postions - 0110110
1 at beginning and 11 at any position, similarly for backward = 10110, 01101
11 at beginning or in the end - 011, 110
*/