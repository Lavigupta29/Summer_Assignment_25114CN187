//WAP to Create ATM simulation.

#include<stdio.h>

int main(){

    int choice;
    float balance = 10000, deposit, withdraw;

    do{
        printf("==== ATM MENU ====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Current Balance: %.2f\n",balance);
                break;
                
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &deposit);

                balance = balance + deposit;

                printf("Deposit Successful!\n");
                printf("Current Balance: %.2f\n", balance);
                break;
            
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &withdraw);
                
                if(withdraw <= balance)
                {    
                    balance = balance - withdraw;
                    printf("Withdraw Successful!\n");
                    printf("Current Balance: %.2f\n", balance);

                }
                else{
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                break;

            default:
                printf("Invalid Choice!\n");    
        }
    }while(choice != 4);

    return 0;

}