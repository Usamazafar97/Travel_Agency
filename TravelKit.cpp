/*
* TravelKit.cpp
*
*  Created on: Apr 25, 2018
*      Author: DELL
*/

#include "TravelKit.h"

TravelKit::~TravelKit() {
	// TODO Auto-generated destructor stub
}
TravelKit::TravelKit() {
	// TODO Auto-generated constructor stub
	ptr = NULL;
	departure = "";
	destination = "";
	size = 0;
}
TravelKit::TravelKit(string comingdeParture, string comingDestination) {
	departure = comingdeParture;
	destination = comingDestination;
	ptr = NULL;
	size = 0;
}
double TravelKit::price() const
{
	if (size>0)
	{
		double tempPrice = 0;
		for (int i = 0;i<size;i++)
		{
			//for (int j = 0;j<size;j++)
			{
				tempPrice += ptr[i][0].price();
			}
		}		return tempPrice;
	}
	else
		return 0;
}
int TravelKit::getSize() const
{
	return size;
}
void TravelKit::AddOption(TravellingOptions& comingObject)
{

	if (size == 0)
	{
		//size++;
		ptr = new TravellingOptions*[size];

			ptr[size] = &comingObject;
		size++;
	}
	else
	{
		//size++;
		TravellingOptions **tempPtr;
		tempPtr = new TravellingOptions*[size];
		for (int i = 0;i<size;i++)
		{
			tempPtr[i] = ptr[i];
		}
		tempPtr[size] = &comingObject;
		for(int i = 0; i < size; i++)
		{
			delete  ptr[i];
		}
		ptr = tempPtr;
		size++;
	}
}

ostream& operator<<(ostream& input, const TravelKit& comingObject)
{
	if (comingObject.getSize() == 0)
	{
		input << "Travel from " <<comingObject.getDeparture() << " to " << comingObject.getDestination() << " You have not reserved yet!" << endl;
	}
	else
	{
		input << "Travel from " << comingObject.getDeparture() << " to " << comingObject.getDestination() << " With the Options:" << endl;
		for (int i = 0;i<comingObject.getSize();i++)
		{
			input << comingObject.getPtr()[i]-> getName() << "->" << comingObject.getPtr()[i]->price();
			input << endl;
		}
		input << "Total Price :" << comingObject.price();
	}
	return input;
}
void TravelKit::Cancel()
{
	for(int i = 0; i < size; i++)
	{
		delete  ptr[i];
	}
	size=0;

}
const string& TravelKit::getDeparture() const {
	return departure;
}

void TravelKit::setDeparture(const string& departure) {
	this->departure = departure;
}

const string& TravelKit::getDestination() const {
	return destination;
}

void TravelKit::setDestination(const string& destination) {
	this->destination = destination;
}
TravellingOptions** TravelKit::getPtr() const {
	return ptr;
}
void TravelKit::setSize(int size) {
	this->size = size;
}
