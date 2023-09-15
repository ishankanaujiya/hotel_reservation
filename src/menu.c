#include"../include/menu.h"
#include<stdio.h>
#include<stdlib.h>
char add;
	int choice;
	char key;
   struct reserve order,a;
   int total=0,tot=0;
int count=1,value;

int function(struct reserve b)
	{
	        
		    if(b.id==1)
		    {
		    printf("\n\n\tPLAIN PANCAKES............................RS 100");
		    printf("\n\tThe quantity is:  %d",a.q);
		    total=100*b.q;
	        goto flag3;
		    }
		    else if(b.id==2)
		    {
			printf("\n\n\tTOMATO SOUP.................................RS 150");
			printf("\n\tThe quantity is:  %d",b.q);
		    total=150*b.q;
		    goto flag3;
			
		    }
			 else if(b.id==3)
     		{   
			printf("\n\n\tSANDWICH....................................RS 200");
            printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
			goto flag3;
			  }
			 else if(b.id==4)
	        {
			printf("\n\n\tBOILED EGG..................................RS 100");
            printf("\n\tThe quantity is:  %d",b.q);
		    total=100*b.q;
			goto flag3;
			  }
			 else if(b.id==5)
            {

			printf("\n\n\tMIX VEG SOUP................................RS 110");
            printf("\n\tThe quantity is:  %d",b.q);
		    total=110*b.q;
			goto flag3;
			  }
			 else if(b.id==6)
			{
			printf("\n\n\tTEA/COFEE...................................RS 130");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=130*b.q;
			}
			 else if(b.id==7)
			{
			printf("\n\n\tFRUIT SALAD.................................RS 250");
		     printf("\n\tThe quantity is:  %d",b.q);
		    total=250*b.q;
		    goto flag3;
			}
			 else if(b.id==8)
		    {
			printf("\n\n\tBREAD JAM...................................RS 70");
			printf("\n\tThe quantity is:  %d",b.q);
		    total=70*b.q;
		    goto flag3;
			}
			 else if(b.id==9)
			{
			printf("\n\n\tSWEET CORN..................................RS140");
			printf("\n\tThe quantity is:  %d",b.q);
		    total=140*b.q;
		    goto flag3;
			}
			 else if(b.id==10)
			{
			printf("\n\n\tSAUSAGE....................................RS100");
			printf("\n\tThe quantity is:  %d",b.q);
		    total=100*b.q;
		    goto flag3;
			}
			else if(b.id==11)
			{
			printf("\n\n\tSANDWICHES OR WRAPS........................RS200");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			}
			 else if(b.id==12)
			{
			printf("\n\n\tKATHI ROLLS................................RS100");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=100*b.q;
		    goto flag3;
			}
			else if(b.id==13)
		    {
			printf("\n\n\tMOONG DAL CHILLA...........................RS210");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=210*b.q;
		    goto flag3;
			}
			else if(b.id==14)
			{
			printf("\n\n\tPOHA TIKKA.................................RS70");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=70*b.q;
		    goto flag3;
			}
			 else if(b.id==15)
		    {
				printf("\n\tBIRYANI....................................RS100");
		    printf("\n\n\tThe quantity is:  %d",b.q);
		    total=100*b.q;
		    goto flag3;
			}
			 else if(b.id==16)
			{
			printf("\n\n\tSTUFFFED PARATHA...........................RS150");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=150*b.q;
		    goto flag3;
			 }
			 else if(b.id==17)
			{
			printf("\n\n\tSIJI PANCAKE...............................RS120");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=120*b.q;
		    goto flag3;
			}
			 else if(b.id==18)
			{
			printf("\n\n\tVEG BURGER.................................RS200");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			}
			 else if(b.id==19)
			{
			printf("\n\n\tMUFFINS....................................RS170");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=170*b.q;
		    goto flag3;
			}
			 else if(b.id==20)
			{
			printf("\n\n\tPIZZA......................................RS200");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			}
			else if(b.id==21)
		    {
			printf("\n\n\tPULAU......................................RS250");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=250*b.q;
		    goto flag3;
			}
			else if(b.id==22)
		    {
			printf("\n\n\tDAL MAKHANI................................RS200");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			    }
			 else if(b.id==23)
		    {
				printf("\n\n\tRAJMA PANEER CURRY.........................RS150");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=150*b.q;
		    goto flag3;
			}
			 else if(b.id==24)
			{
			printf("\n\n\tCHICKEN RICE...............................RS120");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=120*b.q;
		    goto flag3;
			}
			 else if(b.id==25)
			{
			printf("\n\n\tTHAKALI KHANA VEG..........................RS100");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=100*b.q;
		    goto flag3;
			}
			 else if(b.id==26)
			{
			printf("\n\n\tTHAKALI NON-VEG............................RS200");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			}
			 else if(b.id==27)
			{
			printf("\n\n\tNAN ROTI WITH CURRY........................RS210");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=210*b.q;
		    goto flag3;
			}
			 else if(b.id==28)
			{
			printf("\n\n\tPASTA......................................RS130");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=130*b.q;
		    goto flag3;
			}
			 else if(b.id==29)
			{
			printf("\n\n\tMIX FRUIT JUICE............................RS200");
		    printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			}
			else
		    {
			printf("\n\n\tPANEER ROTI................................RS200");
            printf("\n\tThe quantity is:  %d",b.q);
		    total=200*b.q;
		    goto flag3;
			}
            flag3:
			printf("\n\t The total cost is:  %d",total); 
	        return total;
}


void foodmenu()
{
    FILE *p;
    p=fopen("resources/reservation.DAT","ab+");
	if(p==NULL){
		printf("\n Error! File not found");
		exit(0);
    }
	flag1:
	//printf("\n hahahh");
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
		system("cls");
		    
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
	        fseek(p,-(long)sizeof(order),SEEK_CUR);
			while(fread(&a,sizeof(a),1,p)==1){
			value=function(a);
		    tot=tot+value;
			printf("\n\n\t**************************************************************");
	        printf("\n\n\t The total sum of the food you have reserve is:  %d",tot);
			printf("\n\n\t***************************************************************");

	
		}
			fflush(stdin);
			printf("\n\n\t Do you want to add other food?");
			printf("\n\t If yes press y or Y else any key to exit: ");
			
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto fast;
			}
			else
			{
				system("cls");
				goto flag1;
				//exit (0);
			}
			
			break;
		case 2:
		system("cls");
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
	        fseek(p,-(long)sizeof(order),SEEK_CUR);
			while(fread(&a,sizeof(a),1,p)==1){
			value=function(a);
		    tot=tot+value;
	        printf("\n\n\t**************************************************************");
	        printf("\n\n\t The total sum of the food you have reserve is:  %d",tot);
	         printf("\n\n\t**************************************************************");
		}
			fflush(stdin);
			printf("\n\n\tDo you want to add other food?");
			printf("\n\t If yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto lun;
			}
			else
			{
				system("cls");
				goto flag1;
				//exit(0);
			}
			break;
		    
		case 3:
		system("cls");
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
	        fseek(p,-(long)sizeof(order),SEEK_CUR);
			while(fread(&a,sizeof(a),1,p)==1){
			value=function(a);
			tot=tot+value;
			printf("\n\n\t**************************************************************");
	        printf("\n\n\t The total sum of the food you have reserve is:  %d",tot);
	        printf("\n\n\t**************************************************************");
		}
			fflush(stdin);
			printf("\n\n\tDo you want to add other food?");
			printf("\n\t If yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{  
	
				goto din;
			}
			else
			{
				system("cls");
				goto flag;
				//exit(0);
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