//WAP to Create mini library system.

#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], issued[100];
    char title[100][50];
    char author[100][50];

    int count = 0;
    int choice, i, bookId, found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[count]);

                printf("Enter Book Title: ");
                scanf("%s", title[count]);

                printf("Enter Author Name: ");
                scanf("%s", author[count]);

                issued[count] = 0;

                count++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    printf("\nBook List\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID     : %d\n", id[i]);
                        printf("Title  : %s\n", title[i]);
                        printf("Author : %s\n", author[i]);

                        if(issued[i] == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Book ID to Search: ");
                scanf("%d", &bookId);

                for(i = 0; i < count; i++)
                {
                    if(id[i] == bookId)
                    {
                        printf("Book Found!\n");
                        printf("ID     : %d\n", id[i]);
                        printf("Title  : %s\n", title[i]);
                        printf("Author : %s\n", author[i]);

                        if(issued[i] == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found.\n");
                }
                break;

            case 4:
                found = 0;

                printf("Enter Book ID to Issue: ");
                scanf("%d", &bookId);

                for(i = 0; i < count; i++)
                {
                    if(id[i] == bookId)
                    {
                        if(issued[i] == 0)
                        {
                            issued[i] = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Issued.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found.\n");

                break;

            case 5:
                found = 0;

                printf("Enter Book ID to Return: ");
                scanf("%d", &bookId);

                for(i = 0; i < count; i++)
                {
                    if(id[i] == bookId)
                    {
                        if(issued[i] == 1)
                        {
                            issued[i] = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Available.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found.\n");

                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}