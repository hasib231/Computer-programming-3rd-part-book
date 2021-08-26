#include<stdio.h>

int main()
{
    int A[]={3,4,1,6,2,4,9,7,8,4,2,1};
    int count[11],i,x,j;
    for(i=0;i<11;i++){
        count[i]=0;
    }
    for(i=0;i<=11;i++){
        x=A[i];
        count[x]=count[x]+1;
    }
    for(i=0;i<11;i++){
        printf("index : %d, value : %d\n",i,count[i]);
    }
    printf("\nAfter sorting:\n");
    for(i=0;i<11;i++){
        for(j=0;j<count[i];j++){
            printf("%d ",i);
        }
    }

}
