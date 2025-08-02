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

const string sub[] = {"00", "50", "75", "25"};
const int P = 1e5;

void solve() {

    string n;
    cin>>n;
    // cout<<n<<endl;

    int num = n.length(), ans=0;
    vn v;
    cout<<num<<endl;
    
    int f0=-1, s0=-1, f5=-1, s2=-1, s7=-1, s5=-1;

    for(int i = num-1; i>=0; i--) {
        
        if(n[i] == '0' && f0 == -1) {f0 = i; continue;}
        if(n[i] == '5' && f5 == -1) {f5 = i; continue;}
        cout<<f0<<" " <<f5<<endl;

        if((f0 != -1) && (n[i] == '0')) {s0 = i; break;} 
        if((f0 != -1) && (n[i] == '5')) {s5 = i; break;}
        if((f5 != -1) && (n[i] == '2')) {s2 = i; break;}
        if((f5 != -1) && (n[i] == '7')) {s7 = i; break;}

    }
    cout<<s5<<endl;
    if(f0 != -1 && s0 != -1) {ans = ((num - f0)-1) + ((f0 - s0) - 1); v.push_back(ans);}
    else if(f0 != -1 && s5 != -1) {ans = ((num - f0)-1) + ((f0 - s5 - 1)); v.push_back(ans);}
    else if(f5 != -1 && s2 != -1) {ans = ((num - f5)-1) + ((f5 - s2) - 1); v.push_back(ans);}
    else if(f5 != -1 && s7 != -1) {ans = ((num - f5)-1) + ((f5 - s7) - 1); v.push_back(ans);}
    
    // cout(v);
    int min = minv(v);
    cout<<min<<endl;

    return;
}

signed main() {
    int t;
    cin>>t;
    cin.ignore();

    while(t--) {

        solve();
    }

    return 0;
}