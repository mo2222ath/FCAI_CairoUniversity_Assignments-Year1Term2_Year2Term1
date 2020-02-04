#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Items
{
protected:
    string Name;
    int Id;
    string Type;
    float Price;
    int AvailAmount;


public:
    int order;
    static int counter_of_items;
    Items(int);
    Items();
    Items(string,string,int,float);
    int getcounter_of_items();
    string getname();
    int getid();
    string gettype();
    float getprice();
    void setAvailAmount (int);
    void setname(string);
    void setID(int);
    void setType(string);
    void setPrice (float);
    friend istream& operator >> (istream&, Items& );
    int getAvailAmount() ;
};


#endif // ITEM_H
