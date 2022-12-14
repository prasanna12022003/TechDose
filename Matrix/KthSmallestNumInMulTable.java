class Solution {
    public int findKthNumber(int m, int n, int k) {
        int left=1,right=m*n;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(smallest(mid,m,n,k))
                right=mid;
            else left=mid+1;
            
        }
        return left;
    }
    
    private boolean smallest(int num,int m,int n,int k)
    {
        int count=0;
        for(int i=1;i<=m;i++)
        {
            count+=Math.min(num/i,n);
        }
        return count>=k;
    }
}
