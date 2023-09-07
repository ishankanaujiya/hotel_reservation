#include"../include/authentication.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct registration_structure form, login[100];
FILE *fileLogin;

int i=0, value=0, j=0, choice=0, count=0, count1=0;
char ch, ch1, username[100], pass[100];
int loginPage()
{
    int returnloginValue;
    printf("\n---------Login Page--------");
    system("cls");
    fileLogin=fopen("resources/LoginPage.DAT","rb");
			if(fileLogin==NULL)
			{
				printf("\n File Not Found");
				exit(0);
			}
		rewind(0);
		fread(&login,sizeof(login),1,fileLogin);
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
		while(1)
		{
			ch1= _getch();
			pass[i]=ch1;
			if(ch1==13)
			{
				pass[i]='\0';
				break;
			}
			printf("*");
			i++;
		}
		printf("\n                  -------------------------------------------");

        
		//gets(pass);
		/*system("cls");
		printf("\n\n\n\n\t\t\t\t\t");
		printf("\n\n\n\n\n\n\n\n\n");                  
		printf("\t\t\t\t\t\t\t");
		printf("Processing Data....\n");
		printf("\t\t\t\t\t\t");
		system("color 0B");
		for(i=0; i<=30; i++)
		{
			printf("%c",a);
			delay(50);
		}
		system("color 07");
		system("cls");*/
		for(i=0; i<100; i++)
		{
			if(strcmp(username,login[i].formUsername)==0)
			{
				if(strcmp(pass,login[i].password)==0)
				{
					printf("\n Successfully Logged in into System\n\n");
					system("pause");
					//goto flagSwitchCase;
					count1++;
					
				}
			}
		}
		if(count1==0)
		{
			printf("\n ------------------------------------------------------------------------------------");
			printf("\n  Wrong Username or Password");
			printf("\n ------------------------------------------------------------------------------------\n");
            return 0;
            Sleep(1000);
           // _sleep(10000);
            //system("pause");
			exit(0);
		/*	printf("\n\n\n\n");
			printf("\n ------------------------------------------------------------------------------------");
			printf("\n Seems Like You Don't  Have an Accout....... Do You Want To Create an Account?");
			printf("\n If 'Yes' press 'Y' and if 'No' press 'N'");
			printf("\n ------------------------------------------------------------------------------------\n");
			scanf("%c", &accountChoice);
				system("cls");
			if(accountChoice=='Y'|| accountChoice=='y')
			{
			
				goto flagRegistration;
			}*/
			
		}
	
	
    getchar();
}

void registrationPage()
{
    system("cls");
    
    fileLogin=fopen("resources/LoginPage.DAT","ab+");
        if(fileLogin==NULL)
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
			system("cls");
			printf("\n                        :-----------------------------------------------------:");
			printf("\n                        :    :-------------------------------------------:    :");
			printf("\n                        :    :     Set New Username and Password         :    :");
			printf("\n                        :    :-------------------------------------------:    :");
			printf("\n                        :-----------------------------------------------------:");
			printf("\n\n\n\n\n                :--------------------------------------------:");
			printf("\n                        :      Username: ");
			gets(form.formUsername);
			printf("\n                 :--------------------------------------------:");
			fflush(stdin);
			printf("\n                        :Password: ");
			gets(form.password);
			printf("\n                 :---------------------------------------------");
			fwrite(&form,sizeof(form),1,fileLogin);
			printf("\n Account Regestered Successfully.....\n\n");
			system("pause");
			//clrscr;
			//system("cls");
			//fclose(fileLogin);

            printf("\n Name = %s", form.name);
}