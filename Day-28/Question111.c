//WAP to Create ticket booking system.

#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of tickets!\n");
                }
                else if(bookedSeats + seats <= totalSeats)
                {
                    bookedSeats += seats;
                    printf("Booking Successful!\n");
                    printf("Booked Tickets = %d\n", bookedSeats);
                    printf("Available Tickets = %d\n", totalSeats - bookedSeats);
                }
                else
                {
                    printf("Sorry! Only %d tickets are available.\n", totalSeats - bookedSeats);
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of tickets!\n");
                }
                else if(seats <= bookedSeats)
                {
                    bookedSeats -= seats;
                    printf("Cancellation Successful!\n");
                    printf("Booked Tickets = %d\n", bookedSeats);
                    printf("Available Tickets = %d\n", totalSeats - bookedSeats);
                }
                else
                {
                    printf("You cannot cancel more than booked tickets!\n");
                }
                break;

            case 3:
                printf("Total Seats = %d\n", totalSeats);
                printf("Booked Seats = %d\n", bookedSeats);
                printf("Available Seats = %d\n", totalSeats - bookedSeats);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}