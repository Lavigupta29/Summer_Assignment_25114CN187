//WAP to Create inventory management system.

#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int count = 0;
    int choice, i, id, found;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. View Products\n");
        printf("3. Search Product\n");
        printf("4. Delete Product\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p[count].id);

                printf("Enter Product Name: ");
                scanf("%s", p[count].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[count].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[count].price);

                count++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Products Available.\n");
                }
                else
                {
                    printf("\nProduct List\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nProduct %d\n", i + 1);
                        printf("ID       : %d\n", p[i].id);
                        printf("Name     : %s\n", p[i].name);
                        printf("Quantity : %d\n", p[i].quantity);
                        printf("Price    : %.2f\n", p[i].price);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Product ID to Search: ");
                scanf("%d", &id);

                for(i = 0; i < count; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("Product Found!\n");
                        printf("ID       : %d\n", p[i].id);
                        printf("Name     : %s\n", p[i].name);
                        printf("Quantity : %d\n", p[i].quantity);
                        printf("Price    : %.2f\n", p[i].price);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found.\n");
                }
                break;

            case 4:
                found = 0;

                printf("Enter Product ID to Delete: ");
                scanf("%d", &id);

                for(i = 0; i < count; i++)
                {
                    if(p[i].id == id)
                    {
                        int j;

                        for(j = i; j < count - 1; j++)
                        {
                            p[j] = p[j + 1];
                        }

                        count--;
                        found = 1;

                        printf("Product Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found.\n");
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