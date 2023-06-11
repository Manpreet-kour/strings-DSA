//there are two methods of reversing a string
//first is to copy the alphabets and then display
#include<stdio.h>
// int main(){
//     char A[]="python";
//     char B[7];
//     int i;
//     for( i=0;A[i]!='\0';i++)
//     {

//     }
//     i=i-1;
//     int j;
//     for( j=0;i>=0;i--,j++)
//     {
//         B[j]=A[i];
//     }
//     B[j]='\0';
//     printf("%s",B);
//     return 0;
// }
//other is to swap the elements
int main(){
    char A[]="python";
    char t;
    int i,j;
    for(j=0;A[j]!='\0';j++){

    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    printf("%s",A);
    return 0;
}