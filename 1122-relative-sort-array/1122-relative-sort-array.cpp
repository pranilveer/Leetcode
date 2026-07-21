class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> cnt(1001, 0);
        vector<int> ans;

        for(auto it: arr1){
             cnt[it]++;
        }

        for(auto it : arr2){
            while(cnt[it]-- >0){
                ans.push_back(it);
            }
        }

        for(int i=0; i<=1000; i++){
            while(cnt[i]-- >0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};