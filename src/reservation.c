#include"../include/reservation.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>


char a=219, roomChoice;
FILE *ptr1;
int i=0, j=0, value=0, choice=0,RoomType;
struct reservationName reservationArray[100], reservationVariable,keep;
struct staticInput array[50],variable;
void customer_info()
{
    fflush(stdin);
    printf("\n Enter Your Name: ");
    gets(reservationVariable.name);
    printf("\n Enter Your Phone Number: ");
    scanf("%d", &reservationVariable.phone);
    fflush(stdin);
    printf("\n Enter Your Address: ");
    gets(reservationVariable.address);
    printf("\n Enter how many room do you want to Reserve: ");
    scanf("%d", &reservationVariable.roomNumber);
    fflush(stdin);
    printf("\n Enter Checkin Date: ");
    gets(reservationVariable.checkin);  
    printf("\n Enter Checkout Date ");
    gets(reservationVariable.checkout);
    fwrite(&reservationVariable,sizeof(reservationVariable),1,ptr1);
}


void main_menu()
{
    flag:
    printf("\n\t\t --------------------------------------------------");
    printf("\n\t\t              HOTEL RESERVATION SYSTEM ");
    printf("\n\t\t --------------------------------------------------");
    printf("\n\n");
    printf("\n\t\t\t -------------------------------");
    printf("\n\t\t\t|         1. Hotel Info         |");
    printf("\n\t\t\t -------------------------------");
    printf("\n\t\t\t|         2. Reservation        |");
    printf("\n\t\t\t -------------------------------");
    printf("\n\t\t\t|         3. Cancellation       |");
    printf("\n\t\t\t -------------------------------");
    printf("\n\t\t\t|         4. Availability       |");
    printf("\n\t\t\t -------------------------------");
    printf("\n\t\t\t|         5. Information        |");
    printf("\n\t\t\t -------------------------------");
    printf("\n\n");
    printf("\t\t");
    printf("Enter Your Choice: ");
	scanf("%d", &choice);
	system("cls");

	switch(choice)
	{
		case 1:
			printf("\n\t\t\t\t\t\t\t First Paragraph (Introduction) ");
			printf("\n\n\n\t\t\t\t\t\t\t Second Paragraph (Introduction) ");
			printf("\n\n\n\n\t\t\t\t\t\t\t Third Paragraph (Introduction) ");
			printf("\n\n\n\n\t\t\t\t\t\t\t Fourth Paragraph (Location and other details) ");
			printf("\n\n\n\n\n\t\t\t\t ");
			system("pause");
			goto flag;
		break;
		case 2:
			ptr1 =fopen("resources/reserved.txt","a+");
			if(ptr1==NULL)
			{
				printf("\n File Not found! ");
				exit(0);
			}
			flag1:
			do
			{
                label:
				printf("- - - - - Room Type- - - - -");
	            printf("\n1. AC(Air Conditioner) Room");
	            printf("\n2. Deluxe Room");
                printf("\n3. Normal Room\n");
                printf("Enter Room Type: ");
	            scanf("%d",&RoomType);
	            switch(RoomType)
				{
	            	case 1:
                        customer_info();
					break;
	           		case 2:
                        customer_info();
					break;
                    case 3:
                        customer_info();
                        break;
                    default:
                        system("cls");
                        sleep(1);
                        printf("\nYou have entered wrong Input !!!\n");
                        goto label;
                    break;
				}
						printf("\n Reservation Successful.");
						fclose(ptr1);
                        fflush(stdin); 
						printf("\n Do you want to Reserve more Room...... If Yes press Y");
						scanf("%c", &roomChoice);
                        
            }while(roomChoice=='Y'|| roomChoice=='y');
				goto flag;

                break;
                case 3:
                    printf("Enter others now.... on progress!!!!");
                    exit(0);

                break;
                case 4:

                break;
                case 5:
                    read_from_file();

                break;
                default:
                    printf("\n You Entered Wrong Choice...... Please Enter your Choice again!");
	            	sleep(1);
                  	system("cls");
	             	goto flag;
               break;
    }
}
void read_from_file()
{
    ptr1 =fopen("resources/reserved.txt","r");
    if(ptr1==NULL)
    {
        printf("\n***** File Not found!!! ******");
        exit(0);
    }

    while(fread(&keep,sizeof(keep),1,ptr1))
    {

        printf("\n Name: ");
        puts(keep.name);
        printf(" Your Phone Number: %d", keep.phone);
        printf("\n Your Address: ");
        puts(keep.address);
        printf(" Room You Reserved: %d", keep.roomNumber);
        printf("\n Your Checkin Date: ");
        puts(keep.checkin);
        printf(" Enter checkout Date: ");
        puts(keep.checkout);
    }
    fclose(ptr1);
}
void static_input()
{
    FILE *ptr2;
    ptr2=fopen("resources/rooms.txt","w");
    if (ptr2==NULL)
    {
        printf("Room file not found:");
        exit(0);
    }
    
    for(i=0;i<50;i++)
    {
        array[i].roomnumber=i+1;
        array[i].typeroom[11]="Not Booked";
    }
    fwrite(&array,sizeof(array),1,ptr2);
    printf("added success!!!");
    rewind(ptr2);
    for(i=0;i<50;i++)
    {
        fread(&variable,sizeof(variable),1,ptr2);
        printf("%d",variable.roomnumber);
        puts(variable.typeroom);
    
        
    }
    fclose(ptr2);
}