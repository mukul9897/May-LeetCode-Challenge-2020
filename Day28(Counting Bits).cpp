class Solution {
public:
int BitsSetTable256[256];
    vector<int> countBits(int num) {
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=num;i++){
            v.push_back(v[i>>1] + i%2);
        }
        
        return v;
    } 
};
