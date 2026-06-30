//WAP to Create bank account system.

#include <stdio.h>
#include <string.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n = 0;
    int choice, accNo, i, found;
    float amount;

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &b[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &b[n].balance);

                n++;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Accounts Found.\n");
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        printf("\nAccount Number : %d", b[i].accNo);
                        printf("\nName           : %s", b[i].name);
                        printf("\nBalance        : %.2f\n", b[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == accNo)
                    {
                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amount);

                        b[i].balance += amount;

                        printf("Deposit Successful.\n");
                        printf("Current Balance: %.2f\n", b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found.\n");

                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == accNo)
                    {
                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amount);

                        if(amount <= b[i].balance)
                        {
                            b[i].balance -= amount;
                            printf("Withdrawal Successful.\n");
                            printf("Remaining Balance: %.2f\n", b[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found.\n");

                break;

            case 5:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == accNo)
                    {
                        printf("Account Holder : %s\n", b[i].name);
                        printf("Current Balance: %.2f\n", b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found.\n");

                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}




