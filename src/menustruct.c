#include"../include/menustruct.h"
#include"../include/authentication.h"
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
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
    printf("\n | 3. | Exit                        |");
    printf("\n ------------------------------------- ");
    
    fflush(stdin);
    printf("\n\n\n\n Enter Your Choice: ");
    scanf("%d", &entryChoice);
    if(entryChoice<1 || entryChoice>3)
    {
        printf("\n Wrong Input of Choice......... Enter the Choice again.....");
        Sleep(1000);
        goto flag_wrong_choice;
    }
    switch (entryChoice)
    {
        case 1:
        
            returnloginValue= loginPage();
            if(returnloginValue==1)
            {
                printf("\n Successfully Entered to the System");
                hotel_display_choice_menu();
            }
            else
            {
                printf("\n No record Found");
                printf("\n Please register your account and then Login......");
                entryMenu();
            }
           /*if(!loginPage()) {
                entryMenu();
            }
            hotel_display_choice_menu(); */   
        /* if(returnloginValue==0)
            {
                //system("cls");
                printf("\n-------------------------------------------------------------------------------------------------------------------------");
                printf("\n    You don't have an accout...... Do you want to create an account..........If 'Yes' press 'Y' and if 'No' press 'N'");
                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

                goto flag_wrong_choice;*/
            /* scanf("%c",&login_error_then_register);
                if(login_error_then_register=='Y'|| login_error_then_register=='y')
                {
                    registrationPage();
                }
                else
                {
                    printf("\n Have a Great Day.....");
                    system("cls");
                    goto flag_wrong_choice;
                    Sleep(1000);
                    exit(0);
                }
            }
            else
            {
                hotel_display_choice_menu();
            }*/
            break;
        case 2:
            registrationPage();
        break;
        case 3:
            exit(0);
            break;
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
    printf("\n\t\t                                           ---------------------------------------");
    printf("\n\t\t                                            | S.N |          CHOICES             |");
    printf("\n\t\t                                           ---------------------------------------");
    printf("\n\t\t                                           ---------------------------------------");
    printf("\n\t\t                                            |  1. |       Room Information       |");
    printf("\n\t\t                                            --------------------------------------");
    printf("\n\t\t                                            |  2. |       Availability           |");
    printf("\n\t\t                                            --------------------------------------");
    printf("\n\t\t                                            |  2. |       Reservation            |");
    printf("\n\t\t                                            --------------------------------------");
    printf("\n\t\t                                            |  3. |       Cancellation           |");
    printf("\n\t\t                                            --------------------------------------");
    printf("\n\t\t                                            |  4. |       Exit                   |");
    printf("\n\t\t                                            --------------------------------------");
    printf("\n\n\n\n\n                         ");
    printf("\t\t");
    printf("\n Enter your choice: ");
    scanf("%d", &hotel_display_choice);
        if(hotel_display_choice<1 || hotel_display_choice>4)
        {
            printf("\n You Entered Wrong Choice..... Enter your choice..........");
            Sleep(1000);
            goto hotel_display_choice;
        }
}