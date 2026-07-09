class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum =0;
        int rightsum =0;

        for(int num : nums){
            rightsum+=num;
        }
        for(int i=0; i<nums.size(); i++){
            rightsum -= nums[i];
            if(rightsum == leftsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};