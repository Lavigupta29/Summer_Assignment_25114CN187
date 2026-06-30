//WAP to Create contact management system.

#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int count = 0;
    int choice, i, found;
    char search[50];

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", c[count].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[count].phone);

                count++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Contacts Available.\n");
                }
                else
                {
                    printf("\nContact List:\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("%d. Name : %s\n", i + 1, c[i].name);
                        printf("   Phone: %s\n", c[i].phone);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Name to Search: ");
                scanf("%s", search);

                for(i = 0; i < count; i++)
                {
                    if(strcmp(c[i].name, search) == 0)
                    {
                        printf("Contact Found!\n");
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Contact Not Found.\n");
                }
                break;

            case 4:
                found = 0;

                printf("Enter Name to Delete: ");
                scanf("%s", search);

                for(i = 0; i < count; i++)
                {
                    if(strcmp(c[i].name, search) == 0)
                    {
                        int j;

                        for(j = i; j < count - 1; j++)
                        {
                            c[j] = c[j + 1];
                        }

                        count--;
                        found = 1;

                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Contact Not Found.\n");
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