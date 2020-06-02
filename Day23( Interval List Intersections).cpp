class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B){
        int j=0,i=0;
         vector<vector<int>> v;
        while(i!=(int)A.size() && j!=(int)B.size()){
            if(A[i][0]<=B[j][1] && A[i][0]>=B[j][0]){
                if(A[i][1]<=B[j][1]){
                    v.push_back({A[i][0],A[i][1]});
                    i++;
                }
                else{
                    v.push_back({A[i][0],B[j][1]});
                    j++;
                }
            }
            else if(A[i][1]<=B[j][1] && A[i][1]>=B[j][0]){
                v.push_back({B[j][0],A[i][1]});
                i++;
            }
            else if(A[i][0]<B[j][0] && A[i][1]>B[j][1]){
                v.push_back({B[j][0],B[j][1]});
                j++;
            }
            else if(A[i][0]<B[j][0] && A[i][1]<B[j][0]) i++;
            else if(A[i][0]>B[j][0] && A[i][1]>B[j][0]) j++;
            else j++;
        }
        return v;
    }
};
