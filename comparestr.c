#include<stdio.h>
int main(){
    char A[]="painting";
    char B[]="painter";
    int i,j;
    for(i=0,j=0;A[i]!='\0',B[j]!='0';i++,j++)
    {
        if(A[i]!=B[i]){
            break;
        }
    }
        if(A[i]==B[i]){
            printf("both are equal");
        }
        else if(A[i]<B[j]){
            printf("first word will come first in dictionary");
        }
        else{
            printf("second word will come first in dictionary");
        }
    
    return 0;
}