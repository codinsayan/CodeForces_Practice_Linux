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

int counts(int n, int &counter) {
    int k,p, count=0, temp = n, count1=0;
    bool flag1 = false, flag2 = false;
    
    while(temp>9) {
        k = temp%10;
        if(k == 0 && flag1 == false && flag2 == false) {
            flag1 = true; 
            temp/=10; 
            p = k;
            count1 = count;
            continue;
        }
        else if(k == 5 && flag1 == false && flag2 == false) {
            flag2 = true; 
            temp/=10; 
            p = k;
            count1 = count;
            continue;
        }
        
        if(flag1 == true && (k == 0 || k == 5)) break;
        if(flag2 == true && (k == 2 || k == 7)) break;
        
        temp/=10;
        count++;
    }

    if((temp*10+p)%25 == 0) return count+counter;
    else {
        counter += count1+1;
        temp = n/(pow(10,count1+1));
        return counts(temp, counter);
    }
}
 
 
signed main() {
    int t;
    cin>>t;
    while(t--) {
        int n,counter=0;
        cin>>n;
 
        cout<<counts(n, counter)<<endl;
        
    }
    return 0;
}