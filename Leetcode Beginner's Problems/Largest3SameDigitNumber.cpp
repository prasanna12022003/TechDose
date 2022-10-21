class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> s = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
        for(auto str : s) {
            for(int i = 0; i < num.size(); i++) {
                if(str == num.substr(i, 3)) return str;
            }
        }
        return "";
    }
};