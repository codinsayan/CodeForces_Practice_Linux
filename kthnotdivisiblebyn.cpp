#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        int p = k - k%n;
        int x = k/n + (k-p);
        // cout<<x<<endl;
        int m = x/n;
        int ans = p+x+m;

        cout<<ans<<endl;
        // cout<<ans<<endl;

        while(x != 0)
        {
            ans += x/n;
            x = x/n;
        }
        // if(k%n == 0)
        // {   
        //     cout<<ans-1<<endl;
        // }
        // else if((k+1)%n == 0)
        // {
        //     cout<<ans+1<<endl;
        // }
        // else
        // {
        //     cout<<ans<<endl;
        // }
        

        // int ans = p+p/n+(k-p);
        // cout<<ans<<endl;

        // if(((k+(k/n))/n) == (k/n)) cout<<k+k/n<<endl;
        // else if(((k+(k/n))/n) == n) cout<<(k+(k/n)+1)<<endl;

    }

    return 0;
}