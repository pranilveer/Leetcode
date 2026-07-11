class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans= -1;
        unordered_map<int, int> mpp;
        for(int num: arr){
            mpp[num]++;
        }
        for (auto it : mpp) {
            if (it.first == it.second) {
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};