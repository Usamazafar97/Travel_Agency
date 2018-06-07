/*
 * Transport.cpp
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#include "Transport.h"
int Transport::BASIC_TARIF=200;
int Transport::LONG_TARIF=1500;
Transport::Transport() {
	// TODO Auto-generated constructor stub
	trip=false;
}
Transport::Transport(string n ,double fF,bool LorB) :TravellingOptions(n,fF){
	trip=LorB;
}
double Transport::price()
{
	if(trip)
		return (LONG_TARIF + getFlatFee());
	else
		return (BASIC_TARIF + getFlatFee());
}
Transport::~Transport() {
	// TODO Auto-generated destructor stub
}

