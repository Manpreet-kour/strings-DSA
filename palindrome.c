#include<stdio.h>
int main(){
    char a[20];
    scanf("%s",a);
    int len=0;
    while(a[len]!=0){
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    int flag=0;
    while(i<=j){
        if(a[i]!=a[j]){
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0){
        printf("palindrome");
    }
    else {
        printf("not a palindrome");
    }
    return 0;

}