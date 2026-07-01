//WAP to Create mini employee management system.

#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], salary[100];
    char name[100][50], department[100][50];
    int count = 0;
    int choice, i, empId, found, j;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[count]);

                printf("Enter Employee Name: ");
                scanf("%s", name[count]);

                printf("Enter Department: ");
                scanf("%s", department[count]);

                printf("Enter Salary: ");
                scanf("%d", &salary[count]);

                count++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Employee Records Found.\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID         : %d\n", id[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %d\n", salary[i]);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Employee ID to Search: ");
                scanf("%d", &empId);

                for(i = 0; i < count; i++)
                {
                    if(id[i] == empId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", id[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %d\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee Not Found.\n");

                break;

            case 4:
                found = 0;

                printf("Enter Employee ID to Delete: ");
                scanf("%d", &empId);

                for(i = 0; i < count; i++)
                {
                    if(id[i] == empId)
                    {
                        for(j = i; j < count - 1; j++)
                        {
                            id[j] = id[j + 1];
                            salary[j] = salary[j + 1];
                            strcpy(name[j], name[j + 1]);
                            strcpy(department[j], department[j + 1]);
                        }

                        count--;
                        found = 1;

                        printf("Employee Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee Not Found.\n");

                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}