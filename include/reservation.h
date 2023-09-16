#ifndef RESERVATION_H
#define RESERVATION_H
void main_menu();
void read_from_file();

void static_input();

void room_availability();
void cancellation();
void search_info();
void deluxe_customer_info();
void normal_customer_info();
void room_checkout();
void print_hotel();
struct reservationName
{
	char name[100];
	long long int phone;
	char address[100];
	int roomNumber;
	int RoomNumber;
	char room[10];
};
struct staticInput
{
	int roomnumber;
	char typeroom[11];
};
struct replace
{
	int number;
	char type[11];
};


#endif