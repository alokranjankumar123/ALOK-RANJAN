#include<stdio.h>
#include<string.h>
int main (){
    char a[50];
    int words;
    printf("enter a word: ");
    gets(a);
    
    int length=strlen(a)-1;

    for (int i = 0; i <length ; i++)      

    {
        words=a[i];
        a[i]=a[length];
        a[length--]=words;
        
    }
    printf("reverse a is : %s",a);
    


return 0;
}