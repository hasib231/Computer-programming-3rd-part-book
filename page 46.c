#include<stdio.h>
void bubble_sort(int A[],int n)
{
    int i,j,temp,k;

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
        }
        printf("A[%d]=%d\n",k,A[k]);

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
    printf("\n\n");
    bubble_sort(ara,n);

    printf("After sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",ara[i]);

    }
}

