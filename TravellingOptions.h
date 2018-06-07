/*
 * TravellingOptions.h
 *
 *  Created on: Apr 24, 2018
 *      Author: DELL
 */

#ifndef TRAVELLINGOPTIONS_H_
#define TRAVELLINGOPTIONS_H_
#include <iostream>
using namespace std;
class TravellingOptions {
	string name;
	double flatFee;
public:
	TravellingOptions();
	TravellingOptions(string,double);
	string Name();
	virtual double price();

	virtual ~TravellingOptions();
	double getFlatFee() const;
	void setFlatFee(double flatFee);
	const string& getName() const;
	void setName(const string& name);
};
ostream& operator<<(ostream& input,const TravellingOptions& comingTravellingOptions);
#endif /* TRAVELLINGOPTIONS_H_ */
