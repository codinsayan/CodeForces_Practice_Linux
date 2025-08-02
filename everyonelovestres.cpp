#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;

        if(n == 1 || n == 3) cout<<-1<<endl;
        else if(n == 2) cout<<66<<endl;
        else
        {   if(n%2 != 0)
            {
                for(int i = 1; i<=n; i++)
                {
                    if(i%2!=0)
                    {
                        if(i == n) cout<<6;
                        else cout<<3;
                    }
                    else
                    {
                        if(i==n-1 || i==n-3) cout<<6;
                        else cout<<3;
                    }
                }
                cout<<endl;
            }
            else
            {
                for(int i = 1; i<=n; i++)
                {
                    if(i==n || i==n-1) cout<<6;
                    else cout<<3;
                }
                cout<<endl;
            }
        }
        

    }

    return 0;
}


