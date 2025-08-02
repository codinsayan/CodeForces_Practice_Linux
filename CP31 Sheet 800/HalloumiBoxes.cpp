#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector <int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }

        if(k>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            bool flag = false;
            for(int i=0; i<n-1; i++)
            {
                if(v[i]>v[i+1])
                {
                    flag = true;
                }
            }
            if(flag == false){
                cout<<"YES"<<endl;
            }
            else{
                flag = false;
                for(int i=1; i<n; i++)
                {
                    int k = v[0];
                    if(v[i]!=k)
                    {
                        flag = true;
                    }

                }

                if(flag==false)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

    }

    return 0;
}