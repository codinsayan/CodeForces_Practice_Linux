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
const int mod=1e9+7;
const int mod1=998244353;
double eps=1e-5;

void solve() {
    int n;
    cin>>n;

    vn A(n), B(n); cinv(A); cinv(B);

    int maxA = maxv(A);
    int sumB = accumulate(all(B),0LL);

    int lo = maxA, hi = maxA+2*sumB;
    auto can = [&](int M){

        vn self(n), ext(n), cap(n);
        int tex = 0, tcp = 0;

        forn(i,n) {
            int alw1 = max(0LL, M-A[i]);
            self[i] = min(B[i], alw1);
            ext[i]  = B[i] - self[i];
            tex += ext[i];
        }

        forn(i,n) {
            int aftSelf = A[i] + self[i];
            int rem = M - aftSelf;
            if(rem>0) cap[i] = rem/2;
            else cap[i]=0;
            tcp += cap[i];
        }

        if(tex>tcp) return false;
        forn(i,n) {
            if(ext[i]>tcp-cap[i]) return false;
        }
        return true;
    };

    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(can(mid)) hi = mid;
        else lo = mid+1;
    }

    cout<<lo<<endl;
    

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