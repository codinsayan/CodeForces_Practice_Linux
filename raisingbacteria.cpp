#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
    int n;
    cin>>n;
    
    int count=0;
    while(n>0)
    {
        count+=n%2;
        n = n/2;
    }
    cout<<count<<endl;
    
    return 0;
}