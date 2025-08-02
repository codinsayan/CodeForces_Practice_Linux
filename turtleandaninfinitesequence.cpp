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

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        if(m == 0)
        {
            cout<<n<<endl;
        }
        else{
            cout<<"Hi"<<endl;
            vn v;
            int d = n;

            while(d>0)
            {
                int u = d%2;
                v.push_back(u);
                d = d/2;
            }
            reverse(v.begin(),v.end());

            vn c;
            copyto(c,v);

            int i = c.size()-1;
            bool flag = false;

            while(c[i] != 1)
            {   
                flag = true;
                // cout<<"HI"<<endl;
                c[i] = 1;
                i--;
            }
            if(flag == true) m--;
            // cout<<m<<endl;
            while(m>0 && i>=0)
            {
                if(c[i] == 0)
                {
                    c[i] = 1;
                }
                m--;
                i--;

            }

            cout(c);
            cout<<c.size()<<endl;

            int sum = 0;
            int p = sz(c)-1;
            for(int i = p; i>=0; i--)
            {
                cout<<i<<" "<<p-i<<endl;
                sum += pow(2,(p-i))*c[i];
                cout<<sum<<endl;
            }
            cout<<sum<<endl;

        }
    }

    return 0;
}