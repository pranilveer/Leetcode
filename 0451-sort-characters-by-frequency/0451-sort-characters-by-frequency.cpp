class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        string v;
        for (auto it : s) {
            mpp[it]++;
        }
        vector<vector<char>> bucket(s.size()+1);

        for (auto it : mpp) {
            char ch = it.first;
            int freq = it.second;

            bucket[freq].push_back(ch);
        }

        for(int i = bucket.size()-1; i>=1; i--){
            for(auto ch : bucket[i]){
                for(int j=0; j<i; j++){
                    v.push_back(ch);
                }
            }
        }

        return v;
    }
};