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
    int n;
    cin>>n;

    if(n<=9) cout<<n<<endl; //9
    else if(n<=17) cout<<n-9<<"9"<<endl; //98
    else if(n<=24) cout<<n-17<<"89"<<endl; //987
    else if(n<=30) cout<<n-24<<"789"<<endl; //9876
    else if(n<=35) cout<<n-30<<"6789"<<endl; //98765
    else if(n<=39) cout<<n-35<<"56789"<<endl; //987654
    else if(n<=42) cout<<n-39<<"456789"<<endl; //9876543
    else if(n<=44) cout<<n-42<<"3456789"<<endl; //98765432
    else if(n==45) cout<<"123456789"<<endl; //987654321
    else cout<<-1<<endl;
    

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