class Solution {
    public int hardestWorker(int n, int[][] logs) {
        int max=0;
        int r=logs.length;
        int c=logs[0].length;
        int sval=0;
        int id=0;
        for(int i=0;i<r;i++){
            System.out.println(logs[i][1]-sval);
        if((logs[i][1]-sval)>=max){
            if(logs[i][1]-sval==max){
                if(logs[i][0]<id){
                    max=(logs[i][1]-sval);
                    id=logs[i][0];
                }
            }else{
                max=(logs[i][1]-sval);
                id=logs[i][0];
            }
        }sval=logs[i][1];
        }return id;
           
    }
}