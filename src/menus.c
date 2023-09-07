#include"../include/menus.h"
#include"../include/authentication.h"
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int entryChoice=0;
int returnloginValue;
char login_error_then_register;
void entryMenu()
{
    flag_wrong_choice:
    printf("\n ----------------------------------------------------");
    printf("\n                     WELCOME                         ");
    printf("\n ----------------------------------------------------");
    printf("\n --------------------------------------------------- ");
    printf("\n |                  1. Login                       |");
    printf("\n --------------------------------------------------- ");
    printf("\n |                  2. Registration                |");
    printf("\n --------------------------------------------------- ");
    printf("\n |                  3. Exit                        |");
    printf("\n --------------------------------------------------- ");
    printf("\n\n\n\n Enter Your Choice: ");
    scanf("%d", &entryChoice);
    if(entryChoice<1 || entryChoice>3)
    {
        printf("\n Wrong Input of Choice......... Enter the Choice again.....");
        goto flag_wrong_choice;
    }
    switch (entryChoice)
    {
    case 1:
        returnloginValue= loginPage();
        if(returnloginValue==0)
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------------------------------------");
            printf("\n You don't have an accout...... Do you want to create an account..........If 'Yes' press 'Y' and if 'No' press 'N'");
            printf("\n-------------------------------------------------------------------------------------------------------------------\n");
            scanf("%c",&login_error_then_register);
            if(login_error_then_register=='Y'|| login_error_then_register=='y')
            {
                registrationPage();
            }
            else
            {
                printf("\n Have a Great Day.....");
                Sleep(1000);
                exit(0);
            }
        }
        break;
    case 2:
        registrationPage();
    break;
    case 3:
        exit(0);
        break;
    default:
        break;
    }
}