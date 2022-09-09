class Solution {
public:
    int singleNumber(vector<int>& num) {
        int i=0;
        int j=0;
        for(int k:num){
            i=~j&(i^k);
            j=~i&(j^k);
        }
      return i ;  
    }
};

