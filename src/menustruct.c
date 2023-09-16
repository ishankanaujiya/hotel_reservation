#include"../include/menustruct.h"
#include"../include/authentication.h"
#include "../include/reservation.h"
#include"../include/menu.h"
#include<stdio.h>
#include<stdlib.h>
#include"unistd.h"
#include<Windows.h>
int entryChoice=0, hotel_display_choice;
int returnloginValue;
char login_error_then_register;

void entryMenu()
{
    flag_wrong_choice:
    fflush(stdin);
    printf("\n\t\t\t\t\t\t\t\t----------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t                     WELCOME                         ");
    printf("\n\t\t\t\t\t\t\t\t----------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t| 1. | Login                       |");
    printf("\n\t\t\t\t\t\t\t\t-------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t| 2. |  Registration               |");
    printf("\n\t\t\t\t\t\t\t\t------------------------------------- ");
    printf("\n\t\t\t\t\t\t\t\t| 3. | Forgot Password             |");
    printf("\n\t\t\t\t\t\t\t\t------------------------------------- ");
    printf("\n\t\t\t\t\t\t\t\t| 4. | Exit                        |");
    printf("\n\t\t\t\t\t\t\t\t------------------------------------- ");
    
    fflush(stdin);
    printf("\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &entryChoice);
    if(entryChoice<1 || entryChoice>4)
    {
        printf("\n\t\t\t\t\t\t\t\tWrong Input of Choice......... Enter the Choice again.....");
        Sleep(666);
        goto flag_wrong_choice;
    }
    switch (entryChoice)
    {
        case 1:
        
            returnloginValue= loginPage();
            if(returnloginValue==1)
            {
                printf("\n\t\t\t\t\t\t\t\tSuccessfully Entered to the System");
                main_menu();
            }
            else
            {
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t***********************ERROR*************************");
                printf("\n\t\t\t\t\t\t\t\t******************************************************");
                printf("\n\t\t\t\t\t\t\t\tNo record Found");
                printf("\n\t\t\t\t\t\t\t\tPlease Register your account and then Login");
                printf("\n\t\t\t\t\t\t\t\t******************************************************");
                printf("\n\n");
                system("pause");
                system("cls");
                entryMenu();
            }
            break;
        case 2:
            registrationPage();
        break;
        case 3:
            forgotPassword();
        break;
        case 4:
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tProgram Made By: ");
        printf("\n\t\t\t\t\t\t\t\t-Ishan Kanaujiya");
        printf("\n\t\t\t\t\t\t\t\t-Krishala Dangol");
        printf("\n\t\t\t\t\t\t\t\t-Mohammad Aarman");
        printf("\n\t\t\t\t\t\t\t\t-Sakina Dangol");
        printf("\n\t\t\t\t\t\t\t\t-Thank You For Your Time-");
        printf("\n\n");
        system("pause");
        exit(0);
           // exit(0);
        default:
            printf("\n\t\t\t\t\t\t\t\tYou Entered Wrong Choice......");
            break;
    }
}
void hotel_display_choice_menu()
{
    hotel_display_choice:
    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t:--------------------------------------------------:");
    printf("\n\t\t\t\t\t\t\t\t                 HOTEL RESERVATION SYSTEM             :");
    printf("\n\t\t\t\t\t\t\t\t:--------------------------------------------------:");
    printf("\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t---------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t| S.N |          CHOICES             |");
    printf("\n\t\t\t\t\t\t\t\t---------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t---------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|  1. |       Room Information       |");
    printf("\n\t\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|  2. |       Availability           |");
    printf("\n\t\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|  3. |       Reservation            |");
    printf("\n\t\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t|  4. |       Cancellation           |");
    printf("\n\t\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t*|  5. |       Exit                   |");
    printf("\n\t\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\n\n\n\n                         ");
    printf("\t\t");
    printf("\n\t\t\t\t\t\t\t\tEnter your choice: ");
    scanf("%d", &hotel_display_choice);
        if(hotel_display_choice<1 || hotel_display_choice>4)
        {
            printf("\n\t\t\t\t\t\t\t\tYou Entered Wrong Choice..... Enter your choice..........");
            Sleep(666);
            goto hotel_display_choice;
        }
        switch(hotel_display_choice)
        {
            case 1:
                printf("\n\t\t\t\t\t\t\t\tRoom Information");
            break;

            case 2:
                printf("\n\t\t\t\t\t\t\t\tAvailability");
            break;

             case 3:
                 printf("\n\t\t\t\t\t\t\t\tReservation");
            break;

             case 4:
                printf("\n\t\t\t\t\t\t\t\tCancellation");
            break;

             case 5:
                printf("\n\t\t\t\t\t\t\t\tExit ");
            break;

            default:
                printf("\n\t\t\t\t\t\t\t\tWrong Input");
            break;

        }
}