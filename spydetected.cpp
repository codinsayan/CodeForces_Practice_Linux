#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector <int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }

        int p = v[0], count1=0, c1i=0, count2=0, c2i=0;

        for(int i=0; i<n; i++)
        {
            if(v[i]==p)
            {
                count1 += 1;
                c1i = i;
            }
            else
            {
                count2 += 1;
                c2i = i;
            }
        }
        if(count1==1)
        {
            cout<<c1i+1<<endl;
        }
        else
        {
            cout<<c2i+1<<endl;
        }

    }



    return 0;
}