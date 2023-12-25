#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("multipication_table.txt","w");

    if (fp == NULL){
        printf("file failed to open.\n");
        return 1;
    }

    fprintf(fp,"number\n");
    
    for (int i =2;i<=50; i++){
    fprintf(fp," multipication table of %d :\n", i);
    for( int j=1; j<=10; j++){
        fprintf(fp, "%d * %d = %d\n",i,j,i*j);
    }
    fprintf(fp,"\n");
    }

    fclose(fp);
    printf("number append to the file success.\n");










    return 0;
}