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
	fflush(stdin);
	FILE* fileLogin;
	fileLogin = fopen("resources/LoginPage.DAT", "ab+");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}
	fseek(fileLogin,0,SEEK_END);
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
	printf("\n Account Regestered Successfully.....\n\n");
	system("cls");
	entryMenu();
	//printf("\n Name = %s", form.name);
}

//int loginPage()
void loginPage()
{
	fflush(stdin);
	FILE* fileLogin;
	int returnloginValue=1;
	login_flag:
	printf("\n---------Login Page--------");
	system("cls");

	fileLogin = fopen("resources/LoginPage.DAT", "rb");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}

	rewind(fileLogin);
	fseek(fileLogin,0,SEEK_SET);
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
		if (ch1 == 13)
		{
			pass[i] = '\0';
			break;
		}
		else if(ch1==8)
		{
			if(i>0)
			{
				i--;
				printf("\b \b");
			}
		}
		else if(ch1==9|| ch1==32)
		{
			continue;
		}
		else
		{
			pass[i] = ch1;
			printf("*");
			i++;
		}
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
	count1=0;
	for (i = 0; i < 100; i++)
	{
		if((strcmp(username, login[i].formUsername) == 0) && (strcmp(pass, login[i].password) == 0 ))
		{
				printf("\n Successfully Logged in into System\n\n");
				system("pause");
				count1++;
				i=0;
				break;
		}
	}
	fclose(fileLogin);

	if (count1 == 0)
	{
		fflush(stdin);
		system("cls");
		printf("\n ------------------------------------------------------------------------------------");
		printf("\n  Wrong Username or Password");
		printf("\n ------------------------------------------------------------------------------------\n");
		Sleep(1000);
		printf("\n No Such Data Found....");
		printf("\n");
		printf(".");
		Sleep(666);
		/*printf(".");
		Sleep(666);
		printf(".");
		Sleep(666);
		printf(".");
		Sleep(666);*/
		fflush(stdin);
		fclose(fileLogin);
		system("cls");
		entryMenu();
		exit(0);
		//registrationPage();
		//fseek(fileLogin,0,SEEK_END);
		/*fclose(fileLogin);
		//exit(0);
		printf("\n Please regester the account.......");
		//goto login_flag;
		//system("cls");
		entryMenu();
		Sleep(1000);*/
	}
	else
	{
		fflush(stdin);
	//	i=0;
		//fclose(fileLogin);
		//return 1;
		hotel_display_choice_menu();
	}
	//fclose(fileLogin);
	//getchar();
}
