class Solution {
public:
    string greatestLetter(string s) {
        vector<int> A(26,0);
        vector<int> a(26,0);
        string x="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                a[s[i]-97]=1;
            }
            if(s[i]>='A' && s[i]<='Z'){
                A[s[i]-65]=1;
            }
        }
        for(int i=25;i>=0;i--){
            if(A[i]==1 && a[i]==1){
                x.push_back(char('A'+i));
                return x;
            }
        }
        return x;
    }
};