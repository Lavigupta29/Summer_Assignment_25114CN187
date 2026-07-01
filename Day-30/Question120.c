//WAP to Develop complete mini project using arrays, strings and functions.
//For Hospital Management System

#include <stdio.h>
#include <string.h>

int id[100], age[100], count = 0;
char name[100][50], disease[100][50], doctor[100][50];

void addPatient();
void viewPatients();
void searchPatient();
void updatePatient();
void deletePatient();

int main()
{
    int choice;

    do
    {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                viewPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
                break;

            case 5:
                deletePatient();
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

void addPatient()
{
    printf("\nEnter Patient ID: ");
    scanf("%d", &id[count]);

    printf("Enter Patient Name: ");
    scanf("%s", name[count]);

    printf("Enter Age: ");
    scanf("%d", &age[count]);

    printf("Enter Disease: ");
    scanf("%s", disease[count]);

    printf("Enter Doctor Name: ");
    scanf("%s", doctor[count]);

    count++;

    printf("Patient Added Successfully!\n");
}

void viewPatients()
{
    int i;

    if(count == 0)
    {
        printf("No Patient Records Found.\n");
        return;
    }

    printf("\n------ Patient Records ------\n");

    for(i = 0; i < count; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("ID      : %d\n", id[i]);
        printf("Name    : %s\n", name[i]);
        printf("Age     : %d\n", age[i]);
        printf("Disease : %s\n", disease[i]);
        printf("Doctor  : %s\n", doctor[i]);
    }
}

void searchPatient()
{
    int i, pid, found = 0;

    printf("Enter Patient ID to Search: ");
    scanf("%d", &pid);

    for(i = 0; i < count; i++)
    {
        if(id[i] == pid)
        {
            printf("\nPatient Found!\n");
            printf("ID      : %d\n", id[i]);
            printf("Name    : %s\n", name[i]);
            printf("Age     : %d\n", age[i]);
            printf("Disease : %s\n", disease[i]);
            printf("Doctor  : %s\n", doctor[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient Not Found.\n");
}

void updatePatient()
{
    int i, pid, found = 0;

    printf("Enter Patient ID to Update: ");
    scanf("%d", &pid);

    for(i = 0; i < count; i++)
    {
        if(id[i] == pid)
        {
            printf("Enter New Name: ");
            scanf("%s", name[i]);

            printf("Enter New Age: ");
            scanf("%d", &age[i]);

            printf("Enter New Disease: ");
            scanf("%s", disease[i]);

            printf("Enter New Doctor: ");
            scanf("%s", doctor[i]);

            printf("Record Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient Not Found.\n");
}

void deletePatient()
{
    int i, j, pid, found = 0;

    printf("Enter Patient ID to Delete: ");
    scanf("%d", &pid);

    for(i = 0; i < count; i++)
    {
        if(id[i] == pid)
        {
            for(j = i; j < count - 1; j++)
            {
                id[j] = id[j + 1];
                age[j] = age[j + 1];

                strcpy(name[j], name[j + 1]);
                strcpy(disease[j], disease[j + 1]);
                strcpy(doctor[j], doctor[j + 1]);
            }

            count--;

            printf("Record Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient Not Found.\n");
}