// Course:  CS213 - Programming II  - 2018
// Title:   Assignment 3 - Task 2
// Author:  Dr. Mohammad El-Ramly
// by : Muaath Hasan ID:20170411


#include <iostream>
using namespace std;

     //function for calculate Chocolate
void CalculateChocolate(int n);
    //function for calculate Chocolate using recursen
int Calculate_Chocolate(int n,int chocolate, int coupons);

int main(){

	cout<<"Enter how much you have : ";
	int n;
	cin>>n;
	CalculateChocolate(n);
	cout << "You get " << Calculate_Chocolate(n,0,0) << " chocolates" <<endl;

	system("pause");
}



void CalculateChocolate(int n){

	int chocolate = n;
	int coupons = n;
	while (coupons>6){
		chocolate+=1;
		coupons-=7;
	}
	cout << "You get " << chocolate << " chocolates" <<endl;
}


int Calculate_Chocolate(int n,int chocolate, int coupons){
	if(n>0){
		chocolate++;
		coupons++;
		if (coupons==7){
			chocolate++;
			coupons=0;
		}
		return Calculate_Chocolate(--n,chocolate,coupons);
	}
	else
		return chocolate;
}
