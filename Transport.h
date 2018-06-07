/*
 * Transport.h
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#ifndef TRANSPORT_H_
#define TRANSPORT_H_
#include "TravellingOptions.h"
#include <iostream>
using namespace std;
class Transport :virtual public TravellingOptions {
	bool trip;
	static int LONG_TARIF;
	static int BASIC_TARIF;
public:
	Transport();
	Transport(string,double,bool=false);
	virtual double price();
	virtual ~Transport();
};


#endif /* TRANSPORT_H_ */
