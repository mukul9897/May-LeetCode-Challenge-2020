class Solution {
public:
    int majorityElement(vector<int>& n) {
        int l=(int)n.size();
        map<int,int>mp;
        for(int i=0;i<l;i++){
            mp[n[i]]++;
        }
        for(auto x:mp){
            if(x.second>l/2) 
                return x.first;
        }
        return 0;
    }
};
