class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int l=c.size();
        set<float>s;
        for(int i=1;i<l;i++){
            float a=c[i][1]-c[i-1][1];
            float b=c[i][0]-c[i-1][0];
            float m=a/b;
            //cout<<m<<endl;
            s.insert(m);
        }
        if(s.size()==1) 
            return true;
        else 
            return false;
    }
};
