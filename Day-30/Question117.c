//WAP to Create student record system using arrays and strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int count = 0;
    int choice, i, r, found;

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll[count]);

                printf("Enter Name: ");
                scanf("%s", name[count]);

                printf("Enter Marks: ");
                scanf("%d", &marks[count]);

                count++;
                printf("Student Record Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Records Found.\n");
                }
                else
                {
                    printf("\nStudent Records\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &r);

                for(i = 0; i < count; i++)
                {
                    if(roll[i] == r)
                    {
                        printf("Student Found!\n");
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found.\n");
                }
                break;

            case 4:
                found = 0;

                printf("Enter Roll Number to Delete: ");
                scanf("%d", &r);

                for(i = 0; i < count; i++)
                {
                    if(roll[i] == r)
                    {
                        int j;

                        for(j = i; j < count - 1; j++)
                        {
                            roll[j] = roll[j + 1];
                            marks[j] = marks[j + 1];
                            strcpy(name[j], name[j + 1]);
                        }

                        count--;
                        found = 1;

                        printf("Record Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found.\n");
                }
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