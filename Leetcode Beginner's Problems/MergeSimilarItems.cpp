class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int hsh[1001] = {0};
        for(int i = 0; i<items1.size(); i++){
            hsh[items1[i][0]] += items1[i][1];        
        }
        for(int i = 0; i<items2.size(); i++){
            hsh[items2[i][0]] += items2[i][1];        
        }
        vector<vector<int>> ans;
        for(int i = 1; i<=1000; i++){
            if(hsh[i] != 0){
                vector<int> v;
                v.push_back(i);
                v.push_back(hsh[i]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};
