class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int secondMax =0, maxNum =0;
        for(int num : nums){
            if(num > maxNum){
                secondMax = maxNum;
                maxNum = num;
            }else if(num>= secondMax){
                secondMax = num;
            }
        }
        return (maxNum-1)*(secondMax-1);
    }
};