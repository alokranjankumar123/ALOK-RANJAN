#include<stdio.h>

    struct ECE_A_student
    {
    char name[10];
    int rollno;
    char gender;
    } ;

void main ()
    {

        struct ECE_A_student s1={"rishi",1,'M'};
        struct ECE_A_student s2={"nikhil",2,'M'};
        struct ECE_A_student s3={"kirti",3,'M'};
        struct ECE_A_student s4={"shivesh",4,'M'};
        struct ECE_A_student s5={"ranjan",5,'M'};
        struct ECE_A_student s6={"ravi",6,'M'};
        struct ECE_A_student s7={"vikrant",7,'M'};
        struct ECE_A_student s8={"vivek",8,'M'};
        struct ECE_A_student s9={"riddhi",9,'F'};
        struct ECE_A_student s10={"siddhi",10,'F'};

        printf("info for s1");
        printf("\n %s %d %c",s1.name,s1.rollno,s1.gender);
         printf("\ninfo for s2");
        printf("\n %s %d %c",s2.name,s2.rollno,s2.gender);
         printf("\ninfo for s3");
        printf("\n %s %d %c",s3.name,s3.rollno,s3.gender);
         printf("\ninfo for s4");
        printf("\n %s %d %c",s4.name,s4.rollno,s4.gender);
         printf("\ninfo for s5");
        printf("\n %s %d %c",s5.name,s5.rollno,s5.gender);
         printf("\ninfo for s6");
        printf("\n %s %d %c",s6.name,s6.rollno,s6.gender);
         printf("\ninfo for s8");
        printf("\n %s %d %c",s8.name,s8.rollno,s8.gender);
         printf("\ninfo for s8");
        printf("\n %s %d %c",s8.name,s8.rollno,s8.gender);
         printf("\ninfo for s9");
        printf("\n %s %d %c",s9.name,s9.rollno,s9.gender);
         printf("\ninfo for s10");
        printf("\n %s %d %c",s10.name,s10.rollno,s10.gender);




    }