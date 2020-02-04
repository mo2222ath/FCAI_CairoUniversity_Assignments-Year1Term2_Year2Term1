#include <iostream>
#include <cmath>
using namespace std;

int main()
{


// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Worker’s gross pay
// Last Modification Date: 04/03/2018
// Author1 and ID and Group: 20170411 G15
// Teaching Assistant: Samer Taha

    cout<<"\n Hello ^_^"<<endl;
    cout<<"\n My name is Moath Hasan - 20170411"<<endl;

    char repeat='y';

    while (repeat=='y')
    {

        double employ_pay; //to collect gross pay for employ
        int N_hours; // enter how many hours take in a week
        cout<<"\n please Enter How many hours you take in a week : ";
        cin>>N_hours;
        if (N_hours <=40)
        {
            employ_pay = 16.78 * N_hours; // if the hours smallest 40 hours
        }
        else if(N_hours > 40 )
        {
            employ_pay=(16.78*(16.78*1.5)*N_hours); // if the hours bigger 40 hours
        }
        employ_pay -= ((employ_pay*0.06) + (employ_pay*0.14) + (employ_pay*0.04) + (employ_pay*0.10)); // to collect gross pay with out costs on him

        char YorN; // to know if he have 3 or more
        cout<<"\n please Enter (Y) if you have 3 or more dependents or (N) if you haven't : ";
        cin>>YorN;
        if (YorN == 'Y' || YorN == 'y' )
        {
            employ_pay-=35;
        }

        cout << endl << "\n You gross pay is : " << employ_pay << "$"<<endl;

        cout << "\n Would you like to continue? Press y to repeat. Press any other key to exit. ";
        cin >> repeat;
    }
    return 0;
}
