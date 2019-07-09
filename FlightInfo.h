#pragma once
#include "pch.h"
#include <string>
#include <algorithm>
#include <vector>
#include "Passenger.h"

namespace HawkinsAirlineReservation {
	class Passenger;
	class FlightInfo {
	public:
		FlightInfo() = default;
		FlightInfo(const std::string& departureLocation, const std::string& destinationLocation, const std::string& departureTime,
			const std::string& arrivalTime, int flightId);
	
		const std::string& getDepartureLocation() const;
		void setDepartureLocation(const std::string& departureLocation);

		const std::string& getDestinationLocation() const;
		void setDestinationLocation(const std::string& destinationLocation);
    
		const std::string& getDepartureTime() const;
		void setDepartureTime(const std::string& departureTime);

		const std::string& getArrivalTime() const;
		void setArrivalTime(std::string arrivalTime);

		int getFlightId() const;
		void setFlightId(int flightId); 
		
		void display() const;                              

		std::vector<Passenger>& displayPassengers();

	private:
		std::string mDepartureLocation;
		std::string mDestinationLocation;
		std::string mDepartureTime;
		std::string mArrivalTime;
		std::vector<Passenger> mPassenger;
		int mFlightId = -1;
	};
}
