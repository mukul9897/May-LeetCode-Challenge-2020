class Solution {
public:
    bool checkInclusion(string s2, string s1) {
        int count=0,b[26]={0};
        if(s2.length()>s1.length()) 
            return false; 
        else{
            for(int k=0;k<(int)s2.length();k++) 
                b[s2[k]-'a']++;
            for(int i=0;i<=s1.length()-s2.length();i++){
                int flag2=0,a[26]={0};
                for(int j=i;j<i+s2.length();j++) 
                    a[s1[j]-'a']++;
                for(int j=0;j<26;j++) 
                    if(a[j]!=b[j]) 
                        flag2=1;
                if(flag2==0) 
                    return true;
            }
            return false;
        }
    }
};
