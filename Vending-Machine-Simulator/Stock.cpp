#include "Stock.h"

#include <iostream>
#include <windows.h>
#include <iomanip>

Stock::Stock (int i):Items(2) {}
Stock::Stock ()
    {
        List_Of_Item=new Items [10];
        List_Of_Item[9].counter_of_items=0;
    }
void Stock::set_on_stock(Items i,int x)
    {
        List_Of_Item[x-1]=i;
    }
void Stock::print()
    {
		cout<<endl;
        cout<<"        Name       "<<"   Type   "<<"          Price   "<<"         Amount   "<<endl;
		cout<<"|------------------------------------------------------------------------|"<<endl;
        for(int i=0; i<Items::counter_of_items; i++)
        {
            if(List_Of_Item[i].getAvailAmount()<5)
            {
                HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(h,FOREGROUND_RED);
                cout<<i+1<<"- "<<setw(10)<<List_Of_Item[i].getname()<<"\t"<<setw(10)<<List_Of_Item[i].gettype()<<"\t"<<setw(10)<<List_Of_Item[i].getprice()<<"\t"<<setw(10)<<List_Of_Item[i].getAvailAmount()<<endl;
                SetConsoleTextAttribute(h,7);
            }
            else
            {
                cout<<i+1<<"- "<<setw(10)<<List_Of_Item[i].getname()<<"\t"<<setw(10)<<List_Of_Item[i].gettype()<<"\t"<<setw(10)<<List_Of_Item[i].getprice()<<"\t"<<setw(10)<<List_Of_Item[i].getAvailAmount()<<endl;
            }

        }
		cout<<"|________________________________________________________________________|"<<endl;
    }
