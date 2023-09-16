#include "../include/menu.h"
#include"../include/reservation.h"
#include <stdio.h>
#include <stdlib.h>
char add;
char key;
struct reserve order, a;
int total = 0, tot = 0;
int count = 1;

int function(struct reserve b)
{
	if (b.id == 1)
	{
		printf("\n\t\t\t\t\t\t\t\tPLAIN PANCAKES............................RS 100");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", a.q);
		total = 100 * b.q;
		goto flag3;
	}
	else if (b.id == 2)
	{
		printf("\n\t\t\t\t\t\t\t\tTOMATO SOUP.................................RS 150");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 150 * b.q;
		goto flag3;
	}
	else if (b.id == 3)
	{
		printf("\n\t\t\t\t\t\t\t\tSANDWICH....................................RS 200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else if (b.id == 4)
	{
		printf("\n\t\t\t\t\t\t\t\tBOILED EGG..................................RS 100");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 100 * b.q;
		goto flag3;
	}
	else if (b.id == 5)
	{

		printf("\n\t\t\t\t\t\t\t\tMIX VEG SOUP................................RS 110");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 110 * b.q;
		goto flag3;
	}
	else if (b.id == 6)
	{
		printf("\n\t\t\t\t\t\t\t\tTEA/COFEE...................................RS 130");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 130 * b.q;
	}
	else if (b.id == 7)
	{
		printf("\n\t\t\t\t\t\t\t\tFRUIT SALAD.................................RS 250");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 250 * b.q;
		goto flag3;
	}
	else if (b.id == 8)
	{
		printf("\n\t\t\t\t\t\t\t\tBREAD JAM...................................RS 70");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 70 * b.q;
		goto flag3;
	}
	else if (b.id == 9)
	{
		printf("\n\t\t\t\t\t\t\t\tSWEET CORN..................................RS140");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 140 * b.q;
		goto flag3;
	}
	else if (b.id == 10)
	{
		printf("\n\t\t\t\t\t\t\t\tSAUSAGE....................................RS100");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 100 * b.q;
		goto flag3;
	}
	else if (b.id == 11)
	{
		printf("\n\t\t\t\t\t\t\t\tSANDWICHES OR WRAPS........................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else if (b.id == 12)
	{
		printf("\n\t\t\t\t\t\t\t\tKATHI ROLLS................................RS100");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 100 * b.q;
		goto flag3;
	}
	else if (b.id == 13)
	{
		printf("\n\t\t\t\t\t\t\t\tMOONG DAL CHILLA...........................RS210");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 210 * b.q;
		goto flag3;
	}
	else if (b.id == 14)
	{
		printf("\n\t\t\t\t\t\t\t\tPOHA TIKKA.................................RS70");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 70 * b.q;
		goto flag3;
	}
	else if (b.id == 15)
	{
		printf("\n\t\t\t\t\t\t\t\tBIRYANI....................................RS100");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 100 * b.q;
		goto flag3;
	}
	else if (b.id == 16)
	{
		printf("\n\t\t\t\t\t\t\t\tSTUFFFED PARATHA...........................RS150");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 150 * b.q;
		goto flag3;
	}
	else if (b.id == 17)
	{
		printf("\n\t\t\t\t\t\t\t\tSuJI PANCAKE...............................RS120");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 120 * b.q;
		goto flag3;
	}
	else if (b.id == 18)
	{
		printf("\n\t\t\t\t\t\t\t\tVEG BURGER.................................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else if (b.id == 19)
	{
		printf("\n\t\t\t\t\t\t\t\tMUFFINS....................................RS170");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 170 * b.q;
		goto flag3;
	}
	else if (b.id == 20)
	{
		printf("\n\t\t\t\t\t\t\t\tPIZZA......................................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else if (b.id == 21)
	{
		printf("\n\t\t\t\t\t\t\t\tPULAU......................................RS250");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 250 * b.q;
		goto flag3;
	}
	else if (b.id == 22)
	{
		printf("\n\t\t\t\t\t\t\t\tDAL MAKHANI................................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else if (b.id == 23)
	{
		printf("\n\t\t\t\t\t\t\t\tRAJMA PANEER CURRY.........................RS150");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 150 * b.q;
		goto flag3;
	}
	else if (b.id == 24)
	{
		printf("\n\t\t\t\t\t\t\t\tCHICKEN RICE...............................RS120");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 120 * b.q;
		goto flag3;
	}
	else if (b.id == 25)
	{
		printf("\n\t\t\t\t\t\t\t\tTHAKALI KHANA VEG..........................RS100");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 100 * b.q;
		goto flag3;
	}
	else if (b.id == 26)
	{
		printf("\n\t\t\t\t\t\t\t\tTHAKALI NON-VEG............................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else if (b.id == 27)
	{
		printf("\n\t\t\t\t\t\t\t\tNAN ROTI WITH CURRY........................RS210");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 210 * b.q;
		goto flag3;
	}
	else if (b.id == 28)
	{
		printf("\n\t\t\t\t\t\t\t\tPASTA......................................RS130");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 130 * b.q;
		goto flag3;
	}
	else if (b.id == 29)
	{
		printf("\n\t\t\t\t\t\t\t\tMIX FRUIT JUICE............................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
	else
	{
		printf("\n\t\t\t\t\t\t\t\tPANEER ROTI................................RS200");
		printf("\n\t\t\t\t\t\t\t\tThe quantity is:  %d", b.q);
		total = 200 * b.q;
		goto flag3;
	}
flag3:
	printf("\n\t\t\t\t\t\t\t\tThe total cost is:  %d", total);
	return total;
}

void foodmenu()
{
	int choice;
	int value;
	FILE *p;
	p = fopen("resources/reservation.DAT", "ab+");
	if (p == NULL)
	{
		printf("\n\t\t\t\t\t\t\t\t Error! File not found");
		exit(0);
	}
flag1:
	// printf("\n hahahh");
	printf("\n\t\t\t\t\t\t\t\t           Food Menu");
	printf("\n\t\t\t\t\t\t\t\t*******************************");
	printf("\n\t\t\t\t\t\t\t\t1.Breakfast");
	printf("\n\t\t\t\t\t\t\t\t2.Lunch");
	printf("\n\t\t\t\t\t\t\t\t3.Dinner");
	printf("\n\t\t\t\t\t\t\t\t4.Exit");
flag:
	printf("\n\t\t\t\t\t\t\t\tEnter your choice: ");
	scanf("%d", &choice);
	if (choice > 4 || choice <= 0)
	{
		printf("\n\t\t\t\t\t\t\t\tPlease enter valid number between 1-4");
		goto flag;
	}
	switch (choice)
	{
	case 1:
		system("cls");

		printf("\n\t\t\t\t\t\t\t\tHOTEL HEAVEN ");
		printf("\n\t\t\t\t\t\t\t\t    Breakfast");
		printf("\n\t\t\t\t\t\t\t\t********************");
		printf("\n\t\t\t\t\t\t\t\t1.PLAIN PANCAKES............................RS 100");
		printf("\n\t\t\t\t\t\t\t\t2.TOMATO SOUP.................................RS 150");
		printf("\n\t\t\t\t\t\t\t\t3.SANDWICH....................................RS 200");
		printf("\n\t\t\t\t\t\t\t\t4.BOILED EGG..................................RS 100");
		printf("\n\t\t\t\t\t\t\t\t5.MIX VEG SOUP................................RS 110");
		printf("\n\t\t\t\t\t\t\t\t6.TEA/COFEE...................................RS 130");
		printf("\n\t\t\t\t\t\t\t\t7.FRUIT SALAD.................................RS 250");
		printf("\n\t\t\t\t\t\t\t\t8.BREAD JAM...................................RS 70");
		printf("\n\t\t\t\t\t\t\t\t9.SWEET CORN..................................RS140");
		printf("\n\t\t\t\t\t\t\t\t10.SAUSAGE....................................RS100");
	fast:
		printf("\n\t\t\t\t\t\t\t\tEnter id of the food you want to have for breakfast: ");
		scanf("%d", &order.id);

		if (order.id <= 0 || order.id > 10)
		{
			printf("\n\t\t\t\t\t\t\t\tPlease enter between 1-10");
			goto fast;
		}
		printf("\n\t\t\t\t\t\t\t\tEnter quantity/serving of the food you want to have for breakfast: ");
		scanf("%d", &order.q);

		fwrite(&order, sizeof(order), 1, p);
		fseek(p, -(long)sizeof(order), SEEK_CUR);
		while (fread(&a, sizeof(a), 1, p) == 1)
		{
			value = function(a);
			tot = tot + value;
			printf("\n\t\t\t\t\t\t\t\t**************************************************************");
			printf("\n\t\t\t\t\t\t\t\tThe total sum of the food you have reserve is:  %d", tot);
			printf("\n\t\t\t\t\t\t\t\t***************************************************************");
		}
		fflush(stdin);
		printf("\n\t\t\t\t\t\t\t\tDo you want to add other food?");
		printf("\n\t\t\t\t\t\t\t\tIf yes press y or Y else any key to exit: ");

		scanf("%c", &add);
		if (add == 'y' || add == 'Y')
		{
			goto fast;
		}
		else
		{
			system("cls");
			goto flag1;
			// exit (0);
		}

		break;
	case 2:
		system("cls");
		printf("\n\t\t\t\t\t\t\t\tHOTEL HEAVEN");
		//printf("\n                             KATHMANDU HOTEL");
		printf("\n\t\t\t\t\t\t\t\t        Lunch");
		printf("\n\t\t\t\t\t\t\t\t***********************");
		printf("\n\t\t\t\t\t\t\t\t11.SANDWICHES OR WRAPS.............................RS200");
		printf("\n\t\t\t\t\t\t\t\t12.KATHI ROLLS.....................................RS100");
		printf("\n\t\t\t\t\t\t\t\t13.MOONG DAL CHILLA................................RS210");
		printf("\n\t\t\t\t\t\t\t\t14.POHA TIKKA......................................RS70");
		printf("\n\t\t\t\t\t\t\t\t15.BIRYANI.........................................RS100");
		printf("\n\t\t\t\t\t\t\t\t16.STUFFFED PARATHAS...............................RS150");
		printf("\n\t\t\t\t\t\t\t\t17.SIJI PANCAKE....................................RS120");
		printf("\n\t\t\t\t\t\t\t\t18.VEG BURGER......................................RS200");
		printf("\n\t\t\t\t\t\t\t\t19.MUFFINS.........................................RS170");
		printf("\n\t\t\t\t\t\t\t\t20.PIZZA...........................................RS200");
	lun:
		printf("\n\t\t\t\t\t\t\t\tEnter id of the food you want to have for lunch: ");
		scanf("%d", &order.id);

		if (order.id <= 10 || order.id > 20)
		{
			printf("\n\t\t\t\t\t\t\t\tPlease enter between 11-20");
			goto lun;
		}
		printf("\n\t\t\t\t\t\t\t\tEnter quantity/serving of the food you want to have for lunch: ");
		scanf("%d", &order.q);

		fwrite(&order, sizeof(order), 1, p);
		fseek(p, -(long)sizeof(order), SEEK_CUR);
		while (fread(&a, sizeof(a), 1, p) == 1)
		{
			value = function(a);
			tot = tot + value;
			printf("\n\t\t\t\t\t\t\t\t**************************************************************");
			printf("\n\t\t\t\t\t\t\t\tThe total sum of the food you have reserve is:  %d", tot);
			printf("\n\t\t\t\t\t\t\t\t**************************************************************");
		}
		fflush(stdin);
		printf("\n\t\t\t\t\t\t\t\tDo you want to add other food?");
		printf("\n\t\t\t\t\t\t\t\tIf yes press y or Y else any key to exit: ");
		scanf("%c", &add);
		if (add == 'y' || add == 'Y')
		{
			goto lun;
		}
		else
		{
			system("cls");
			goto flag1;
			// exit(0);
		}
		break;

	case 3:
		system("cls");
		printf("\n\t\t\t\t\t\t\t\t HOTEL HEAVEN");
		printf("\n\t\t\t\t\t\t\t\tDinner");
		printf("\n\t\t\t\t\t\t\t\t***********************");
		printf("\n\t\t\t\t\t\t\t\t21.PULAU.........................................RS250");
		printf("\n\t\t\t\t\t\t\t\t22.DAL MAKHANI...................................RS200");
		printf("\n\t\t\t\t\t\t\t\t23.RAJMA PANEER CURRY............................RS150");
		printf("\n\t\t\t\t\t\t\t\t24.CHICKEN RICE..................................RS120");
		printf("\n\t\t\t\t\t\t\t\t25.THAKALI KHANA VEG.............................RS100");
		printf("\n\t\t\t\t\t\t\t\t26.THAKALI NON-VEG...............................RS200");
		printf("\n\t\t\t\t\t\t\t\t27.NAN ROTI WITH CURRY...........................RS210");
		printf("\n\t\t\t\t\t\t\t\t28.PASTA.........................................RS130");
		printf("\n\t\t\t\t\t\t\t\t29.MIX FRUIT JUICE...............................RS200");
		printf("\n\t\t\t\t\t\t\t\t30.PANEER ROTI...................................RS200");
	din:
		printf("\n\t\t\t\t\t\t\t\tEnter id of the food you want to have for dinner: ");
		scanf("%d", &order.id);

		if (order.id <= 20 || order.id > 30)
		{
			printf("\n\t\t\t\t\t\t\t\tPlease enter between 21-30");
			goto din;
		}
		printf("\n\t\t\t\t\t\t\t\tEnter quantity/serving of the food you want to have for dinner: ");
		scanf("%d", &order.q);
		fwrite(&order, sizeof(order), 1, p);
		fseek(p, -(long)sizeof(order), SEEK_CUR);
		while (fread(&a, sizeof(a), 1, p) == 1)
		{
			value = function(a);
			tot = tot + value;
			printf("\n\t\t\t\t\t\t\t\t**************************************************************");
			printf("\n\t\t\t\t\t\t\t\tThe total sum of the food you have reserve is:  %d", tot);
			printf("\n\t\t\t\t\t\t\t\t**************************************************************");
		}
		fflush(stdin);
		printf("\n\t\t\t\t\t\t\t\tDo you want to add other food?");
		printf("\n\t\t\t\t\t\t\t\tIf yes press y or Y else any key to exit: ");
		scanf("%c", &add);
		if (add == 'y' || add == 'Y')
		{

			goto din;
		}
		else
		{
			system("cls");
			goto flag1;
			// exit(0);
		}
		break;
	case 4:
		printf("\n\t\t\t\t\t\t\t\tAre you sure you want to exit food menu?");
		printf("\n\t\t\t\t\t\t\t\tIf yes please enter y or Y else press any key to continue: ");
		fflush(stdin);
		scanf("%c", &key);
		if (key == 'y' || key == 'Y')
		{
			system("cls");
			main_menu();
		}
		else
		{
			goto flag1;
		}
		break;
	}
	fclose(p);
}