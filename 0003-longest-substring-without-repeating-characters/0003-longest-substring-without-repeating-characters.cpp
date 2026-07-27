class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0;
        int ans=0;
        unordered_set<char> s1;

        for(int i=0; i<s.size(); i++){
            while(s1.find(s[i]) != s1.end()){
                s1.erase(s[j]);
                j++;
            }
            s1.insert(s[i]);
            ans=max(ans, i-j+1);
        }
        return ans;
    }
};