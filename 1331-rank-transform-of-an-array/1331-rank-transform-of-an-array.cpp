class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        unordered_map<int, int> mpp;
        sort(temp.begin(), temp.end());
        int rank =1;
        for(auto it: temp){
            if(mpp.find(it) == mpp.end()){
            mpp[it] = rank++;
            }
        }
        int i=0;
        for (int i = 0; i < arr.size(); i++) {
            temp[i] = mpp[arr[i]];
        }
        return temp;
    }
};