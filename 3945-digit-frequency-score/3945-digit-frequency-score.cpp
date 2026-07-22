class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum =0;
        unordered_map<int, int> mpp;

        while(n>0){
            int ld=n%10;
            mpp[ld]++;
            n/=10;
        }

        for(auto it: mpp){
            sum += (it.first*it.second);
        }
        return sum;
    }
};