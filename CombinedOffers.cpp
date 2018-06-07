/*
 * CombinedOffers.cpp
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#include "CombinedOffers.h"
CombinedOffers::CombinedOffers() {

}
CombinedOffers::CombinedOffers(const string n,double fF,int nON,double pPN,bool t=false): Hotel(n,fF,nON,pPN),Transport(n,fF,t)
{}
 double CombinedOffers::price()
{
	return (0.75*(Hotel::price()+Transport::price()));
}
CombinedOffers::~CombinedOffers() {
	// TODO Auto-generated destructor stub
}

