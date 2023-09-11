#include"../include/menu.h"
#include<stdio.h>
#include<stdlib.h>
char add;
	int choice;
	char key;
   struct reserve order,a;

void foodmenu()
{
    FILE *p;
    p=fopen("resource/reservation.DAT","ab+");
	if(p==NULL){
		printf("\n Error! File not found");
		exit(0);
    }
	flag1:
    printf("\n                    Food Menu");
	printf("\n         *******************************");
	printf("\n\n\t1.Breakfast");
	printf("\n\t2.Lunch");
	printf("\n\t3.Dinner");
	printf("\n\t4.Exit");
	flag:
    printf("\n\tEnter your choice: ");
    scanf("%d",&choice);
    if(choice>4||choice<=0)
    {
    	printf("\n\tPlease enter valid number between 1-4");
    	goto flag;
	}
	switch(choice)
	{
		case 1:
		    
			printf("\n                            KATHMANDU HOTEL ");
			printf("\n\n                             Breakfast");
		    printf("\n                        ********************");
			printf("\n\n\t1.PLAIN PANCAKES............................RS 100");
			printf("\n\t2.TOMATO SOUP.................................RS 150");
			printf("\n\t3.SANDWICH....................................RS 200");
			printf("\n\t4.BOILED EGG..................................RS 100");
			printf("\n\t5.MIX VEG SOUP................................RS 110");
			printf("\n\t6.TEA/COFEE...................................RS 130");
			printf("\n\t7.FRUIT SALAD.................................RS 250");
			printf("\n\t8.BREAD JAM...................................RS 70");
			printf("\n\t9.SWEET CORN..................................RS140");
			printf("\n\t10.SAUSAGE....................................RS100");
			fast:
			printf("\n\n\tEnter id of the food you want to have for breakfast: ");
			scanf("%d",&order.id);
	
			if(order.id<=0||order.id>10)
			{
				printf("\n\tPlease enter between 1-10");
				goto fast;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&order.q);
		
			fwrite(&order,sizeof(order),1,p);
			/*rewind(p);
			while(fread(&a,sizeof(a),1,p)==1){
			printf("\n the id and q is %d%d",a.id,a.q);
	}*/
			fflush(stdin);
			printf("\n\t Do you want to add other food?");
			printf("\n\t If yes press y or Y else any key to exit: ");
			
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto fast;
			}
			else
			{
				exit (0);
			}
			
			break;
		case 2:
		    printf("\n                              KATHMANDU HOTEL");
			printf("\n\n                               Lunch");
			printf("\n                           ***********************");
			printf("\n\t11.SANDWICHES OR WRAPS.............................RS200");
		    printf("\n\t12.KATHI ROLLS.....................................RS100");
		    printf("\n\t13.MOONG DAL CHILLA................................RS210");
		    printf("\n\t14.POHA TIKKA......................................RS70");
		    printf("\n\t15.BIRYANI.........................................RS100");
		    printf("\n\t16.STUFFFED PARATHAS...............................RS150");
		    printf("\n\t17.SIJI PANCAKE....................................RS120");
		    printf("\n\t18.VEG BURGER......................................RS200");
		    printf("\n\t19.MUFFINS.........................................RS170");
		    printf("\n\t20.PIZZA...........................................RS200");
		    lun:
			printf("\n\n\tEnter id of the food you want to have for lunch: ");
			scanf("%d",&order.id);
		
            if(order.id<=10||order.id>20)
			{
				printf("\n\tPlease enter between 11-20");
				goto lun;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for lunch: ");
			scanf("%d",&order.q);
			
			fwrite(&order,sizeof(order),1,p);
		/*	rewind(p);
			while(fread(&a,sizeof(a),1,p)==1){
			printf("\n the id and q is %d%d",a.id,a.q);
	}*/
			fflush(stdin);
			printf("\n\tDo you want to add other food?");
			printf("\n\t If yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto lun;
			}
			else
			{
				exit(0);
			}
			break;
		    
		case 3:
			 printf("\n                              KATHMANDU HOTEL");
			printf("\n\n                               Dinner");
			printf("\n                           ***********************");
		    printf("\n\t21.PULAU.........................................RS250");
		    printf("\n\t22.DAL MAKHANI...................................RS200");
		    printf("\n\t23.RAJMA PANEER CURRY............................RS150");
		    printf("\n\t24.CHICKEN RICE..................................RS120");
		    printf("\n\t25.THAKALI KHANA VEG.............................RS100");
		    printf("\n\t26.THAKALI NON-VEG...............................RS200");
		    printf("\n\t27.NAN ROTI WITH CURRY...........................RS210");
		    printf("\n\t28.PASTA.........................................RS130");
		    printf("\n\t29.MIX FRUIT JUICE...............................RS200");
		    printf("\n\t30.PANEER ROTI...................................RS200");
		    din:
			printf("\n\n\tEnter id of the food you want to have for dinner: ");
			scanf("%d",&order.id);
			
			if(order.id<=20||order.id>30)
			{
				printf("\n\tPlease enter between 21-30");
				goto din;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for dinner: ");
			scanf("%d",&order.q);			
			fwrite(&order,sizeof(order),1,p);
		/*	rewind(p);
			while(fread(&a,sizeof(a),1,p)==1){
			printf("\n the id and q is %d%d",a.id,a.q);
	}*/
			fflush(stdin);
			printf("\n\tDo you want to add other food?");
			printf("\n\t If yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto din;
			}
			else
			{
				exit(0);
			}
		    break;
		case 4:
		    printf("\n\tAre you sure you want to exit food menu?");
			printf("\n\tIf yes please enter y or Y else press any key to continue: ");
			fflush(stdin);
			scanf("%c",&key);
			if(key=='y'||key=='Y')
			{
				exit(0);
			}
			else{
                goto flag1;
			}
			break;
	}
fclose(p);
}