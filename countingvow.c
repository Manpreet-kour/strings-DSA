#include<stdio.h>
int main(){
    char A[]="How are you";
    int vcount=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]=='a'|| A[i]=='e'||A[i]=='o'||A[i]=='i'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
            vcount++;
        }
    }
    printf("%d",vcount);
    return 0;
}