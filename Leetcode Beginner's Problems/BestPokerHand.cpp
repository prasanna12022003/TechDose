class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int n=suits.size();
        map<char,int> fsuits;
        map<int,int> frank;
        string ans="High Card";
        for(int i=0;i<5;i++){
            fsuits[suits[i]]++;
            frank[ranks[i]]++;
        }
        
        if(fsuits['a']==5 || fsuits['b']==5||fsuits['c']==5||fsuits['d']==5){
            ans="Flush";
            return ans;
        }
        
        for(int i=1;i<=13;i++){
            if(frank[i]>=3){
                ans="Three of a Kind";
                return ans;
            }
        }
        
        for(int i=1;i<=13;i++){
            if(frank[i]==2){
                ans="Pair";
                return ans;
            }
        }
        
        return ans;
        
        
        
    }
};
