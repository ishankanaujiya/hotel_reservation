#include "../include/reservation.h"
#include"../include/menu.h"
#include "../include/authentication.h"
#include "../include/menustruct.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


FILE *ptr1, *ptr2, *test;
char roomChoice, Booked[11] = "Booked", NotBooked[11] = "Not Booked";
;
int value = 0, choice = 0, RoomType;
struct reservationName reservationArray[50], reservationVariable, keep;
struct staticInput array[50], variable;
struct replace check;

void customer_info()
{
    int i = 0, j = 0;
    char name[30];
    ptr1 = fopen("resources/reserved.txt", "a+");

    if (ptr1 == NULL)
    {
        printf("Room file not found:");
        exit(0);
    }
    fflush(stdin);
    printf("\n Enter Your Name: ");
    gets(reservationVariable.name);
    printf("Enter Your Phone Number: ");
    scanf("%lld", &reservationVariable.phone);
    fflush(stdin);
    printf("Enter Your Address: ");
    gets(reservationVariable.address);
    printf("Enter how many room do you want to Reserve: ");
    scanf("%d", &reservationVariable.roomNumber);
    for (i = 1; i <= reservationVariable.roomNumber; i++)
    {

        printf("Enter Room Number(1-50): ");
    flag2:
        ptr2 = fopen("resources/rooms.txt", "r");
        test = fopen("resources/test.txt", "w");
        scanf("%d", &reservationVariable.RoomNumber);
        if (reservationVariable.RoomNumber < 1 || reservationVariable.RoomNumber > 50)
        {
            printf("The Number You entered is Invalid !!!\nPlease Enter Room Number Between 1 and 50: ");
            goto flag2;
        }
        while (fread(&variable, sizeof(variable), 1, ptr2))
        {
            if (reservationVariable.RoomNumber == variable.roomnumber)
            {
                int comparison = strcmp("Booked", variable.typeroom);
                if (comparison == 0)
                {
                    printf("Sorry!! The room is already booked. Please Re-Enter room number: ");
                    check.number = variable.roomnumber;
                    strcpy(check.type, "Booked");
                    fwrite(&check, sizeof(check), 1, test);
                    fclose(ptr2);
                    fclose(test);
                    remove("resources/test.txt");
                    goto flag2;
                }
                else
                {
                    check.number = variable.roomnumber;
                    strcpy(check.type, "Booked");
                    fwrite(&check, sizeof(check), 1, test);
                }
            }
            else
            {
                check.number = variable.roomnumber;
                strcpy(check.type, variable.typeroom);
                fwrite(&check, sizeof(check), 1, test);
            }
        }
        fclose(ptr2);
        fclose(test);
        remove("resources/rooms.txt");
        rename("resources/test.txt", "resources/rooms.txt");
        fwrite(&reservationVariable, sizeof(reservationVariable), 1, ptr1);
        fclose(ptr1);

    }
}

void main_menu()
{
    int i = 0, j = 0;
    char food_choice;
flag:
    system("cls");
    printf("\n\t\t --------------------------------------------------");
    printf("\n\t\t              HOTEL RESERVATION SYSTEM ");
    printf("\n\t\t --------------------------------------------------");
    printf("\n\n");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               1. Hotel Info               |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               2. Reservation              |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               3. Cancellation             |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               4. Room Information         |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               5. Reservation Information  |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               6. Room Checkout            |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\t\t\t|               7. Exit                     |");
    printf("\n\t\t\t -------------------------------------------");
    printf("\n\n");
    printf("\t\t");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    system("cls");

    switch (choice)
    {
    case 1:
        printf("\n\t\t\t\t\t\t\t First Paragraph (Introduction) ");
        printf("\n\n\n\t\t\t\t\t\t\t Second Paragraph (Introduction) ");
        printf("\n\n\n\n\t\t\t\t\t\t\t Third Paragraph (Introduction) ");
        printf("\n\n\n\n\t\t\t\t\t\t\t Fourth Paragraph (Location and other details) ");
        printf("\n\n\n\n\n\t\t\t\t ");
        system("pause");
        getchar();
        goto flag;
        break;

    case 2:

        ptr1 = fopen("resources/reserved.txt", "a+");
        if (ptr1 == NULL)
        {
            printf("\n File Not found! ");
            exit(0);
        }
    flag1:
        do
        {
        label:
            printf("- - - - - Room Type- - - - -");
            printf("\n1. AC(Air Conditioner) Room");
            printf("\n2. Deluxe Room");
            printf("\n3. Normal Room\n");
            printf("Enter Room Type: ");
            scanf("%d", &RoomType);
            switch (RoomType)
            {
            case 1:
                customer_info();
                break;
            case 2:
                customer_info();
                break;
            case 3:
                customer_info();
                break;
            default:

                printf("\nYou have entered wrong Input !!!\n");
                sleep(1);
                goto label;
                break;
            }
            printf("\n Reservation Successful.");
            fclose(ptr1);
            fflush(stdin);
            printf("\n Do you want to order Food?");
            scanf("%c", &food_choice);
            if(food_choice=='Y'|| food_choice=='y')
            {
                system("cls");
                foodmenu();
                getchar();
            }
            printf("\n Do you want to Reserve more Room...... If Yes press Y");
            scanf("%c", &roomChoice);

        } while (roomChoice == 'Y' || roomChoice == 'y');
        goto flag;

        break;
    case 3:
        cancellation();
        getchar();
        goto flag;
        break;
    case 4:
        system("cls");
        room_availability();
       // getchar();
        system("pause");

        goto flag;

        break;
    case 5:
        read_from_file();
        getchar();
        system("pause");
        goto flag;
        break;
    case 6:
        printf("On progess !!!!! BYEEEE");
        exit(0);
        break;
    case 7:
    system("cls");
        printf("\n *************************************");
        printf("\n            Program Made By: ");
        printf("\n *************************************");
        printf("\n - Ishan Kanaujiya");
        printf("\n - Krishala Dangol");
        printf("\n - Mohammad Aarman");
        printf("\n - Sakina Dangol");
        printf("\n - Thank You For Your Time");
        printf("\n *************************************");
        printf("\n\n");
        system("pause");
        exit(0);
        break;
    default:
        printf("\n You Entered Wrong Choice...... Please Enter your Choice again!");
        sleep(1);
        system("cls");

        goto flag;
        break;
    }
}
void read_from_file()
{
    int i = 0, j = 0;
    ptr1 = fopen("resources/reserved.txt", "r");
    ptr2 = fopen("resources/rooms.txt", "r");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("\n***** File Not found!!! ******");
        exit(0);
    }

    while (fread(&keep, sizeof(keep), 1, ptr1))
    {
        printf("\n\nName: ");
        puts(keep.name);
        printf("Your Phone Number: %lld", keep.phone);
        printf("\nYour Address: ");
        puts(keep.address);
        printf("No. of Room Reserved: %d\n", keep.roomNumber);
        printf("Room You Reserved: %d\n", keep.RoomNumber);

        while (fread(&variable, sizeof(variable), 1, ptr2))
        {
            //  printf("\nRoom Number: ", variable.roomnumber);
        }
    }
    fclose(ptr1);
}

void room_availability()
{
    int i = 0, j = 0;
    // char NotBooked[11]="Not Booked";
    ptr2 = fopen("resources/rooms.txt", "r");
    if (ptr2 == NULL)
    {
        printf("Room file not found:");
        exit(0);
    }
    printf("----------Available Rooms are Listed Below----------\n");
    while (fread(&variable, sizeof(variable), 1, ptr2))
    {
        printf("%d\t", variable.roomnumber);
        puts(variable.typeroom);
    }
    fclose(ptr2);
}
void cancellation()
{
    char NotBooked[11] = "Not Booked";

    ptr1 = fopen("resources/reserved.txt", "r");
    ptr2 = fopen("resources/rooms.txt", "a+");

    if (ptr2 == NULL || ptr1 == NULL)
    {
        printf("Sorry !!! Room file not found:");
        exit(0);
    }
    int cancel_room, i = 0, j = 0;
    long long int phone;

    printf("Enter room number you want to cancel(1-50):  ");
    scanf("%d", &cancel_room);
    printf("Enter your Phone Number that you have provided in reservation: ");
    scanf("%lld", &phone);
    if (cancel_room < 1 || cancel_room > 50)
    {
        printf("---The Number You entered is Invalid !!!\nPlease Enter According To The Instruction--- ");
        scanf("%d", &cancel_room);
    }
    fread(&reservationArray, sizeof(reservationArray), 1, ptr1);
    rewind(ptr1);
    fread(&array, sizeof(array), 1, ptr2);
    rewind(ptr2);

    for (i = 0; i < 50; i++)
    {
        /*if (cancel_room == array[i].roomnumber)
        {
            if (strcmp("Booked", array->typeroom) == 0)
            {
            }
        }*/
        if (phone == reservationArray[i].phone)
        {
            if (reservationArray[i].RoomNumber == cancel_room)
            {
                j = i;
                strcpy(array[j].typeroom, "Not Booked");
            }
        }
        else
        {
            system("cls");
            printf("Sorry!! Phone number not Found.... \n\n");
            printf("Program Made By: ");
            printf("\n-Ishan Kanaugiya");
            printf("\n-Krishala Dangol");
            printf("\n-Mohammad Aarman");
            printf("\n-Sakina Dongoal");
            printf("\n-Thank You For Your Time-");
            system("pause");
            exit(0);
        }
    }
    fwrite(&array, sizeof(array), 1, ptr2);
    fclose(ptr2);
    fclose(ptr1);
    /*while (fread(&variable, sizeof(variable), 1, ptr2))
    {
        while (fread(&reservationVariable, sizeof(reservationVariable), 1, ptr1))
        {

            if (phone == reservationVariable.phone)
            {

                if (cancel_room == variable.roomnumber)
                {
                    int comparison = strcmp("Not Booked", variable.typeroom);
                    if (comparison == 0)
                    {
                        printf(" The room is not booked. Please Re-Enter your previous room number: ");
                        check.number = variable.roomnumber;
                        strcpy(check.type, "Not Booked");
                        fwrite(&check, sizeof(check), 1, test);
                        fclose(ptr2);
                        fclose(test);
                        remove("resources/test.txt");
                        goto flag3;
                    }
                    else
                    {
                        check.number = variable.roomnumber;
                        strcpy(check.type, "Not Booked");
                        fwrite(&check, sizeof(check), 1, test);
                    }
                }
            }
            else
            {
                check.number = variable.roomnumber;
                strcpy(check.type, variable.typeroom);
                fwrite(&check, sizeof(check), 1, test);
            }
        }
    }*/
}

void static_input()
{
    int i = 0, j = 0;
    FILE *ptr2;
    ptr2 = fopen("resources/rooms.txt", "w");
    if (ptr2 == NULL)
    {
        printf("Room file not found:");
        exit(0);
    }

    for (i = 0; i < 50; i++)
    {
        array[i].roomnumber = i + 1;
        strcpy(array[i].typeroom, "Not Booked");
    }
    fwrite(&array, sizeof(array), 1, ptr2);
    printf("added success!!!");
    //  rewind(ptr2);
    /*
   for (i = 0; i < 50; i++)
   {
       fread(&variable, sizeof(variable), 1, ptr2);
       printf("%d", variable.roomnumber);
       puts(variable.typeroom);
   }
   */

    fclose(ptr2);
    exit(0);
}
