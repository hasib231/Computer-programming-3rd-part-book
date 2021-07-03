#include<stdio.h>
void selection_sort(int A[],int n)
{
    int i,j,index_min,temp;

    for(i=0;i<n-1;i++){
        index_min=i;

        for(j=i+1;j<n;j++){
            if(A[j]<A[index_min]){
                index_min=j;
            }
        }

        if(index_min!=i){
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }
}



int main()
{
    int n,i;
    printf("enter the array size\n");
    scanf("%d",&n);
    int ara[n];
    printf("enter the array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    selection_sort(ara,n);

    printf("After sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",ara[i]);

    }
}
