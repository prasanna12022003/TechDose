class Solution {
public:
    void sortColors(vector<int>& nums) {
       int p1=0,p=0,p2=nums.size()-1;
        while(p<=p2){
            if(nums[p]==0){
                nums[p]=nums[p1];
                nums[p1]=0;
                p1++;
                p++;
            }else if(nums[p]==2){
                nums[p]=nums[p2];
                nums[p2]=2;
                p2--;
            }else
                p++;
        }
    }
};