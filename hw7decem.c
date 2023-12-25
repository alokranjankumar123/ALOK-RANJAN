#include<stdio.h>
#include<string.h>
    struct person{
        char name[50];
        int age;
        float salary;

    };
    int main(){
        FILE*fp;
        struct person persondata;

        fp=fopen("person_data.txt","w");
        if (fp == NULL) {
        printf("Unable to create file.\n");
        return -1;
    }

    // Get structure data from user or predefined values
    printf("Enter name: ");
    fgets(persondata.name, sizeof(persondata.name), stdin);

    printf("Enter age: ");
    scanf("%d", &persondata.age);

    printf("Enter salary: ");
    scanf("%f", &persondata.salary);

    // Write structure data to the file
    fprintf(fp, "Name: %s\nAge: %d\nSalary: %.2f\n", persondata.name, persondata.age, persondata.salary);

    // Close the file
    fclose(fp);











    return 0;
}