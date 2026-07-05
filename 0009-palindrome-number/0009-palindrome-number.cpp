class Solution {
public:
    bool isPalindrome(int x) {
        int long long temp=x, rev=0;
        while(temp>0){
            int long long ld= temp%10;
            rev = (rev*10)+ld;
            temp/=10;
        }
        return (rev==x);
    }
};

