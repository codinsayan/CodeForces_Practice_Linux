#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n, k, p, ans;
        cin>>n>>k;

        ans = k+(k-1)/(n-1);

        cout<<ans<<endl;
    }

}