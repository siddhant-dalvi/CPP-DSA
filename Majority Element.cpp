class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele;
        
        for(auto i: nums){
            if(count == 0){
                ele = i;
                count++;
            }
            else if(i == ele)
                count++;
            else 
                --count;
        }
        
        int cnt = 0;
        for(auto i: nums){
            if(ele == i)
                ++cnt;
        }
        
        if(cnt > nums.size()/2)
            return ele;
        return -1;
    }
};
