#pragma once
#include "FlightInfo.h"
#include <string>
#include <vector>
#include <iostream>

namespace HawkinsAirlineReservation {

	class Passenger{
	public:
		Passenger() = default;
		Passenger(const std::string& firstName,
			const std::string& lastName, const std::string& passengerInfo, int passengerId);
		Passenger(int seatId);
			
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& firstName);
		const std::string& getLastName() const;

		void setPassengerInfo(const std::string& passengerInfo);
		const std::string& getPassengerInfo() const;

		void setPassengerId(int passengerId);
		int getPassengerId() const;
		
		void setSeatNumber(int seatId);
		int getSeatNumber()const;

		void addNew();
		void addSeat();
		void display() const;

	private:
		std::string mFirstName;
		std::string mLastName; 
		std::string mPassengerInfo;
		int mPassengerId;
		bool mAdded = false;
		int mSeatId = -1;   
		bool mAddSeat = false;
	};
}
