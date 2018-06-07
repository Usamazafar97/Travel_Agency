/*
* TravelKit.h
*
*  Created on: Apr 25, 2018
*      Author: DELL
*/

#ifndef TRAVELKIT_H_
#define TRAVELKIT_H_
#include "Transport.h"
#include "Hotel.h"
#include"TravellingOptions.h"
#include <iostream>
#include <string>
using namespace std;
class TravelKit {
	TravellingOptions ** ptr;
	int size;
	string departure;
	string destination;
public:
	TravelKit();
	virtual ~TravelKit();
	TravelKit(string, string);
	int getSize() const;
	double price() const;
	void AddOption(TravellingOptions&);
	const string& getDeparture() const;
	void setDeparture(const string& departure);
	const string& getDestination() const;
	void setDestination(const string& destination);
	TravellingOptions** getPtr() const;
	//void setPtr(const TravellingOptions**& ptr);
	void setSize(int size);
	void Cancel();
};
ostream& operator<<(ostream& input, const TravelKit& comingObject);
#endif /* TRAVELKIT_H_ */

