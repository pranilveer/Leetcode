class Solution {
public:
    string build(string str){
        string ans;

        for(auto it: str){
            if(it != '#'){
                ans.push_back(it);
            }else if(!ans.empty()){
                ans.pop_back();
            }
        }
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};