class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int n=m.size(),l=m[0].size(),sum=0,top_left=0;
        vector<int>counts(l,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<l;j++){
                int left,top,top_left;
                if(m[i][j]==1){
                    left= (j==0) ? 0 : m[i][j-1];
                    top= (i==0) ? 0 : m[i-1][j];
                    if(i-1<0 || j-1<0) 
                        top_left=0;
                    else 
                        top_left=m[i-1][j-1];
                    m[i][j]= 1+ min({left,top,top_left});
                    sum+=m[i][j];
                }
            }
        }
        return sum;
    }
};
