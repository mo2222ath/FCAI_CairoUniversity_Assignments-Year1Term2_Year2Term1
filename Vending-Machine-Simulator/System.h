#ifndef SYSTEM_H
#define SYSTEM_H

#include "Stock.h"
#include <string>
using namespace std;

class System : public Stock
{
private:
	float Money_of_Buyer;
public:
	void Vending_Machin();


};

#endif