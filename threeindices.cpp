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

int leftvf(vector<int> &v,int k) {
    vn leftv; 
    forin(0,k) {
        leftv.push_back(v[i]);
    }
    int leftmin = minv(leftv);
    if(leftmin > v[k]) return -1;
    else return leftmin;
}

int rightvf(vector<int> &v,int k, int n) {
    vn rightv; 
    forin(k+1,n) {
        rightv.push_back(v[i]);
    }
    int rightmin = minv(rightv);
    if(rightmin > v[k]) return -1;
    else return rightmin;
}

signed main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vn v(n); cin(v);

        int a, b;
        bool flag = false;
        for(int i=1; i<n-1; i++) {
            a = leftvf(v,i);
            b = rightvf(v,i,n);
            if((a != -1) && (b != -1)) {
                
                cout<<"YES\n";

                for(int k = 0; k<i; k++) {
                    if(v[k] == a) cout<<k+1<<" "<<i+1<<" ";
                }
                for(int k = i+1; k<n; k++) {
                    if(v[k] == b) cout<<k+1<<" ";
                }
                flag = true;
                break;
            }
        }
        if (flag == false) cout<<"NO";
        cout<<"\n";

    }

    return 0;
}