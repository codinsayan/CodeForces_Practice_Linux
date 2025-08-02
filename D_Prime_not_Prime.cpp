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

vector<bool> SieveOfEratosthenes() {

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

bool compareint(int &a, int &b) {
    //give condition in the way you want the sorting to work
    return a>b;
}

bool comparepair(pair<int,int> &a, pair<int,int> &b) {
    //give condition in the way you want the sorting to work
    if(a.ff == b.ff) {
        return a.ss > b.ss;
    }
    return a<b;
}

void solve() {
    int n;
    cin>>n;

    vn v(n); cinv(v);

    vector<bool> bprimes = SieveOfEratosthenes();
    vn primes;

    forin(i,2,N+1) if(bprimes[i]==true) primes.pb(i);
    
    coutv(primes);

    
    

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