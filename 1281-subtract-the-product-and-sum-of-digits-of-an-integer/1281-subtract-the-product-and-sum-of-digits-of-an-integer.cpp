class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int temp = n;

        while(temp>0){
            int ld = temp%10;
            sum += ld;
            prod *= ld;
            temp/=10;
        }
        return prod - sum;
    }
};