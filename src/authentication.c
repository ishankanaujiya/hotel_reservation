#include "../include/authentication.h"
#include "../include/menustruct.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

struct registration_structure form, login[100];

int i = 0, value = 0, j = 0, choice = 0, count = 0, count1 = 0;
char ch, ch1, username[100], pass[100], password_map_char[8];

// Variables for Password Check
int char_string_length, count_password_check, numbers_password = 0, alphabets_password = 0, special_password = 0;
int loginPage()
{
	FILE* fileLogin;
	int returnloginValue;
	printf("\n---------Login Page--------");
	system("cls");
	fileLogin = fopen("resources/LoginPage.DAT", "rb");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}
	rewind(0);
	fread(&login, sizeof(login), 1, fileLogin);
	printf("\n                       :------------------------------------------------------:");
	printf("\n                       :    :---------------------------------------------:   :");
	printf("\n                       :    :                   LOGIN                     :   :");
	printf("\n                       :    :---------------------------------------------:   :");
	printf("\n                       :------------------------------------------------------:");
	printf("\n\n\n\n");
	printf("\n                  -------------------------------------------");
	fflush(stdin);
	printf("\n                    Username: ");
	gets(username);
	fflush(stdin);
	printf("\n                  -------------------------------------------");
	printf("\n                    Password: ");
	while (1)
	{
		ch1 = _getch();
		pass[i] = ch1;
		if (ch1 == 13)
		{
			pass[i] = '\0';
			break;
		}
		printf("*");
		i++;
	}
	printf("\n                  -------------------------------------------");

	for (i = 0; i < 100; i++)
	{
		if (strcmp(username, login[i].formUsername) == 0)
		{
			if (strcmp(pass, login[i].password) == 0)
			{
				printf("\n Successfully Logged in into System\n\n");
				system("pause");
				count1++;
			}
		}
	}
	if (count1 == 0)
	{
		printf("\n ------------------------------------------------------------------------------------");
		printf("\n  Wrong Username or Password");
		printf("\n ------------------------------------------------------------------------------------\n");
		return 0;
		Sleep(1000);
	}
	else
	{
		return 1;
	}

	getchar();
}

void registrationPage()
{
	system("cls");
	FILE* fileLogin;
	fileLogin = fopen("resources/LoginPage.DAT", "ab+");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}
	// rewind(fileLogin);
	printf("\n                           ---------------------------------------------");
	printf("\n                                           REGESTRATION ");
	printf("\n                           ---------------------------------------------");
	printf("\n\n\n");
	printf("\n                ---------------------------------------------");
	fflush(stdin);
	printf("\n                   Name: ");
	gets(form.name);

	printf("\n                ---------------------------------------------");
	fflush(stdin);
	printf("\n                  Address: ");
	gets(form.address);

	printf("\n                ---------------------------------------------");
	printf("\n                   Phone Number: ");
	scanf("%lld", &form.phone);

	printf("\n                ---------------------------------------------");
	fflush(stdin);
	printf("\n                    Email: ");
	gets(form.email);
	fflush(stdin);
	system("cls");
	printf("\n                        :-----------------------------------------------------:");
	printf("\n                        :    :-------------------------------------------:    :");
	printf("\n                        :    :     Set New Username and Password         :    :");
	printf("\n                        :    :-------------------------------------------:    :");
	printf("\n                        :-----------------------------------------------------:");

	printf("\n\n\n\n\n");
	printf("\n                :--------------------------------------------:");
	printf("\n                        :      Username: ");
	gets(form.formUsername);
	fflush(stdin);
	printf("\n                :--------------------------------------------:");

	// Strong Password Condition
	system("cls");
	printf("\n\n");
	// system("cls");
	system("color 0B");
	printf("\n *********************************************************************");
	printf("\n\t Please Enter a Strong Password.");
	printf("\n\t Process To create a Strong Password");
	printf("\n\t 1. Maximum Charater 8.");
	printf("\n\t 2. Must Contain atleast one Chapital Letter");
	printf("\n\t 3. Must contain Special Characters '@', '#', '$', '*', '&'");
	printf("\n *********************************************************************");
	Sleep(1000);
	system("color 07");
	printf("\n\n");

password_flag:

	// system("cls");
	printf("\n                :--------------------------------------------:");
	fflush(stdin);
	printf("\n                        :Password: ");
	gets(form.password);
	strcpy(password_map_char, form.password);
	printf("\n                :---------------------------------------------");

	char_string_length = strlen(form.password);

	if (char_string_length > 8)
	{
		printf("\n\n\n ****************************************************************");
		printf("\n   Too many characters... Please Enter max 8 Characters....");
		printf("\n ****************************************************************");
		printf("\n");
		Sleep(1000);
		// system("color 07");

		goto password_flag;
	}

	numbers_password = 0;
	alphabets_password = 0;
	special_password = 0;
	
	for (i = 0; i < 8; i++)
	{
		if (password_map_char[i] >= 48 && password_map_char[i] <= 57)
		{
			numbers_password = 1;
		}
		if (password_map_char[i] >= 'A' && password_map_char[i] <= 'Z')
		{
			alphabets_password = 1;
		}
		if (password_map_char[i] == '@' || password_map_char[i] == '#' || password_map_char[i] == '$' || password_map_char[i] == '*')
		{
			special_password = 1;
		}
	}

	if (numbers_password == 1 && alphabets_password == 1 && special_password == 1)
	{
		printf("\n Strong Password");
	}
	else
	{
		printf("\n\n\n **********************************************");
		printf("\n The Entered Password is not Strong");
		printf("\n Please Enter a Password Again");
		printf("\n **********************************************");
		printf("\n");
		Sleep(1000);
		goto password_flag;
	}

	fwrite(&form, sizeof(struct registration_structure), 1, fileLogin);
	fclose(fileLogin);
	printf("\n Account Regestered Successfully.....\n\n");
	system("pause");
	entryMenu();
	printf("\n Name = %s", form.name);
}