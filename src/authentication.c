#include "../include/authentication.h"
#include "../include/menustruct.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

struct registration_structure form, login[100], password_check;

int i = 0, value = 0, j = 0, choice = 0, count = 0, count1 = 0;
char ch, ch1, username[100], pass[100], password_map_char[8];

// Variables for Password Check
//int char_string_length, count_password_check, numbers_password = 0, alphabets_password = 0, special_password = 0;


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

	fflush(stdin);
	printf("\n                        :Password: ");
	gets(form.password);
	printf("\n                :---------------------------------------------");

	

	fwrite(&form, sizeof(struct registration_structure), 1, fileLogin);
	printf("\n Account Regestered Successfully.....\n\n");
	fclose(fileLogin);
	system("pause");
	entryMenu();
	//printf("\n Name = %s", form.name);
}

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
	rewind(fileLogin);
	fread(&login, sizeof(login), 1, fileLogin);
	printf("\n                       :------------------------------------------------------:");
	printf("\n                       :    :---------------------------------------------:   :");
	printf("\n                       :    :                   LOGIN                     :   :");
	printf("\n                       :    :---------------------------------------------:   :");
	printf("\n                       :------------------------------------------------------:");
	printf("\n\n\n\n");
	fflush(stdin);
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
	system("pause");
	//rewind(fileLogin);
	/*while(fread(&password_check, sizeof(struct registration_structure), 1,fileLogin)>0)
	{
			if (strcmp(username,password_check.formUsername) == 0)
			{
				if (strcmp(pass, password_check.password) == 0)
				{
					printf("\n Successfully Logged in into System\n\n");
					system("pause");
					count1++;
				}
			}
	}*/
	for (i = 0; i < 100; i++)
	{
		if((strcmp(username, login[i].formUsername) == 0) && (strcmp(pass, login[i].password) == 0 ))
		{
				printf("\n Successfully Logged in into System\n\n");
				//system("pause");
				count1++;
			//	i=0;
				break;
		}
		else
		{
			continue;
		}
	}

	if (count1 == 0)
	{
		printf("\n ------------------------------------------------------------------------------------");
		printf("\n  Wrong Username or Password");
		printf("\n ------------------------------------------------------------------------------------\n");
		fclose(fileLogin);
		return 0;
		Sleep(1000);
	}
	else
	{
	//	i=0;
		fclose(fileLogin);
		return 1;
	}
	//fclose(fileLogin);
	//getchar();
}
