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
const int P = 20;

int solve(string &s, string &e) {

    int l = s.length() - 1, count=0;

    while(l>=0 && s[l] != e[1]) {
        l--;
        count++;
    }

    l--;

    while(l>=0 && s[l] != e[0]) {
        l--;
        count++;
    }

    return count;

}

signed main() {
    int t;
    cin>>t;
    while(t--) {

        string s;
        cin>>s;

        int ans = P;
        for(auto e: sub) {
            ans = min(ans, solve(s,e));
        }
        cout<<ans<<endl;

    }
}