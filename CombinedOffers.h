/*
 * CombinedOffers.h
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#ifndef COMBINEDOFFERS_H_
#define COMBINEDOFFERS_H_
#include "TravellingOptions.h"
#include "Transport.h"
#include "Hotel.h"
#include <iostream>
using namespace std;
class CombinedOffers:public Hotel,public Transport {
public:
	CombinedOffers();
	CombinedOffers(const string,double,int,double,bool);
	virtual double price();
	virtual ~CombinedOffers();
};

#endif /* COMBINEDOFFERS_H_ */
