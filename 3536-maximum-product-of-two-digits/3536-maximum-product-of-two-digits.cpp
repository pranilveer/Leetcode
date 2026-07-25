class Solution {
public:
    int maxProduct(int n) {
        int temp = n;
        int ans = 1;
        vector<int> v1;
        while(temp>0){
            int ld = temp%10;
            v1.push_back(ld);
            temp/=10;
        }
        sort(v1.begin(), v1.end());
        int n1= v1.size()-1;

        return max((v1[0]*v1[1]), (v1[n1-1]*v1[n1]));
    }
};