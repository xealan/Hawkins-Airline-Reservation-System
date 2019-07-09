#include <iostream>
#include <stdexcept>
#include "pch.h"
#include "Database.h"
#include "FlightInfo.h"
#include "Passenger.h" 

using namespace std;

namespace HawkinsAirlineReservation
{
	Passenger& Database::addPassenger(const string& firstName,
		const string& lastName, const string& passengerInfo, int passengerId)
	{
		Passenger thePassenger(firstName, lastName, passengerInfo, passengerId);
		thePassenger.setPassengerId(mNextPassengerId++);
		thePassenger.addNew();
		mPassengers.push_back(thePassenger);

		return mPassengers[mPassengers.size() - 1];
	}
	void Database::displayAll() const
	{
		for (const auto& pass : mPassengers) {
			pass.display();
		}
	}
	FlightInfo& Database::showFlight(const std::string& departureLocation, const std::string& destinationLocation, const std::string& departureTime,
		const std::string& arrivalTime, int flightId)
	{
		FlightInfo theFlight(departureLocation, destinationLocation, departureTime, arrivalTime, flightId);
		mFlightInfo.push_back(theFlight);
		return mFlightInfo[mFlightInfo.size() - 1];
	}

	FlightInfo& Database::getFlight(int flightId)
	{

		for (auto& flightInfo : mFlightInfo)
		{
			if (flightInfo.getFlightId() == flightId)
			{
				return flightInfo;
			}

		}

	}
	FlightInfo& Database::chooseFlight(Database& db)
	{
		int flightid;

		system("CLS");
		std::cout << endl;
		std::cout << endl;
		std::cout << "Flight Number: ";
		std::cin >> flightid;
		while (!cin)
		{
			cout << " Invalid flight number " << endl;
			cin.clear();
			cin.ignore();
			cout << endl; cout << endl;
			cout << "Please input valid flight number: ";
			cin >> flightid;

		}
		return db.getFlight(flightid);
	}

	void Database::displayFlightInformation(Database& db)
	{
		FlightInfo flight = chooseFlight(db);
		cout << endl;
		cout << "Flight Information" << endl;
		cout << "--------------------" << endl;
		cout << "Flight ID" << " " << "Departure Location" << "   " << "Destination" << "  " << "Departure Time" << " " << "Arrival Time" << endl;
		flight.display();
		cout << endl;
	}

	vector<FlightInfo>& Database::getAllFlights()
	{
		return mFlightInfo;
	}

	void Database::displayAllFlights(Database db)
	{
		vector<FlightInfo>& flightList = db.getAllFlights();
		cout << endl;
		cout << endl;
		cout << "Displaying All Flights" << endl;
		cout << "Flight ID" << " " << "Departure Location" << " " << "Destination Location" << " " << "Departure Time" << " " << "Arrival Time" << endl;
		cout << "---------------------- " << endl;
		for (auto& flight : flightList)
		{
			flight.display();
		}
		cout << endl;
	}

	Passenger& Database::showSeat(int seatId)
	{
		Passenger theSeat(seatId);
		mSeatId.push_back(theSeat);
		return mSeatId[mSeatId.size() - 1];
	}
}