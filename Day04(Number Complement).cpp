#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution {
public:
    ll findComplement(ll n) {
        ll binaryNum[32]; 
        ll i = 0,z=n; 
        while (n > 0) {
            binaryNum[i] = n % 2; 
            n = n / 2; 
            i++; 
        } 
        ll count=1,sum=0;
        for (int j = 0; j <= i-1; j++){
            if(binaryNum[j]==1) 
                binaryNum[j]=0;
            else 
                binaryNum[j]=1;
            //cout<<binaryNum[j]<<" ";
            sum+=count*binaryNum[j];
            count*=2;
        }
    if(z==2) 
        return 1;
    else 
        return sum;
    }
};
