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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int max = 0, count=1;
        
        bool flag;
        if(s[0] == '<') flag = true;
        else if(s[0] == '>') flag = false;
        // cout<<flag<<endl;
        int i = 0;
        while(i<n) {

            // cout<<flag<<" "<<count<<endl;
            if (flag == true) {
                if(s[i+1] == '<') {
                    count++;
                    // cout<<count<<endl;
                    i++;
                    continue;
                }
                else {
                    flag = false;
                    if(max<count) max = count; 
                    count = 1;
                    i++;
                    continue;
                }
            }
            else {
                if(s[i+1] == '>') {
                    count++;
                    // cout<<count<<endl;
                    i++;
                    continue;
                }
                else {

                    flag = true;
                    if(max<count) max = count; 
                    count = 1;
                    i++;
                    continue;
                }
            }
        }
        cout<<max+1<<endl;

    
    }

    return 0;
}