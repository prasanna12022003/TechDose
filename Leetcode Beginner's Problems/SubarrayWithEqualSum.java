class Solution {
    public boolean findSubarrays(int[] n) {
        int k=n.length;
        int a[]=new int[k-1];
        for(int i=1;i<k;i++)
        {
            a[i-1]=n[i-1]+n[i];
        }
        Arrays.sort(a);
        for(int i=0;i<k-2;i++)
        {
            if(a[i]==a[i+1])
                return true;
        }
        return false;
    }
}