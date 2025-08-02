#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define cout(v) for(auto i: v) {cout<<i<<" ";} cout<<endl;
#define cin(v) for(auto &i: v) {cin>>i;}
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define copyto(c,v) for(int i = 0; i<v.size(); i++) c.push_back(v[i])
#define forin(j, n) for(int i = j; i < n; i++)
#define forn(n) for(int i = 0; i < n; i++)
#define psum(v) for(int i = 1; i < n; i++) v[i] = v[i]+v[i-1]
#define sz(v) (int)(v.size())
#define gcd(a,b) __gcd(a,b)
#define qsort(v) sort(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define vn vector <int>
#define int long long
#define double long double

signed main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,y;
        cin>>n>>x>>y;

        vn v(n); cin(v);

        int sum = 0;
        for(int i = 0; i<n; i++) {
            sum += v[i];
        }
        // cout<<sum<<endl;

        int count = 0,k=0;

        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                k = (sum - (v[i] + v[j]));
                if(k>=x && k<=y) count++;

            }
        }
        cout<<count<<endl;

    }

    return 0;
}