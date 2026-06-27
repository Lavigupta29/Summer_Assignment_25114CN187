//WAP to Create salary management system.

#include<stdio.h>

struct Salary{

    int id;
    char name[50];
    float salary;
};

int main(){

    struct Salary s[100];
    int n = 0, choice, i, id, found = 0;

    do{
        printf("\n=====Salary Management System=====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
               printf("Enter Employee ID: ");
               scanf("%d", &s[n].id);

               printf("Enter Employee Name: ");
               scanf(" %[^\n]", &s[n].name);

               printf("Enter Salary: ");
               scanf("%f", &s[n].salary);

               n++;

               printf("Record Added Successfully!\n");

               break;

        case 2:
            if(n == 0){
                printf("No Records Found!\n");
            }
            else{
                printf("\nSalary Records\n");

                for(i = 0; i < n; i++){

                    printf("\nEmployee %d\n", i + 1);
                    printf("ID : %d\n", s[i].id);
                    printf("Name: %s\n", s[i].name);
                    printf("Salary : %.2f\n", s[i].salary);
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter Employee ID: ");
            scanf("%d", &id);

            for(i = 0; i < n; i++){
                if(s[i].id == id){
                    printf("\nRecord Found!\n");
                    printf("ID : %d\n", s[i].id);
                    printf("Name : %s\n", s[i].name);
                    printf("Salary: %.2f\n", s[i].salary);

                    found = 1;
                    break;
                }
            }

            if(found == 0){
                printf("Record Not Found!\n");
            }

            break;

        case 4:
            found = 0;

            printf("Enter Employee ID: ");
            scanf("%d", &id);
                        
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("Enter New Salary: ");
                    scanf("%f", &s[i].salary);

                    printf("Salary Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Record Not Found!\n");
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


