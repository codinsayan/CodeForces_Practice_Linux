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
    fast;
    int t;
    cin>>t;
    while(t--) {
        int n, m, k;
        cin>>n>>m>>k;

        vn a(m); cin(a);
        unordered_set<int> q;
        forn(k){
            int x;
               cin >> x;
               q.insert(x); 
        }

        if(n-k>1) {
            for(int i=0; i<m; i++) cout<<0; 
            cout<<endl; 
        }
        else if(n-k == 0) {
            for(int i=0; i<m; i++) cout<<1; 
            cout<<endl; 
        }
        else {
            for(int i = 0; i<m; i++) {
                bool flag = false;
                auto it = find(q.begin(), q.end(), a[i]);

                if(it != q.end())  cout<<0;
                else cout<<1;
            }
            cout<<endl;
        }
    }
    return 0;
}