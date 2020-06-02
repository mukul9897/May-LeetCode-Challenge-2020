class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1;
        int count=0,b[26]={0};
        if((int)s.length()==0){}
        else if(p.length()>s.length()){}
        else{
            for(int k=0;k<(int)p.length();k++) 
                b[p[k]-'a']++;
            for(int i=0;i<=s.length()-p.length();i++){
                int flag2=0,a[26]={0};
                for(int j=i;j<i+p.length();j++) 
                    a[s[j]-'a']++;
                for(int j=0;j<26;j++) 
                    if(a[j]!=b[j]) 
                        flag2=1;
                if(flag2==0) 
                    v1.push_back(i);
            }
        }
            return v1;
        }
};
