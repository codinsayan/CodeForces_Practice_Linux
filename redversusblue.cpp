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
    double r,b;
    cin>>n>>r>>b;

    int t;
    string s="";
    if(b == 1) { 
        t = ceil(r/2);
        for(int i = 0; i<n; i++) {
            if( i== t) s+='B';
            else s+='R';
        }
    } 
    else {
        t = r/(b+1);
        if(t*(b+1) > r) t--;
        int k = r - (t*(b+1));
        for(int i=1; i<=t*(b+1)+b; i++) {
            if(i%(t+1) == 0) s+='B';
            else s+= 'R';
        }
        if(k > 0) {
            string str = s;
            str.insert(str.begin(),'R');
            s.insert(s.begin(),'R');
            k--;

            int p = 1;
            for(int i = 1; i<=s.size(); i++) {
                if (k > 0) {
                    if(s[i-1] == 'B') {
                        str.insert(str.begin()+(i+p),'R');
                        p++;
                        k--;
                    }
                }
                else {s = str; break;}
            }
        }
    }
    cout<<s<<endl;
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