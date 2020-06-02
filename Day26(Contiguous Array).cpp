class Solution {
public:
    int findMaxLength(vector<int>& n) {
        int l=n.size(),ans=0;
        for(int i=0;i<l;i++) if(n[i]==0) n[i]=-1;
        vector<int>pre;
        pre.push_back(0);
        for(int x:n){
            pre.push_back(pre.back()+x);
        }
        for(int x:pre){
            cout<<x<<" ";
        }
        unordered_map<int,int> fir;
        for(int i=0;i<(int) pre.size();i++){
            int x=pre[i];
            auto it=fir.find(x);
            if(it!=fir.end()) 
                ans=max(ans,i-fir[x]);
            else 
                fir[x]=i;
        }
        return ans;
    }
};
