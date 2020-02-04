#include <iostream>
#include <string>
#include "LabelGenerator.h"
#include <vector>


using namespace std;

// Course:  CS213 - Programming II  - 2018
// Title:   Assignment 2 - Task 2 - page 315 number 9
// Author:  Dr. Mohammad El-Ramly

//-------------------------------------|
// By : Muaath Hasan ID: 20170411      |
//-------------------------------------|


// to print 
ostream& operator<< (ostream& out, LabelGenerator m){
    out << m.nextLabel();
	return out;
}




int main()
{
	
    LabelGenerator figureNumbers("Figure ", 1);
    LabelGenerator pointNumbers("P", 0);
    cout << "Figure numbers: ";
    for (int i = 0; i < 3; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << figureNumbers.nextLabel();
    }
    cout << endl << "Point numbers: ";
    for (int i = 0; i < 5; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << pointNumbers.nextLabel();
    }
    cout << endl << "More figures: ";
    for (int i = 0; i < 3; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << figureNumbers.nextLabel();
    }
    cout << endl;
	

	system("pause");
}
