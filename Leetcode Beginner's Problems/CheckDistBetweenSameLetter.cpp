class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char , int> mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]] = i;
        }
        
        for(int i = 0 ; i < s.size() ; i++){
            if(mp[s[i]] > 0){
                int dis = mp[s[i]] - i - 1;
                if(dis != distance[s[i] - 97]){
                    return false;
                }
                mp[s[i]] = -1;
            }
        }
        return true;
    }
};