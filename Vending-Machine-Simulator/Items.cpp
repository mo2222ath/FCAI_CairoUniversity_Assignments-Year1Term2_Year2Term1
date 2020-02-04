#include "Items.h"

#include <iostream>

Items::Items(int i) {}
Items::Items()
    {
        order=counter_of_items;

        Name="";
        counter_of_items++;
    }
Items::Items(string n,string type,int Avail,float p)
    {
        Name=n;
        Type=type;
        AvailAmount=Avail;
        Price=p;
        order=counter_of_items;
        counter_of_items++;
    }
int Items::getcounter_of_items()
    {
        return counter_of_items;
    }
string Items::getname()
    {
        return Name;
    }
int Items::getid()
    {
        return Id;
    }
string Items::gettype()
    {
        return Type;
    }
float Items::getprice()
    {
        return Price;
    }
void Items::setAvailAmount (int AV)
    {
        AvailAmount=AV;
    }
void Items::setname(string n)
    {
        Name=n;
    }
void Items::setID(int ID)
    {
        Id=ID;
    }
void Items::setType(string T)
    {
        Type=T;
    }
void Items::setPrice (float p)
    {
        Price=p;
    }

int Items::getAvailAmount()
    {
        return AvailAmount;
    }
int Items::counter_of_items=0;

/*
istream& operator >> (istream& In, Items& I)
{
    In>>I.Name;
    In>>I.Type;
    In>>I.AvailAmount;
    In>>I.Price;
    return In;
}
*/

