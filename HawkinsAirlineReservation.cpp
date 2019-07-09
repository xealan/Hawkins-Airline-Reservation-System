// HawkinsAirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Database.h"
#include "FlightInfo.h"

using namespace std;
using namespace HawkinsAirlineReservation;

int displayMenu();
void addNew(Database& db);
void addSeat(Database& db);

int main()
{	Database flightinfoDB;
	Database passengerDB;

	flightinfoDB.showFlight("Seattle", "Los Angeles", "Sept 4, 2019: 3:00PM", "Sept 4, 2019: 5:30PM", 5001);
	flightinfoDB.showFlight("Los Angeles", "Seattle", "Sept 12, 2019: 1:00PM", "Sept 12, 2019: 3:30PM", 5002);
	flightinfoDB.showFlight("Los Angeles", "Las Vegas", "Sept 20, 2019: 3:00PM", "Sept 20, 2019: 4:00PM", 5003);
	flightinfoDB.showFlight("Seattle", "Salt Lake City", "Sept 6, 2019: 8:00AM", "Sept 6, 2019: 10:45AM", 5004);

	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			flightinfoDB.displayAllFlights(flightinfoDB);
			break;
		case 2:
			addNew(flightinfoDB);
			break;
		case 3:
			flightinfoDB.displayAll();
			break;
		case 4:
			flightinfoDB.displayFlightInformation(flightinfoDB);
			break;
		case 5:
			addSeat(passengerDB);
			break;
		default:
			cerr << "Invalid selection" << endl;
			break;
			}
		}
		return 0;
}

void addNew(Database& db)
{
	string firstName;
	string lastName;
	string passengerInfo;
	int passengerId;

	cout << "First name? ";
	cin >> firstName;
	cout << "Last name? ";
	cin >> lastName;
	cout << "Address and Phone Number? ";
	cin >> passengerInfo;
	cout << "Passenger ID ";
	cin >> passengerId;

	db.addPassenger(firstName, lastName, passengerInfo, passengerId);
}

void addSeat(Database& db)
{
	int seatId;
	cout << "Choose from seats 1-80 available: ";
	cin >> seatId;

	db.showSeat(seatId);
}

int displayMenu()
{
			int selection;
			cout << endl;
			cout << "** Hawkins Airline Reservation System **" << endl;
			cout << endl;
			cout << "1. Flight Schedule " << endl;
			cout << "2. Add New Passenger " << endl;
			cout << "3. Display Passenger Information " << endl;
			cout << "4. Flight Details " << endl;
			cout << "5. Select a Seat" << endl;
			cout << "0. Exit the Program" << endl;
			cout << "Your Selection: " << endl;
			cout << endl;
			cin >> selection;
			return selection;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
