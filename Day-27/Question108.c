//WAP to Create marksheet generation system.

#include<stdio.h>

struct Student{

    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

};

int main(){
    
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &s.m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &s.m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%d", &s.m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%d", &s.m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%d", &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;

    s.percentage = s.total / 5.0;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);

    printf("Subject 1   : %d\n", s.m1);
    printf("Subject 2   : %d\n", s.m2);
    printf("Subject 3   : %d\n", s.m3);
    printf("Subject 4   : %d\n", s.m4);
    printf("Subject 5   : %d\n", s.m5);

    printf("Total Marks : %d\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if (s.percentage >= 60)
        printf("Division    : First Division");

    else if (s.percentage >= 45)
        printf("Division    : Second Division");

    else if (s.percentage >= 33)
        printf("Division    : Third Division");

    else
        printf("Division    : Fail");

    return 0;


}



