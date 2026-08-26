class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
    int n= (candyType.size())/2;
    unordered_map<int, int> mp;
    int count=0;
    for(int i=0; i<candyType.size(); i++){
        mp[candyType[i]]++;
    }
    for(auto it: mp){
        count++;
    }
    if(count>n){
        return n;
    }
        return count;
    }
};