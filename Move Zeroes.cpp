class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int l=0, r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
                
            }
            r++;
        }
    }
};
