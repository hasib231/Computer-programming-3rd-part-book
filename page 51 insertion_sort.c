#include<stdio.h>
void insertion_sort(int A[],int n)
{
    int i,j,item,k;

    for(i=1;i<n;i++){

        item = A[i];

        j=i-1;

        while(j>=0 && A[j]>item){
            A[j+1] = A[j];
            j=j-1;
        }

        A[j+1] = item;


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
    insertion_sort(ara,n);

    printf("After sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",ara[i]);

    }
}
