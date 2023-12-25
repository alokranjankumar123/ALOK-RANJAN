#include<stdio.h>
#include<string.h>

int main(){
    char A[]="shivesh";
    char B[]="shivam";
    char *strcat;

    //printf("%d\n",strcmp(A,B));
    //printf("%d\n",strcpy(B,A));
    //printf("%s\n",strcat(B,A));
    printf("after reversing %d",strrev(A,B));

return 0;
}