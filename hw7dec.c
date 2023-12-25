#include<stdio.h>
#include<stdio.h>
int main(){
 FILE *fp;
    fp=fopen("test.txt","w");
    if(fp==NULL)
    printf("file doesnot exist");
    
    else
    printf("file exists");
    
   fprintf(fp,"%s","I am study in delhi university ");
return 0;
}