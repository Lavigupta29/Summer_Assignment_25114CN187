//WAP to Create employee management system.

#include<stdio.h>

struct Employee{

    int id;
    char name[50];
    float salary;

};

int main(){

    struct Employee e[100];
    int n = 0, choice, id, i, found = 0;

    do{
        printf("\n=====Employee Management System=====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
               printf("Enter Employee ID: ");
               scanf("%d", &e[n].id);
               printf("Enter Employee Name: ");
               scanf(" %[^\n]", e[n].name);
               printf("Enter Salary: ");
               scanf("%f", &e[n].salary);

               n++;

               printf("Employee Added Successfully!\n");

               break;

            case 2:
               if(n == 0){
                  printf("No Employee Records Found!\n");
               }
               else{
                  printf("\nEmployee Records\n");

                  for(i = 0; i < n; i++){
                    printf("Employee %d\n", i + 1);
                    printf("ID : %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Salary: %.2f\n", e[i].salary);
                  }  
               }
               break;

            case 3:
                found = 0;

                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                for(i = 0; i < n; i++){
                    if(e[i].id == id){
                        printf("\nEmployee Found!\n");
                        printf("ID : %d\n", e[i].id);
                        printf("Name : %s\n", e[i].name);
                        printf("Salary: %.2f\n", e[i].salary);

                        found = 1;
                        break;   
                    }
                }
                if(found == 0){
                    printf("Employee Not Found!\n");
                }

                break;

            case 4:
                
                found = 0;

                printf("Enter Employee ID to Update Salary: \n");
                scanf("%d", &id);

                for(i = 0; i < n; i++){
                    if(e[i].id == id){
                        printf("Enter New Salary: \n");
                        scanf("%f", &e[i].salary);

                        printf("Salary Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0){
                    printf("Employee Not Found!\n");
                }

                break;

            case 5:

                printf("Thank You!\n");

                break;

            default:
               
                printf("Invalid Choice!\n");
        }

    }while(choice != 5);

return 0;

}