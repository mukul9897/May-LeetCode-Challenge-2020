class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<(int)J.length();i++){
            for(int j=0;j<(int)S.length();j++){
                if(J[i]==S[j]) count++;
            }
        }        
        return count;
    }
};
