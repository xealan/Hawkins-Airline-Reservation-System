#pragma once
#include <vector> 
#include <string>
#include "pch.h"
#include "FlightInfo.h"
#include "Passenger.h"

namespace HawkinsAirlineReservation {
const int kFirstPassengerId = 1000;
class Database
{
public:
	FlightInfo& showFlight(const std::string& departureLocation, const std::string& destinationLocation, const std::string& departureTime,
		const std::string& arrivalTime, int flightId);

	FlightInfo& getFlight(int flightid);   
	std::vector<FlightInfo>& getAllFlights();
	FlightInfo& chooseFlight(Database& db);
	void displayFlightInformation(Database& db);
	void displayAllFlights(Database db);
	void displayAll() const;
	Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& passengerInfo, int passengerId);
	Passenger& showSeat(int seatId);
private:
	std::vector<FlightInfo> mFlightInfo;
	std::vector<Passenger> mPassengers;
	std::vector<Passenger> mSeatId;
	int mNextPassengerId = kFirstPassengerId;
};
} 
