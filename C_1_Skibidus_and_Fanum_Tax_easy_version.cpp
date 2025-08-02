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
#define psum(v) for(int i = 1; i < n; i++) v[i] = v[i]+v[i-1]
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
    int n,m;
    cin>>n>>m;

    vn v(n); cinv(v);

    int k; cin>>k;

    vn diff;
    if(n<=2) {
        cout<<"YES"<<endl;
        return;
    }
    else {
        forin(i,1,n-1) {
            diff.pb(v[i]-v[i-1]);
        }
        int pos = 0, neg = 0, ind = 0, sp = 0;
        forn(i,n-2) {
            if(diff[i]<0) {neg++; ind = i;}
            else pos++;
        }
        if(v[n-1]-v[n-2]<0) {neg++; sp++;}

        if(neg == n-1) {
            cout<<"YES"<<endl;
            return;
        }
        if(neg == 1) {
            if(sp != 1) {
                v[ind] = k - v[ind];
                forn(i,n-1) {
                    if(v[i+1]<v[i]) {cout<<"NO"<<endl; return;}
                }
                cout<<"YES"<<endl; 
                return;
            }
            else {
                v[n-1] = k - v[n-1];
                forn(i,n-1) {
                    if(v[i+1]<v[i]) {cout<<"NO"<<endl; return;}
                }
                cout<<"YES"<<endl; 
                return;
            }
        }
        else {
            forn(i,n-1) {
                if(v[i+1]<v[i]) {cout<<"NO"<<endl; return;}
            }
            cout<<"YES"<<endl; 
        }

    }
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