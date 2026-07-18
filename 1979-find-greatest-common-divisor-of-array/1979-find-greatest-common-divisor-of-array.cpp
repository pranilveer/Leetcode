class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans =1;
        int minN=INT_MAX;
        int maxN =INT_MIN;

        for(int num : nums){
            minN = min(minN, num);
            maxN = max(maxN, num);
        }
        
        for(int i=1; i<=minN; i++){
            if(minN%i==0 && maxN%i==0){
                ans = i;
            }
        }
    return ans;
    }
};