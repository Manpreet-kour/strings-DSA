#include<stdio.h>
int main(){
    char A[]="How are you";
    int word=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==' '&& A[i-1]!=' '){
            word++;
        }
    }
    printf("total no of words are %d",word+1);
    return 0;
}