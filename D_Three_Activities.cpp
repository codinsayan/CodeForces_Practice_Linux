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
#define psum(v) for(int i = 1; i < n; i++) v[i] = v[i]+v[i-1]
#define sz(v) (int)(v.size())
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

    vector<vector<pair<int,int>>> v;

    forn(i, 3) {
        vector<pair<int,int>> a;
        forn(j, n) {
            int k; cin>>k;
            a.push_back({k,j});
        }
        rsort(a);
        v.push_back(a);
    }

    int ans = 0;
    forn(i,3) {
        forn(j,3) {
            forn(k, 3) {
                if(v[0][i].second!=v[1][j].second && v[1][j].second!=v[2][k].second && v[0][i].second!=v[2][k].second) {
                    ans = max(ans, v[0][i].first+v[1][j].first+v[2][k].first);
                }
            }
        }
    }
    cout<<ans<<endl;
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
//first preference to the value and second preference to the position,
//now we just sort it according to the preference and check all the possible combinations in first 3 of each sorted array v[0][0-2], v[1][0-2], v[2][0-2]
//and check for maximum of the sum