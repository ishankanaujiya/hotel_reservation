#include "../include/reservation.h"
#include "../include/menu.h"
#include "../include/authentication.h"
#include "../include/menustruct.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include<Windows.h>

FILE *ptr1, *ptr2, *test;
char roomChoice, Booked[11] = "Booked", NotBooked[11] = "Not Booked";
;
int value = 0, choice = 0, RoomType;
struct reservationName reservationVariable, keep, data[5];
struct staticInput array[60], variable;
struct replace check;

void customer_info()
{
    int i = 0;
    char name[30];
    ptr1 = fopen("resources/reserved.txt", "ab+");

    if (ptr1 == NULL)
    {
        printf("Room file not found:");
        exit(0);
    }
    fflush(stdin);
    //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tEnter Your Name: ");
    gets(reservationVariable.name);
    //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
   // printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tEnter Your Phone Number: ");
    scanf("%lld", &reservationVariable.phone);
    fflush(stdin);
    //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
   // printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tEnter Your Address: ");
    gets(reservationVariable.address);
    strcpy(reservationVariable.room, "AC");
    //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tEnter how many room do you want to Reserve: ");
    scanf("%d", &reservationVariable.roomNumber);
    //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    for (i = 1; i <= reservationVariable.roomNumber; i++)
    {
      //  printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
        printf("\n\t\t\t\t\t\t\t\tEnter Room Number(1-20): ");
        //printf("\n\t\t\t\t\t\t\t\t----------------------------------------------");
    flag2:
        ptr2 = fopen("resources/rooms.txt", "rb");
        test = fopen("resources/test.txt", "wb");
        scanf("%d", &reservationVariable.RoomNumber);
        
        if (reservationVariable.RoomNumber < 1 || reservationVariable.RoomNumber > 20)
        {
          //  printf("\n\t\t\t\t\t\t\t\t*----------------------------------------------");
            printf("\n\n\t\t\t\t\tThe Number You entered is Invalid !!! ");
            printf("\n\n\t\t\t\t\tPlease Enter Room Number Between 1 and 20 for AC Room: ");
            //printf("\n\t\t\t\t\t----------------------------------------------"); 
            goto flag2;
        }
        while (fread(&variable, sizeof(variable), 1, ptr2))
        {
            if (reservationVariable.RoomNumber == variable.roomnumber)
            {
                int comparison = strcmp("Booked", variable.typeroom);
                if (comparison == 0)
                {
              //      printf("\n\t\t\t\t\t-------------------------------------------------------------------");
                    printf("\n\n\t\t\t\t\tSorry!! The room is already booked. Please Re-Enter room number: ");
                //    printf("\n\t\t\t\t\t-------------------------------------------------------------------");
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

    }
    fclose(ptr1);
}

void main_menu()
{
    char food_choice;
    flag:
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t --------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t             Hotel Reservation System");
    printf("\n\t\t\t\t\t\t\t\t---------------------------------------------------");
    printf("\n\n");
    printf("\n\t\t\t\t\t\t\t\t -------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               1. Hotel Info               |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               2. Reservation              |");
    printf("\n\t\t\t\t\t\t\t\t--------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               3. Cancellation             |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               4. Room Information         |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               5. Reservation Information  |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               6. Search Record            |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               7. Room Checkout            |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|               8. Exit                     |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
    printf("\n\n");
    printf("\t\t");
    printf("\n\t\t\t\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &choice);
    system("cls");

    switch (choice)
    {
    case 1:
           print_hotel();

       // system("pause");
       goto flag;
        break;

    case 2:

        ptr1 = fopen("resources/reserved.txt", "ab+");
        if (ptr1 == NULL)
        {
            printf("\n\t\t\t\t\t\t\t\tFile Not found! ");
            exit(0);
        }
    flag1:
        do
        {
        label:
            printf("\n\n\t\t\t\t\t\t\t\t- - - - - - -  Room Type - - - - - - -");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
            printf("\n\t\t\t\t\t\t\t\t1. AC(Air Conditioner) Room");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
           // printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
            printf("\n\t\t\t\t\t\t\t\t2. Deluxe Room");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
           // printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
            printf("\n\t\t\t\t\t\t\t\t3. Normal Room\n");
             printf("\n\t\t\t\t\t\t\t\t-------------------------------------------");
            printf("\n\t\t\t\t\t\t\t\tEnter Room Type: ");
            scanf("%d", &RoomType);
            switch (RoomType)
            {
            case 1:
                customer_info();
                break;
            case 2:
                deluxe_customer_info();
                break;
            case 3:
                normal_customer_info();
                break;
            default:
                printf("\n\t\t\t\t\t\t\t\tYou have entered wrong Input !!!\n");
                
                Sleep(666);
                goto label;
                break;
            }
            printf("\n\t\t\t\t\t\t\t\tReservation Successful.");
            fclose(ptr1);
            fflush(stdin);
            printf("\n\t\t\t\t\t\t\t\tDo you want to order Food?");
            scanf("%c", &food_choice);
            if (food_choice == 'Y' || food_choice == 'y')
            {
                system("cls");
                foodmenu();
                getchar();
            }
            fflush(stdin);
            printf("\n\t\t\t\t\t\t\t\tDo you want to Reserve more Room...... If Yes press Y");
            scanf("%c", &roomChoice);

        } while (roomChoice == 'Y' || roomChoice == 'y');
        goto flag;

        break;
    case 3:
        system("cls");
        cancellation();
        system("pause");
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
        system("cls");
        read_from_file();
        getchar();
        system("pause");
        goto flag;
        break;
    case 6:
        system("cls");
        search_info();
        getchar();
        system("pause");
        goto flag;
        break;
    case 7:
        system("cls");
        room_checkout();
        system("pause");
        goto flag;
        break;
    case 8:
        system("cls");
        entryMenu();
        
        printf("\n\t\t\t\t\t\t\t\tProgram Made By: ");
        printf("\n\t\t\t\t\t\t\t\t-Ishan Kanaujiya");
        printf("\n\t\t\t\t\t\t\t\t-Krishala Dangol");
        printf("\n\t\t\t\t\t\t\t\t-Mohammad Aarman");
        printf("\n\t\t\t\t\t\t\t\t-Sakina Dangol");
        printf("\n\t\t\t\t\t\t\t\t-Thank You For Your Time-");
        printf("\n\n");
        system("pause");
        exit(0);
        break;
    default:
        printf("\n\t\t\t\t\t\t\t\tYou Entered Wrong Choice...... Please Enter your Choice again!");
        Sleep(666);
        system("cls");

        goto flag;
        break;
    }
}
void read_from_file()
{
    
    ptr1 = fopen("resources/reserved.txt", "rb");
    ptr2 = fopen("resources/rooms.txt", "rb");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\t***** File Not found!!! ******");
        exit(0);
    }

    while (fread(&keep, sizeof(keep), 1, ptr1))
    {
        printf("\n\n\t\t\t\t\t\t\t\tRoom: ");
        puts(keep.room);
        printf("\n\t\t\t\t\t\t\t\tName: ");
        puts(keep.name);
        printf("\n\t\t\t\t\t\t\t\tYour Phone Number: %lld", keep.phone);
        printf("\n\t\t\t\t\t\t\t\tYour Address: ");
        puts(keep.address);
        printf("\n\t\t\t\t\t\t\t\tNo. of Room Reserved: %d", keep.roomNumber);
        printf("\n\t\t\t\t\t\t\t\tRoom You Reserved: %d",keep.RoomNumber);
      /*  for(i=0;i<keep.RoomNumber;i++)
        {
            printf("%d\t",keep.RoomNumber[i]);
        }*/
    }
    fclose(ptr1);
}

void room_availability()
{
    // char NotBooked[11]="Not Booked";
    ptr2 = fopen("resources/rooms.txt", "rb");
    if (ptr2 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tRoom file not found:");
        exit(0);
    }
    printf("\n\t\t\t\t\t\t\t\t----------Available Rooms are Listed Below----------\n");
    while (fread(&variable, sizeof(variable), 1, ptr2))
    {
        printf("%d\t", variable.roomnumber);
        puts(variable.typeroom);
    }
    fclose(ptr2);
}
void cancellation()
{
    struct reservationName temp;
    int success = 0;
    char NotBooked[11] = "Not Booked";

    ptr1 = fopen("resources/reserved.txt", "rb");

    if (ptr2 == NULL || ptr1 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tSorry !!! Room file not found:");
        exit(0);
    }
    int cancel_room;
    long long int phone;
    flag3:
    ptr2 = fopen("resources/rooms.txt", "rb");
    test = fopen("resources/test.txt", "wb");
    printf("\n\t\t\t\t\t\t\t\tEnter room number you want to cancel(1-60):  ");
    scanf("%d", &cancel_room);
    printf("\n\t\t\t\t\t\t\t\tEnter your Phone Number that you have provided in reservation: ");
    scanf("%lld", &phone);
    if (cancel_room < 1 || cancel_room > 60)
    {
        printf("\n\t\t\t\t\t\t\t\t---The Number You entered is Invalid !!!\nPlease Enter According To The Instruction--- ");
        scanf("%d", &cancel_room);
    }

    while (fread(&reservationVariable, sizeof(reservationVariable), 1, ptr1))
    {
        if (phone == reservationVariable.phone)
        {
            success = 1;
            temp.phone = reservationVariable.phone;
            break;
        }
    }
    if (success == 0)
    {
        printf("\n\t\t\t\t\t\t\t\tRecord Not Found!!!");
        goto flag3;
        exit(0);
    }
    while (fread(&variable, sizeof(variable), 1, ptr2))
    {
        if (cancel_room == variable.roomnumber)
        {
            int comparison = strcmp("Not Booked", variable.typeroom);
            if (comparison == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t The room is not booked. Please Re-Enter your previous room number: ");
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
    fclose(ptr1);

    /*  else
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
      }*/
}
void static_input()
{
    int i = 0;
    FILE *ptr2;

    ptr2 = fopen("resources/rooms.txt", "wb");
    if (ptr2 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tRoom file not found:");
        exit(0);
    }

    for (i = 0; i < 60; i++)
    {
        array[i].roomnumber = i + 1;
        strcpy(array[i].typeroom, "Not Booked");
    }
    fwrite(&array, sizeof(array), 1, ptr2);
    printf("\n\t\t\t\t\t\t\t\tadded success!!!");
    //  rewind(ptr2);
    /*
   for (i = 0; i < 60; i++)
   {
       fread(&variable, sizeof(variable), 1, ptr2);
       printf("%d", variable.roomnumber);
       puts(variable.typeroom);
   }
   */
    fclose(ptr2);
    exit(0);
}
void deluxe_customer_info()
{
    int i = 0;
    char name[30];
    ptr1 = fopen("resources/reserved.txt", "ab+");

    if (ptr1 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tRoom file not found:");
        exit(0);
    }
    fflush(stdin);
    printf("\n\t\t\t\t\t\t\t\tEnter Your Name: ");
    gets(reservationVariable.name);
    printf("\n\t\t\t\t\t\t\t\tEnter Your Phone Number: ");
    scanf("%lld", &reservationVariable.phone);
    fflush(stdin);
    printf("\n\t\t\t\t\t\t\t\tEnter Your Address: ");
    gets(reservationVariable.address);
    strcpy(reservationVariable.room, "Deluxe");
    printf("\n\t\t\t\t\t\t\t\tEnter how many room do you want to Reserve: ");
    scanf("%d", &reservationVariable.roomNumber);
    for (i = 1; i <= reservationVariable.roomNumber; i++)
    {

        printf("\n\t\t\t\t\t\t\t\tEnter Room Number(21-40): ");
    flag2:
        ptr2 = fopen("resources/rooms.txt", "rb");
        test = fopen("resources/test.txt", "wb");
        scanf("%d", &reservationVariable.RoomNumber);
        if (reservationVariable.RoomNumber < 21 || reservationVariable.RoomNumber > 40)
        {
            printf("\n\t\t\t\t\t\t\t\tThe Number You entered is Invalid !!!\nPlease Enter Room Number Between 21 and 40 for Deluxe Room: ");
            goto flag2;
        }
        while (fread(&variable, sizeof(variable), 1, ptr2))
        {
            if (reservationVariable.RoomNumber == variable.roomnumber)
            {
                int comparison = strcmp("Booked", variable.typeroom);
                if (comparison == 0)
                {
                    printf("\n\t\t\t\t\t\t\t\tSorry!! The room is already booked. Please Re-Enter room number: ");
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
    }
    fclose(ptr1);
}
void normal_customer_info()
{
    int i = 0;
    char name[30];
    ptr1 = fopen("resources/reserved.txt", "ab+");

    if (ptr1 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tRoom file not found:");
        exit(0);
    }
    fflush(stdin);
    printf("\n\t\t\t\t\t\t\t\tEnter Your Name: ");
    gets(reservationVariable.name);
    printf("\n\t\t\t\t\t\t\t\tEnter Your Phone Number: ");
    scanf("%lld", &reservationVariable.phone);
    fflush(stdin);
    printf("\n\t\t\t\t\t\t\t\tEnter Your Address: ");
    gets(reservationVariable.address);
    strcpy(reservationVariable.room, "Normal");
    printf("\n\t\t\t\t\t\t\t\tEnter how many room do you want to Reserve: ");
    scanf("%d", &reservationVariable.roomNumber);
    for (i = 1; i <= reservationVariable.roomNumber; i++)
    {

        printf("\n\t\t\t\t\t\t\t\tEnter Room Number(41-60): ");
    flag2:
        ptr2 = fopen("resources/rooms.txt", "rb");
        test = fopen("resources/test.txt", "wb");
        scanf("%d", &reservationVariable.RoomNumber);
        if (reservationVariable.RoomNumber < 41 || reservationVariable.RoomNumber > 60)
        {
            printf("\n\t\t\t\t\t\t\t\tThe Number You entered is Invalid !!!\nPlease Enter Room Number Between 41 and 60 for Normal Room: ");
            goto flag2;
        }
        while (fread(&variable, sizeof(variable), 1, ptr2))
        {
            if (reservationVariable.RoomNumber == variable.roomnumber)
            {
                int comparison = strcmp("Booked", variable.typeroom);
                if (comparison == 0)
                {
                    printf("\n\t\t\t\t\t\t\t\tSorry!! The room is already booked. Please Re-Enter room number: ");
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
        
    }
    fclose(ptr1);
}
void search_info()
{
    char name[30];
    ptr1 = fopen("resources/reserved.txt", "rb");
    if (ptr1 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tFile Not Found!!!!");
        exit(0);
    }
    printf("\n\t\t\t\t\t\t\t\tEnter Customer Name: ");
    fflush(stdin);
    gets(name);
    while (fread(&keep, sizeof(keep), 1, ptr1))
    {
        if (strcmp(name, keep.name) == 0)
        {
            printf("\n\t\t\t\t\t\t\t\tRoom: ");
            puts(keep.room);
            printf("\n\t\t\t\t\t\t\t\tName: ");
            puts(keep.name);
            printf("\n\t\t\t\t\t\t\t\tPhone Number: %lld", keep.phone);
            printf("\n\t\t\t\t\t\t\t\tAdress: ");
            puts(keep.address);
            printf("\n\t\t\t\t\t\t\t\tNo. of Room Reserved: %d", keep.roomNumber);
            printf("\n\t\t\t\t\t\t\t\tReserved Room: %d", keep.RoomNumber);
        }
    }
}
void room_checkout()
{
    struct reservationName temp;
    int success = 0;
    char NotBooked[11] = "Not Booked";

    ptr1 = fopen("resources/reserved.txt", "rb");

    if (ptr1 == NULL)
    {
        printf("\n\t\t\t\t\t\t\t\tSorry !!! Room file not found:");
        exit(0);
    }
    int checkout_room;
    long long int phone;
flag3:
    ptr2 = fopen("resources/rooms.txt", "rb");
    test = fopen("resources/test.txt", "wb");
    printf("\n\t\t\t\t\t\t\t\tEnter room number you want to Checkout(1-60):  ");
    scanf("%d", &checkout_room);
    printf("\n\t\t\t\t\t\t\t\tEnter your Phone Number that you have provided in reservation: ");
    scanf("%lld", &phone);
    if (checkout_room < 1 || checkout_room > 60)
    {
        printf("\n\t\t\t\t\t\t\t\t---The Number You entered is Invalid !!!\nPlease Enter According To The Instruction--- ");
        scanf("%d", &checkout_room);
    }

    while (fread(&reservationVariable, sizeof(reservationVariable), 1, ptr1))
    {
        if (phone == reservationVariable.phone)
        {
            success = 1;
            temp.phone = reservationVariable.phone;
            break;
        }
    }
    if (success == 0)
    {
        printf("\n\t\t\t\t\t\t\t\tRecord Not Found!!!");
        goto flag3;
        exit(0);
    }
    while (fread(&variable, sizeof(variable), 1, ptr2))
    {
        if (checkout_room == variable.roomnumber)
        {
            int comparison = strcmp("Not Booked", variable.typeroom);
            if (comparison == 0)
            {
                printf("\n\t\t\t\t\t\t\t\tThe room is not booked. Please Re-Enter your previous room number: ");
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
    fclose(ptr1);
}
void print_hotel()
{
    printf("\n\t\t\t\t\t\t\t\t    ***********************************");
	printf("\n\t\t\t\t\t\t\t\t             HOTEL HEAVEN");
	printf("\n\t\t\t\t\t\t\t\t    ***********************************");
	printf("\n\n");
//	printf("\n-----------------------------------------------------------------------------------");
	printf("\n It is a 15 story hotel which is well equiped with all the requirement.");
	printf("\n All of the rooms are completely air condition and spacious.");
	printf("\n This 4-star hotel offers an ATM and a concierge service.");
	printf("\n Breakfast is available every morning,lunch and Dinner are also provided according to the customers choice.");
	printf("\n This area is mostly popular for cyclying and bike hire is also available.");
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n\n\n Amenities: ");
	printf("\n a.24 hours power backup");
	printf("\n b.Automatic lift");
    printf("\n c.Ample parking space");
    printf("\n d.Free internet services");
    printf("\n e.24 hours room service");
    printf("\n f.Laundry services");


	printf("\n\n Location: ");
	printf("\n ------------------------");
	printf("\n Kamalpokhari, Kathmandu");
	
	printf("\n\n Contact No: ");
	printf("\n ------------------------");
	printf("\n Tel: 01-5432324 \n Mobile: 9861545454 \n Email: hotelheaven@gmail.com");
	printf("\n\n\n");
	system("pause");
    //goto flag;
}