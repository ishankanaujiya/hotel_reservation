#ifndef RESERVATION_H
#define RESERVATION_H
void main_menu();
void read_from_file();

void static_input();

struct reservationName
	{
		char name[100];
		long long int phone;
		char address[100];
		int roomNumber;
		char checkin[25];
		char checkout[25];
		
	};
struct staticInput
{
	int roomnumber;
	char typeroom[25];
};

#endif