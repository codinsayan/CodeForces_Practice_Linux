#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
signed main(){
 
    int t;
    cin>>t;
    
    while(t--) {
    
        int n, count2 = 0, count3=0, p=0, sum =0;
        cin>>n;
        
        int temp = n;
        while(temp>0) {
            p = temp%10;
            if(p == 2) count2++;
            if(p == 3) count3++;
            sum += p;
            temp /= 10;
        }
        
        if(n%9 == 0) cout<<"YES\n";
        else if((count2 == 0) && (count3 == 0) && (n%9 != 0)) cout<<"NO\n";
        else { 
            // int diff=0;
            // int maxm = 2*count2 + 6*count3;
            // if(sum<9) {
            //     diff = 9-sum;
            // }
            // else {
            //     diff = 9 - (sum%9);
            //     // int p = (maxm - diff) / 9;
            // }
            
            long long check = 0;
            bool flag = true;
            // for(int i = 0; i<=p; i++) {
            //     if(flag == true) {
            //         diff += 9*p;
                    // if(diff%2 == 0) {
 
            // cout<<count2<<" "<<count3<<endl;
            if(count2 > 9) count2 = 9;
            if(count3 > 9) count3 = 9;

            for(int j = 0; j<= count2; j++) {
                if (flag == true) {
                    for(int k = 0; k<= count3; k++) {
                        check = 2*j + 6*k;
                        check += sum;
                        if (check % 9 == 0) {
                            cout<<"YES\n";
                            flag = false;
                            break;
                        }
                        else continue;
                    }
                }
                else break;
            }
            if(flag == true) cout<<"NO\n";
        }
    }
    return 0;
}