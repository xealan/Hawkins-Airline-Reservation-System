#include <iostream>
#include "pch.h"
#include "Passenger.h"

using namespace std;

namespace HawkinsAirlineReservation {
	Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& passengerInfo, int passengerId)
		:mFirstName(firstName), mLastName(lastName),
		mPassengerInfo(passengerInfo), mPassengerId(passengerId)
	{
	}
	Passenger::Passenger(int seatId) : mSeatId(seatId)
	{
	}

	void Passenger::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}

	const string& Passenger::getFirstName()const
	{
		return mFirstName;
	}

	void Passenger::setLastName(const string& lastName)
	{
		mLastName = lastName;
	}
	const string& Passenger::getLastName() const
	{
		return mLastName;
	}
	void Passenger::setPassengerInfo(const string& passengerInfo)
	{
		mPassengerInfo = passengerInfo;
	}
	const string& Passenger::getPassengerInfo() const
	{
		return mPassengerInfo;
	}
	void Passenger::setPassengerId(int passengerId)
	{
		mPassengerId = passengerId;
	}
	int Passenger::getPassengerId() const
	{
		return mPassengerId;
	}

	void Passenger::setSeatNumber(int seatId)
	{
		mSeatId = seatId;
	}
	int Passenger::getSeatNumber () const
	{
		return mSeatId; 
	}

	void Passenger::addNew()
	{
		mAdded = true;
	}

	void Passenger::addSeat()
	{
		mAddSeat = true;
	}

	void Passenger::display() const {
		cout << endl;
		cout << "Passenger Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Passenger Address and Phone Number: " << getPassengerInfo() << endl;
		cout << "Passenger SSN (no spaces): " << getPassengerId() << endl;
	}
}
