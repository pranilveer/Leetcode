class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        int target = 0;
        vector<vector<int>> ans;

        for(int i=0; i<nums.size()-2; i++){
            int left = i+1, right = nums.size()-1;
            while(left<right){
                if(nums[i]+ nums[left]+ nums[right] == target){
                    s.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }else if((nums[i]+ nums[left]+ nums[right]) > target){
                    right--;
                }else {
                    left++;
                }
            }
        }

        for(auto it : s){
            ans.push_back(it);
        }
        return ans;
    }
};