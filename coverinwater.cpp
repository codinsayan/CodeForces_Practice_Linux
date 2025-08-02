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

void solve() {
    int n;
    cin>>n;

    string s; cin>>s;

    int max = 0, count=0, countdot = 0;

    bool flag;

    int i = 0;
    while(i<n) {
        if(s[i] == '.') {
            flag = true;
        }
        else{
            flag = false;
        }

        if(flag == true) {
                count++;
                countdot++;
                i++;
        }
        else {
            flag = false;
            count = 0;
            i++;
        }
        if(max<count) max = count;
    }
    if(max>=3) cout<<2<<endl;
    else cout<<countdot<<endl;
    
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