#include <iostream>
#include <cmath>

using namespace std;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Solves a quadratic equation
// Last Modification Date: 04/03/2018
// Author1 and ID and Group: 20170411 G15
// Teaching Assistant: Samer Taha

///(–b ± sqrt(b2 – 4ac)) / 2a

int main()
{


    cout << "\n Hello User!" << endl;
    cout << "\n My name is MUaath Hasan - 20170411" << endl;
    char repeat= 'y';
    while (repeat=='y') // to repeat the program
    {
        float a; // to enter the first value
        cout << "\n Please Enter value of \'a\' =  ";
        cin >> a;
        float b; // to enter the second value
        cout << "\n Please Enter value of \'b\' =  ";
        cin >> b;
        float c; // to enter the third value
        cout << "\n Please Enter value of \'c\' =  ";
        cin >> c;

        double delta = (pow(b,2) - 4*a*c); // collect Delta
        if (delta > 0) // to know if Delta > 0 or < 0 Or == 0
        {
            cout<<"\n There is tow real different numbers "<<endl;
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);


            cout << "\n X1 = "<<x1 << "\n X2 = "<< x2;
        }
        else if (delta == 0)
        {
            cout<<"\n There is two real same numbers "<<endl;
            float x= (-b - sqrt(delta)) / (2*a);

            cout << "\n X = "<<x ;
        }
        else
        {
            float realPart = -b/(2*a);
            cout<<"\n There is two complex numbers "<<endl;
            cout << "\n x1 = " << realPart << "+" <<"("<< delta << "i" <<")"<< endl;
            cout << "\n x2 = " << realPart << "-" <<"("<< delta << "i" <<")"<< endl;
        }
        cout<< "\n Enter y if you want to repeat and any key if you don't : ";
        cin>>repeat;
    }

    return 0;
}
