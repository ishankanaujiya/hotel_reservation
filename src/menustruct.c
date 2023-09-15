#include"../include/menustruct.h"
#include"../include/authentication.h"
#include "../include/reservation.h"
#include"../include/menu.h"
#include<stdio.h>
#include<stdlib.h>
#include"unistd.h"
int entryChoice=0, hotel_display_choice;
int returnloginValue;
char login_error_then_register;

void entryMenu()
{
    flag_wrong_choice:
    fflush(stdin);
    printf("\n ----------------------------------------------------");
    printf("\n                     WELCOME                         ");
    printf("\n ----------------------------------------------------");
    printf("\n -------------------------------------");
    printf("\n | 1. | Login                       |");
    printf("\n -------------------------------------");
    printf("\n | 2. |  Registration               |");
    printf("\n ------------------------------------- ");
    printf("\n | 3. | Forgot Password             |");
    printf("\n ------------------------------------- ");
    printf("\n | 4. | Exit                        |");
    printf("\n ------------------------------------- ");
    
    fflush(stdin);
    printf("\n\n\n\n Enter Your Choice: ");
    scanf("%d", &entryChoice);
    if(entryChoice<1 || entryChoice>4)
    {
        printf("\n Wrong Input of Choice......... Enter the Choice again.....");
        sleep(1);
        goto flag_wrong_choice;
    }
    switch (entryChoice)
    {
        case 1:
        
            returnloginValue= loginPage();
            if(returnloginValue==1)
            {
                printf("\n Successfully Entered to the System");
                main_menu();
            }
            else
            {
                system("cls");
                printf("\n ***********************ERROR*************************");
                printf("\n ******************************************************");
                printf("\n No record Found");
                printf("\n Please Register your account and then Login");
                printf("\n ******************************************************");
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
            exit(0);
        default:
            printf("\n You Entered Wrong Choice......");
            break;
    }
}
void hotel_display_choice_menu()
{
    hotel_display_choice:
    printf("\n");
    printf("\n\t\t                                  :--------------------------------------------------:");
    printf("\n\t\t                                  :             HOTEL RESERVATION SYSTEM             :");
    printf("\n\t\t                                  :--------------------------------------------------:");
    printf("\n\n\n\n\n\n\n");
    printf("\n\t                                           ---------------------------------------");
    printf("\n\t                                            | S.N |          CHOICES             |");
    printf("\n\t                                           ---------------------------------------");
    printf("\n\t                                           ---------------------------------------");
    printf("\n\t                                            |  1. |       Room Information       |");
    printf("\n\t                                            --------------------------------------");
    printf("\n\t                                            |  2. |       Availability           |");
    printf("\n\t                                            --------------------------------------");
    printf("\n\t                                            |  3. |       Reservation            |");
    printf("\n\t                                            --------------------------------------");
    printf("\n\t                                            |  4. |       Cancellation           |");
    printf("\n\t                                            --------------------------------------");
    printf("\n\t                                            |  5. |       Exit                   |");
    printf("\n\t                                            --------------------------------------");
    printf("\n\n\n\n\n                         ");
    printf("\t\t");
    printf("\n Enter your choice: ");
    scanf("%d", &hotel_display_choice);
        if(hotel_display_choice<1 || hotel_display_choice>4)
        {
            printf("\n You Entered Wrong Choice..... Enter your choice..........");
            sleep(1);
            goto hotel_display_choice;
        }
        switch(hotel_display_choice)
        {
            case 1:
                printf("\n Room Information");
            break;

            case 2:
                printf("\n  Availability");
            break;

             case 3:
                 printf("\n   Reservation");
            break;

             case 4:
                printf("\n Cancellation");
            break;

             case 5:
                printf("\n Exit ");
            break;

            default:
                printf("\n Wrong Input");
            break;

        }
}