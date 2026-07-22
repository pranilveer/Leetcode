class Solution {
public:
    int maxDistinct(string s) {
        bool seen[26] = {false};

        int count =0;

        for(int i=0; i<s.size(); i++){
            int index = s[i] - 'a';
            if(!seen[index]){
                seen[index]= true;
                count++;
            }
        }
        return count;
    }
};