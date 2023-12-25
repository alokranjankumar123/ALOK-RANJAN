#include<stdio.h>
#include<string.h>

int main(){
    char a[60],b[50];
    int words;
    printf("enter a word:");
    gets(a);

    printf("enter another word:");
    gets(b);

    words=strcmp(a,b);

    if(words==0)
    printf("same");
    else
    printf("not same");

return 0;
}
