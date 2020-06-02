class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int x=num;
        if (x == 0 || x == 1) 
            return true; 
        long long int i = 1, result = 1; 
        while (result <= x){ 
            i++; 
            result = i * i; 
            if(result ==x) 
                return true;
        } 
        return false; 
    }
};
