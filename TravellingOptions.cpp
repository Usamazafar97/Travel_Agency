/*
 * TravellingOptions.cpp
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#include "TravellingOptions.h"

TravellingOptions::TravellingOptions() {
	// TODO Auto-generated constructor stub
		name="";
		flatFee=0;
}
TravellingOptions::TravellingOptions(string comingName,double comingFlatFee) {
		name=comingName;
		flatFee=comingFlatFee;
}
double TravellingOptions::getFlatFee() const {
	return flatFee;
}
double TravellingOptions::price()  {
	return flatFee;
}
ostream& operator<<(ostream& input,const TravellingOptions& comingTravellingOptions)
{
	input<<"Name ->"<<comingTravellingOptions.getName();
	input<<"Price : "<<comingTravellingOptions.getFlatFee()<<" PKR";
	return input;
}
string TravellingOptions::Name()
{
	return name;
}
void TravellingOptions::setFlatFee(double flatFee) {
	this->flatFee = flatFee;
}

const string& TravellingOptions::getName() const {
	return name;
}

void TravellingOptions::setName(const string& name) {
	this->name = name;
}

TravellingOptions::~TravellingOptions() {
	// TODO Auto-generated destructor stub
}

