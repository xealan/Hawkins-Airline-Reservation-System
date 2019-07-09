#include <iostream>
#include <algorithm>
#include "FlightInfo.h"
#include "pch.h"
#include "Passenger.h"

using namespace std;

namespace HawkinsAirlineReservation {
	class Passenger;
	FlightInfo::FlightInfo(const std::string& departureLocation, const std::string& destinationLocation, const std::string& departureTime,
		const std::string& arrivalTime, int flightId) : mDepartureLocation(departureLocation), mDestinationLocation(destinationLocation), mDepartureTime(departureTime), 
			mArrivalTime(arrivalTime), mFlightId(flightId)
	{
	}
	void FlightInfo::setDepartureLocation(const std::string& departureLocation)
	{
		mDepartureLocation = departureLocation;
	}
	const std::string& FlightInfo::getDepartureLocation() const
	{
		return mDepartureLocation;
	}
	void FlightInfo::setDestinationLocation(const std::string& destinationLocation)
	{
		mDestinationLocation = destinationLocation;
	}
	const std::string& FlightInfo::getDestinationLocation() const
	{
		return mDestinationLocation;
	}
	const std::string& FlightInfo::getDepartureTime() const
	{
		return mDepartureTime;
	}
	void FlightInfo::setDepartureTime(const std::string& departureTime)
	{
		mDepartureTime = departureTime;
	}
	const std::string& FlightInfo::getArrivalTime() const
	{
		return mArrivalTime;
	}
	void FlightInfo::setArrivalTime(const std::string arrivalTime)
	{
		mArrivalTime = arrivalTime;
	}
	int FlightInfo::getFlightId() const
	{
		return mFlightId;
	}
	void FlightInfo::setFlightId(int flightId)
	{
		mFlightId = flightId;
	}
	vector<Passenger>& FlightInfo::displayPassengers()
	{
		return mPassenger;
	}
	void FlightInfo::display() const
	{
		cout << endl;
		cout << "Flight ID: " << getFlightId() << "\t  " << "Flight Departure Location: " << getDepartureLocation() << " \t  " << "Flight Destination: " << getDestinationLocation() << " \t  " << "Flight Departure Time: " << getDepartureTime() << " \t  " << "Flight Arrival Time: " << getArrivalTime() << endl;
	}
}