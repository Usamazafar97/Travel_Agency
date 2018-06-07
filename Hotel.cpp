/*
 * Hotel.cpp
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#include "Hotel.h"

Hotel::Hotel() {
	// TODO Auto-generated constructor stub
	 numberOfNights=0;
		 pricePerNight=0;
}
Hotel::Hotel(string n,double fF,int nON,double pPN) :TravellingOptions(n,fF){
	 numberOfNights=nON;
		 pricePerNight=pPN;
}
double Hotel::price()
{
	return ((numberOfNights*pricePerNight)+getFlatFee());
}
Hotel::~Hotel() {
	// TODO Auto-generated destructor stub
}

