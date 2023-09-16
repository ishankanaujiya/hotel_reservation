#include "../include/authentication.h"
#include "../include/menustruct.h"
#include <stdio.h>
#include <stdlib.h>
#include "unistd.h"
#include <string.h>
#include<conio.h>

struct registration_structure form, login[100], password_check;

int i = 0, j = 0, count1 = 0;
char ch, ch1, username[100], pass[100], password_map_char[8];

// Variables for Password Check
// int char_string_length, count_password_check, numbers_password = 0, alphabets_password = 0, special_password = 0;

void registrationPage()
{
	//VARIABLES FOR STRONG PASSWORD CKECK
	int count_numbers=0, count_alphabets=0, count_special_characters=0, password_len=0;
	char strong_password_check[15], confirmation_password[15];
	//struct registration_structure account_check, account_check_array[100];
	system("cls");
	fflush(stdin);
	FILE *fileLogin;
	fileLogin = fopen("resources/LoginPage.DAT", "ab+");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}
	fseek(fileLogin, 0, SEEK_END);
	printf("\n                           *********************************************");
	printf("\n                                           REGESTRATION ");
	printf("\n                           *********************************************");
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
	//printf("\n                        :*****************************************************:");
	printf("\n                             *********************************************     ");
	printf("\n                                   Set New Username and Password               ");
	printf("\n                             *********************************************     ");
	//printf("\n                        :*****************************************************:");

	printf("\n\n\n\n\n");
	printf("\n                :--------------------------------------------:");
	printf("\n                        :      Username: ");
	gets(form.formUsername);
	printf("\n                :--------------------------------------------:");

	// Code for Strong Password
	fflush(stdin);

	password_check:

	system("cls");
	system("color 0B");
	printf("\n *******************************************************************");
	printf("\n Enter the Strong Password");
	printf("\n *******************************************************************");
	printf("\n The Password Must Contain");
	printf("\n 1. Maximum 15 Characters");
	printf("\n 2. Must contain atleast One Digit/Number");
	printf("\n 3. Must contain atleast One Symbol '@', '#', '*', '$'");
	printf("\n *******************************************************************");
	printf("\n\n");
	sleep(1);
	system("color 07");
	fflush(stdin);
	printf("\n                :--------------------------------------------:");

	fflush(stdin);
	printf("\n                        :Password: ");
	gets(form.password);

	//printf("\n                :---------------------------------------------");
	strcpy(strong_password_check, form.password);
	password_len = strlen(form.password);
	if(password_len>15)
	{
		printf("\n *************************************************************");
		printf("\n Password is too Long.... Must have maximum 15 Characters");
		printf("\n *************************************************************");
		sleep(1);
	}
	i=0;
	fflush(stdin);
	
	count_numbers=0;
	count_alphabets=0;
	count_special_characters=0;

	for(i=0; i<15; i++)
	{
		if(strong_password_check[i]>=48 && strong_password_check[i]<=57)
		{
			count_numbers++;
		}
		if(strong_password_check[i]>='A' && strong_password_check[i]<='Z')
		{
			count_alphabets++;
		}
		if(strong_password_check[i]=='@' || strong_password_check[i]=='#' || strong_password_check[i]=='*' || strong_password_check[i]=='$')
		{
			count_special_characters++;
		}
	}

	if(count_numbers>0 && count_alphabets>0 && count_special_characters>0 )
	{
		printf("\n The Entered Password is Strong");
		password_conformation:
		fflush(stdin);
		printf("\n\n");
		printf("\n ******************************");
		printf("\n   Confirm Password: ");
		gets(confirmation_password);
		printf("\n ******************************");
		if(strcmp(confirmation_password,strong_password_check)==0)
		{
			system("cls");
			printf("\n **********PASSWORD MATCHED**********");
			printf("\n\n");
		}
		else
		{
			printf("\n *************PASSWORD NOT MATCHED**********");
			goto password_conformation;
		}
	}
	else
	{
		printf("\n\n");
		printf("\n *************************************************");
		printf("\n The Entered Password is not Strong Enough");
		printf("\n *************************************************");
		sleep(1);
		goto password_check;
	}
	fwrite(&form, sizeof(struct registration_structure), 1, fileLogin);
	
	printf("\n Account Regestered Successfully.....\n\n");
	fclose(fileLogin);
	system("pause");
	system("cls");
	
	entryMenu();
	// printf("\n Name = %s", form.name);
}

// int loginPage()
int loginPage()
{
	fflush(stdin);
	FILE *fileLogin;
	login_flag:
	printf("\n---------Login Page--------");
	system("cls");

	fileLogin = fopen("resources/LoginPage.DAT", "rb");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}

	fread(&login, sizeof(login), 1, fileLogin);

	//printf("\n                       :------------------------------------------------------:");
	printf("\n                            ***********************************************    ");
	printf("\n                                                LOGIN                          ");
	printf("\n                            ***********************************************    ");
	//printf("\n                       :------------------------------------------------------:");
	printf("\n\n\n\n");
	printf("\n                      -------------------------------------------");
	fflush(stdin);
	printf("\n                        Username: ");
	gets(username);
	fflush(stdin);
	printf("\n                      -------------------------------------------");
	printf("\n                        Password: ");
	//gets(pass);
	i=0;
	while (1)
	{
		ch1 = _getch();
		if (ch1 == 13)
		{
			pass[i] = '\0';
			break;
		}
		else if (ch1 == 8)
		{
			if (i > 0)
			{
				i--;
				printf("\b \b");
			}
		}
		else if (ch1 == 9 || ch1 == 32)
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
	
	printf("\n                      -------------------------------------------\n\n");
	//system("pause");
	count1 = 0;
	rewind(fileLogin);
	//printf("\n Name=%s", login[1].name);
	getchar();

	system("color 0B");
	printf("\n\t\t\t\t\t\t");
	printf("PLEASE WAIT");
	printf("\n\t\t\t\t\t\t .");
	sleep(0.666);
	printf("");
	sleep(0.666);
	printf(".");
	sleep(0.666);
	printf(".");
	sleep(0.666);
	printf(".");
	sleep(0.666);
	printf(".");
	sleep(0.666);
	printf(".");
	sleep(0.666);
	printf(".");
	sleep(0.666);
	system("color 07");

	for (i = 0; i < 100; i++)
	{
		if ((strcmp(username, login[i].formUsername) == 0) && (strcmp(pass, login[i].password) == 0))
		{
			system("cls");
			printf("\n *********************************************");
			printf("\n Successfully Logged in into System");
			printf("\n *********************************************");
			printf("\n\n");
			system("pause");
			fclose(fileLogin);
			count1++;
			return 1;
		}
	}

	if (count1 == 0)
	{
		fclose(fileLogin);
		return 0;
	}
}

void forgotPassword()
{
	long long int forgot_password_number;
	char forgot_password_name[100];
	struct registration_structure forgot_password_check[100];
	int i=0, count_not_found=0;
	FILE* fileLogin;
	fileLogin = fopen("resources/LoginPage.DAT", "rb");
	if (fileLogin == NULL)
	{
		printf("\n File Not Found");
		exit(0);
	}
	fflush(stdin);
	rewind(fileLogin);
	fread(&forgot_password_check,sizeof(forgot_password_check),1,fileLogin);
	//printf("\n Name = %s", forgot_password_check[4].name);

	system("cls");
	//printf("\n Name = %s", forgot_password_check[4].name);
	printf("\n *****************SEARCH*****************");
	printf("\n Enter Applicants Name: ");
	fflush(stdin);
	gets(forgot_password_name);
	printf("\n Enter Applicants Number: ");
	scanf("%lld", &forgot_password_number);
	//fclose(fileLogin);
	for(i=0; i<100; i++)
	{
		//printf("\n Name = %s", forgot_password_check[4].name);
		//system("pause");
		//break;
		//printf("\n ");
		if(strcmp(forgot_password_name, forgot_password_check[i].name)==0)
		{
			if(forgot_password_number==forgot_password_check[i].phone)
			{
				system("cls");
				printf("\n *************** DETAILS ****************");
				printf("\n ----------------------------------------------------------------------------------");
				printf("\n Username                       |                 Password                    ");
				printf("\n ----------------------------------------------------------------------------------");
				printf("\n Username = %s      |      Password = %s", forgot_password_check[i].formUsername, forgot_password_check[i].password);
				printf("\n --------------------------------------------------------------------------------------");
				count_not_found++;
				
			}
		}
	}
	if(count_not_found==0)
	{
		system("cls");
		printf("\n *****************************************");
		printf("\n The Account is not Registered");
		printf("\n *****************************************");
		printf("\n\n");
		system("pause");
		system("cls");
		entryMenu();
	}
	printf("\n\n");
	system("pause");
	system("cls");
	entryMenu();
	fclose(fileLogin);


	
}
