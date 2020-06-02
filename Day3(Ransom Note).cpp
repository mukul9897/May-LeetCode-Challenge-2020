class Solution {
public:
    bool canConstruct(string a, string b) {
        if(a.length()<=b.length()){
            int count=0;
            for(int i=0;i<(int)a.length();i++){
                for(int j=0;j<(int)b.length();j++){
                    if(a[i]==b[j]){ 
                        count++; 
                        b.erase(b.begin()+j); 
                        break;
                    }
                }
            } 
            if(count==(int)a.length()) 
                return true;
            else 
                return false;
        }
        return false;
    }
};
