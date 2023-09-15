#ifndef RESERVATION_H
#define RESERVATION_H
void main_menu();
void read_from_file();

void static_input();

void room_availability();
void cancellation();
struct reservationName
{
	char name[100];
	long long int phone;
	char address[100];
	int roomNumber;
	int RoomNumber;
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