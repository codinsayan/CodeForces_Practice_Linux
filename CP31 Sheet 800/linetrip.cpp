#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        vector <int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }

        vector <int> ans;
        ans.push_back(v[0]);
        ans.push_back(2*(x-v[n-1]));

        for(int i=0; i<n-1; i++)
        {
            ans.push_back(v[i+1]-v[i]);
        }
        // for(int i = 0; i<ans.size(); i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;


        int max = ans[0];
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]>max)
            {
                max = ans[i];
            }
        }
        cout<<max<<endl;
    }



    return 0;
}