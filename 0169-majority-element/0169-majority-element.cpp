class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter =0, majority=nums[0];
        for (int it: nums){
            if(counter ==0){
                majority= it;
            }
            if(it==majority){
                counter++;
            }else{
                counter--;
            }
        }
        return majority;
    }
};