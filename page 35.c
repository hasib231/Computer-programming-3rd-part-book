#include<stdio.h>

int binary_search(int A[],int n,int x)
{
    int left,right,mid;
    left=0;
    right=n-1;

    while(left<=right){

        mid=(left+right)/2;

        if(A[mid]==x){
            return 1;
        }

        if(A[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}


int main()
{
    int ara[]={2,4,5,6,8,10,15,17,19,24,27,35,38,42,47,50};
    int n=16,x,y;
    printf("Enter the searching number\n");
    scanf("%d",&x);
    y=binary_search(ara,n,x);
    if(y==1){
        printf("This number found\n");
    }
    else{
        printf("This number not found\n ");
    }

}
