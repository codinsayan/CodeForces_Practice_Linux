//Again Fucking long long int problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,min=0,max=0;
        cin>>n;

        if(n%2 != 0 or n<4)
        {
            cout<<-1<<endl;
        }
        else
        {
            // if(n%4==0 && n%6==0)
            // {
            //     min = n/6;
            //     max = n/4;
            // }
            // else if(n%4==0 && n%6!=0)
            // {
            //     min = n/6+1;
            //     max = n/4;
            // }
            // else if(n%4!=0 && n%6==0)
            // {
            //     min = n/6;
            //     max = n/4+1;
            // }
            long long int p = n/2;
            if(p%3==0)
            {
                min = p/3;
            }
            else
            {
                min = (p+(3-(p%3)))/3;
            }
            if(p%2==0)
            {
                max = p/2;
            }
            else
            {
                max = (p-(p%2))/2;
            }
            
            cout<<min<<" "<<max<<endl;

        }
    }
    return 0;
}
