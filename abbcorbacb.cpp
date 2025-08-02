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
#define ss second
#define ff first
#define pb push_back
#define lb lower_bound
#define ub upper_bound
const int N=2*1e5+3;
const int mod=1e9+7;
const int mod1=998244353;
double eps=1e-5;

void solve() {
	string s;
    cin>>s;
    
    int n = s.size();
    
    vn vb;
    vn list;
    int ca=0, cb=0;
    bool flag = false;
    forn(i,n) {
    	if(s[i] == 'A') ca++;
    	else {if(s[i]==s[i+1] && s[i] == 'B') flag = true; vb.pb(i); cb++;}
    }
    // cout(vb);
    if(flag == true) {cout<<ca<<endl; return;}
    else if(cb == 0) {cout<<0<<endl; return;}
    else{
    	vb.insert(vb.begin(),-1); vb.insert(vb.end(),n);
    	// cout(vb);
    	forn(i,vb.size()-1) {
    		int k = vb[i+1]-vb[i] -1;
    		list.pb(k);
    	}
        
    	sort(list.begin(),list.end());
        // cout(list);
    	int sum = 0;
    	forn(i,cb) {
    		sum += list[list.size()-i-1];
    	}
    	cout<<sum<<endl;
    	return;
    }
    
    

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