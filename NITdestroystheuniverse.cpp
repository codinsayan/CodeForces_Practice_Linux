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

    vn v(n); cin(v);

    
    bool flag, flag1 = false, flag2=false, flag3=false;
    if(v[0] == 0) {flag = false; flag1 = false;}
    else {flag = true; flag1=true;}

    forin(i,1,n) {

        if(flag == false) {
            if(flag2 == false && v[i] == 0) {flag1 = false; continue;}
            if(flag1 == false && v[i]>0) {flag2 = true; flag1=true; continue;}
            if(flag3 == false && flag2==true && v[i] == 0) {flag3 = true; continue;}
            if(flag3==true && v[i]>0) {cout<<2<<endl; return;}

        }
        else {
            if(flag2 == false && v[i] > 0) {flag1 = true; continue;}
            if(flag1 == true && v[i]==0) {flag2 = true; flag1=false; continue;}
            if(flag2==true && v[i]>0) {cout<<2<<endl; return;}
        }

    }
    
    if(flag==false && flag1 == false) {cout<<0<<endl; return;}
    else {cout<<1<<endl; return;}
    
}

signed main() {
    int t;
    cin>>t;
    while(t--) {

        solve();

    }
}