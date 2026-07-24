class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(auto it: nums1){
            mpp[it]++;
        }
        vector<int> res;
        for(auto it: nums2){
            if(mpp[it]>0){
                res.push_back(it);
                mpp[it]=0;
            }
        }
        return res;
    }
};