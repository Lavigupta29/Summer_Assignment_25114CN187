//WAP to Create student record management system.

#include<stdio.h>

struct student{

    int roll;
    char name[50];
    float marks;

};

int main(){

    struct student s[100];
    int n = 0, choice, roll, i, found = 0;

    do
    {
        printf("\n=====Student Record Management System=====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
               printf("Enter Roll Number: ");
               scanf("%d", &s[n].roll);

               printf("Enter name: ");
               scanf(" %[^\n]", s[n].name);

               printf("Enter marks: ");
               scanf("%f", &s[n].marks);

               n++;
               printf("Student Record Added Successfully!\n");
               break;

            case 2:
               if(n == 0){
                  printf("No records found!\n");
               }
               else{
                  printf("\nStudent Records:\n");

                  for(i = 0; i < n; i++){
                     printf("\nRoll No : %d", s[i].roll);
                     printf("\nName : %s", s[i].name);
                     printf("\nMarks : %.2f", s[i].marks);
                  }
               }
               break;

            case 3:
                found = 0;

                printf("Enter Roll Number To Search: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++){
                    if(s[i].roll == roll){
                        printf("\n Record Found \n");
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }

                if(found == 0){
                    printf("Student Not Found!\n");
                }

                break;

            case 4:
                found = 0;

                printf("Enter Roll Number To Update: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++){
                    if(s[i].roll == roll){
                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);

                        printf("Marks Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0){
                    printf("Student Not Found!\n");
                }

                break;

            case 5:
                printf("Existing Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 5);

    return 0;

}
