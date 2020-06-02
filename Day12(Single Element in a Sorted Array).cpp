class Solution {
public:
    int singleNonDuplicate(vector<int>& nums){
        for(int i=0;i<(int)nums.size();i+=2){
            if(i==nums.size()-1) 
                return nums[i];
            else if(nums[i]!=nums[i+1]) 
                return nums[i];
        } 
        return 0;
    }
};
