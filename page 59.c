#include<stdio.h>
#include<string.h>
int is_balanced(char input[])
{
    char stack1[128],stack2[128],stack3[128],last_char,ch;
    int top1,top2,top3,i,len;

    top1=0,top2=0,top3=0;
    len=strlen(input);

    for(i=0;i<len;i++)
    {
        ch=input[i];

        if(ch=='(' || ch==')'){

          if(ch=='('){
            stack1[top1]='(';
            top1++;
           }
           else if(ch==')'){
            if(top1==0){
                return 0;
            }
            top1--;
            last_char=stack1[top1];
            if(last_char!='('){
                return 0;
               }
           }
           }


        else if(ch=='{' || ch=='}'){
            if(ch=='{'){
            stack2[top2]='{';
            top2++;
            }
            else if(ch=='}'){
             if(top2==0){
                return 0;
            }
            top2--;
            last_char=stack2[top2];
             if(last_char!='{'){
                return 0;
               }
           }
           }


        else if(ch=='[' || ch==']'){
           if(ch=='['){
            stack3[top3]='[';
            top3++;
           }
           else if(ch==']'){
            if(top3==0){
                return 0;
            }
            top3--;
            last_char=stack3[top3];
            if(last_char!='['){
                return 0;
               }
           }
           }


    }

    if(top1==0 && top2==0 && top3==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char input[140];
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
    gets(input);
    if(is_balanced(input)){
        printf("Yes\n",input);
    }
    else{
        printf("No\n",input);
    }
    }
    return 0;
}
