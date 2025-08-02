#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define cout(v) for(auto i: v) {cout<<i<<" ";} cout<<endl;
#define cin(v) for(auto &i: v) {cin>>i;}
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define copyto(c,v) for(int i = 0; i<v.size(); i++) c.push_back(v[i])
#define forin(i, j, n) for(int i = j; i < n; i++)
#define forn(i, n) for(int i = 0; i < n; i++)
#define psum(v) for(int i = 1; i < n; i++) v[i] = v[i]+v[i-1]
#define sz(v) (int)(v.size())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/(__gcd(a,b)))*b
#define qsort(v) sort(v.begin(),v.end())
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
const int N=2*1e5+3;
const int mod=1e9+7;
const int mod1=998244353;
double eps=1e-5;

void solve() {
    
    int n,m; cin>>n>>m;

    string x,s; cin>>x>>s;

    int cnt = 0, i = 0, j = 0;
    int sum = n;
    int k=0, cntin = 0;
    bool flag = false;

    while(i<=5) {
        if(x[j] == s[0]) flag = true;
        else flag = false;
        if(flag == true) {
            for(int k = j; k<sum; k++) {
                if(x[k] == s[k-j]) continue;
                else {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true) {cout<<i<<endl; return;} 
        j++;
        x = x+x;
        sum += 2*sum;
    }
    cout<<-1<<endl;
    return;

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