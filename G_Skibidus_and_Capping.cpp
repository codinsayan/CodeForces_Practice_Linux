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


vector<bool> SieveOfEratosthenes()
{
    //It gives boolean vector of prime no.s till 2*1e5+3
    vector<bool> prime(N + 1, true);

    for (int p = 2; p*p <= N; p++) {
        if (prime[p] == true) {
            for (int i = p*p; i <= N; i += p)
                prime[i] = false;
        }
    }
    return prime;
}

void solve() {
    vector<bool> is_prime = SieveOfEratosthenes();
    
    int n;
    cin>>n;

    vn v(n); cinv(v);

    map<int,int> m; 
    map<int,pair<int,int>>m1;

    vector<int> present(N);

    forn(i,n) {
        if(is_prime[v[i]] == true) m[v[i]]++; 
        present[v[i]]++;
        // if(sqrt(v[i])*sqrt(v[i])==(double)v[i] && is_prime[(int)sqrt(v[i])]==true) m1[v[i]]++;
        forin(j,2,(int)sqrt(v[i])+1) {
            if(is_prime[j]==true) {
                int b = (double)v[i]/(double)j;
                // cout<<b<<endl;
                // cout<<(double)v[i]<<endl;
                if((double)v[i]==b*j && is_prime[(int)b]==true) { 
                    m1[v[i]].ff++;
                    m1[v[i]].ss=j;
                }
            }
        }
    }
    int ans = 0;

    vn vp;
    for(auto it: m) {
        vp.pb(it.ss);
    }
    psum(vp);

    // cout<<"vp: ";
    // coutv(vp);
    // cout<<"m"<<endl;
    // coutm(m);
    // cout<<"m1"<<endl;
    // for(auto it:m1) {
    //     cout<<it.ff<<": {"<<it.ss.ff<<","<<it.ss.ss<<"}"<<endl;
    // }
    // coutv(present);
    // cout<<"m2"<<endl;
    // coutm(m2);

    int ptr = 0;
    for(auto it: m) {
        ans += it.ss*(vp[vp.size()-1]-vp[ptr]);
        ptr++;
    }

    for(auto it: m1) {
        if(it.ff/it.ss.ss==it.ss.ss) ans += it.ss.ff*(it.ss.ff-1)/2+it.ss.ff+m[it.ss.ss]*it.ss.ff;
        else {
            ans += it.ss.ff*(it.ss.ff-1)/2+it.ss.ff;
            if(present[it.ss.ss]>0) ans+= m[it.ss.ss]*it.ss.ff;
            if(present[it.ff/it.ss.ss]>0) ans+= m[it.ff/it.ss.ss]*it.ss.ff;
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