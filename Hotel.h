/*
 * Hotel.h
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#ifndef HOTEL_H_
#define HOTEL_H_
#include "TravellingOptions.h"
#include <iostream>
using namespace std;
class Hotel :virtual public TravellingOptions{
	int numberOfNights;
	double pricePerNight;
public:
	Hotel();
	Hotel(string,double,int,double);
	virtual double price();
	virtual ~Hotel();
};

#endif /* HOTEL_H_ */
