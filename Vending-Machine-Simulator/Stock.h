#ifndef STOCK_H
#define STOCK_H

#include "Items.h"

class Stock : public Items
{
public:
    Items *List_Of_Item;
    Stock (int);
    Stock ();
    void set_on_stock(Items ,int );
    void print() ;
};


#endif // STOCK_H
