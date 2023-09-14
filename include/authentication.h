#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H
//int loginPage();
int loginPage();
void registrationPage();

struct registration_structure
{
    char name[100];
	char address[100];
	long long int phone;
	char email[100];
	char formUsername[100];
	char password[100];
};
#endif