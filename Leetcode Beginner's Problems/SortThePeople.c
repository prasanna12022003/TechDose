for(int i=0;i<namesSize;i++){
        for(int j=i+1;j<namesSize;j++){
            if(heights[i]<heights[j]){
                char *tmp=(char*)malloc(sizeof(char)*20);
                tmp = names[i];
                names[i]=names[j];
                names[j]=tmp;
                int temp=0;
                temp=heights[i];
                heights[i]=heights[j];
                heights[j]=temp;
            }
        }
    }
    *returnSize = namesSize;
    return names;