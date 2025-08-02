#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
    
        string s;
        cin>>s;

        int n = s.size();

        int arr[]={0,0};

        for(int i = 0; i<n; i++) {

            arr[(s[i] - '0')] += 1;
        }

        for(int i = 0; i<=n; i++) {
            if((i == n) || (arr[abs(1-(s[i] - '0'))]) == 0) {
                cout<<n-i<<endl;
                break;
            }
            arr[abs(1-((s[i]) - '0'))]--;
        }
    }
}