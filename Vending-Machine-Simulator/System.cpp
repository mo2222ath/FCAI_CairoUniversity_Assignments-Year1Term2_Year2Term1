
#include "System.h"

#include <iostream>
#include <windows.h>
#include <iomanip>





void System::Vending_Machin(){

	Stock Vending;

	Items Pipsi ("Pipsi      ","Drink",10, 5);
    Vending.set_on_stock(Pipsi, Items::counter_of_items );
    Items Orange_Juice  ("Orange_Juice","Drink",10,5);
    Vending.set_on_stock(Orange_Juice,Items::counter_of_items );
    Items Apple_Juice ("Apple_Juice","Drink",10,5);
    Vending.set_on_stock(Apple_Juice,Items::counter_of_items );
    Items Milk   ("Milk       ","Drink",10,7);
    Vending.set_on_stock(Milk, Items::counter_of_items );
    Items Water   ("Water     ","Drink",10,3);
    Vending.set_on_stock(Water,Items::counter_of_items );
	Items Chipsy   ("Chipsy     ","Eating",10,4);
    Vending.set_on_stock(Chipsy,Items::counter_of_items );
	Items Chocolate   ("Chocolate  ","Eating",10,3);
    Vending.set_on_stock(Chocolate,Items::counter_of_items );
	Items Weavar   ("Weavar    ","Eating",10,2.5);
    Vending.set_on_stock(Weavar,Items::counter_of_items );
	Items Biskuit   ("Biskuit   ","Eating",10,4);
    Vending.set_on_stock(Biskuit,Items::counter_of_items );
	Items Gum   ("Gum        ","Eating",10,0.5);
    Vending.set_on_stock(Gum,Items::counter_of_items );

	
	string welcome="\t------------------ Welcome to Velding Machine Program By: Muaath Hasan & Gobran Asker ------------------\n";
        for(int i=0;i<welcome.size();i++){
            cout<<welcome[i];
            Sleep(100);
        }
		

	cout<<endl;
	cout << "Please Enter Your Maney : ";
	cin>>Money_of_Buyer;
	Vending.print();
	cout << "Please choese what you want from 1 to 10 or 0 for cancel : ";
	int ch;
	cin>>ch;
	while(ch!=0){
		while(true)
			  {
			  if(ch>=0 && ch<11)break;
			  else
			  {
			     cout<<"Please enter from 1 to 10 only or 0 for cancel\n";
			     cin>>ch;
			 }
		}

		switch (ch)
		{
		case 1:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
		case 2:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
		case 3:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 4:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 5:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 6:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 7:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 8:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 9:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
			case 10:
			{
				if (Money_of_Buyer>=Vending.List_Of_Item[ch-1].getprice()){
					if(Vending.List_Of_Item[ch-1].getAvailAmount()>=1){
						Money_of_Buyer-= Vending.List_Of_Item[ch-1].getprice();
						int a=Vending.List_Of_Item[ch-1].getAvailAmount();
						Vending.List_Of_Item[ch-1].setAvailAmount(--a);
						cout <<"You have now : "<< Money_of_Buyer<<endl;
						break;
					}
					else{
						cout<<"Sorry, I've finished the quantity "<<endl;
						break;
					}
				}
				else{
					cout<<"Sorry you do not have enough money for that"<<endl;
						break;
				}
			}
		default:
			break;
		}
		Vending.print();
		cout<<"Do you wnat some thing else\n";
		cout<<" enter from 1 to 10 only or 0 for cancel\n";
		cin>>ch;
	}

	int a=0,b=0,c=0,e=0,d=0;
	while(Money_of_Buyer>0){
		
		if(Money_of_Buyer>=20){a++;Money_of_Buyer-=20;}
		else if (Money_of_Buyer>=10){b++;Money_of_Buyer-=10;}
		else if (Money_of_Buyer>=5){c++;Money_of_Buyer-=5;}
		else if (Money_of_Buyer>=1){d++;Money_of_Buyer-=1;}
		else if (Money_of_Buyer>0){e++;Money_of_Buyer-=0.5;}
	}
	cout<<"you've got a "<< a << " from the category of 20 pounds" <<endl;
	cout<<"you've got a "<< b << " from the category of 10 pounds" <<endl;
	cout<<"you've got a "<< c << " from the category of 5 pounds" <<endl;
	cout<<"you've got a "<< d << " from the category of 1 pound" <<endl;
	cout<<"you've got a "<< e << " from the category of 0.5 pound" <<endl;
		

}


