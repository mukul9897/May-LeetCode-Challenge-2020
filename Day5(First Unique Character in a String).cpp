class Solution {
public:
    int firstUniqChar(string s) {
        int flag=0,m,b[26]={0},a[26]={0};
        for(int i=0;i<(int)s.length();i++){
            a[s[i]-'a']++;
            b[s[i]-'a']=1;
        }
        for(int i=0;i<(int)s.length();i++){
            if(a[s[i]-'a']==1 && b[s[i]-'a']==1){ 
                m=i; 
                flag=1; 
                break; 
                }
            }
        if(s.length()==1) 
            return 0;
        else if(flag==0) 
            return -1;
        else 
            return m;
    }
};
