#include <iostream>
#include <fstream>

using namespace std;

// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 2 - page 374 number 11
// Author:  Dr. Mohammad El-Ramly

//-------------------------------------|
// By : Muaath Hasan ID: 20170411      |
//-------------------------------------|

int main()
{
    //create folder in svg type
    ofstream Bar("BarChart.svg");
    //create array to save four numbers to daigram
    int H[4];
    cout<<"Please enter 4 numbers not negative and max is 400 pixels "<<endl;
    //array to enter four numbers
    for(int i=0;i<4;i++){
       cin>>H[i];
       if(H[i]<0 && H[i]>400){
       cout<<"Please enter again not negative and less 400 pixels "<<endl;
       i--;
       }
    }



    // enter text to file with numbers who user enter it
    Bar<<"<svg width=\"1000\" height=\"1000\"\n";
    Bar<<"xmlns=\"http://www.w3.org/2000/svg\">\n";
    Bar<<"<line x1=\"150\" y1=\"600\" x2=\"150\" y2=\"850\"\n";
    Bar<<"style=\"stroke:purple;stroke-width:3\"/>\n";
    Bar<<"<line x1=\"150\" y1=\"600\" x2=\"600\" y2=\"600\"\n";
    Bar<<"style=\"stroke:purple;stroke-width:3\"/>\n";
    Bar<<"<rect x=\"200\" y=\"600\" width=\"50\" height=\""<<H[0]<<"\"\n";
    Bar<<"style=\"fill:blue;\"/>\n";
    Bar<<"<rect x=\"300\" y=\"600\" width=\"50\" height=\""<<H[1]<<"\"\n";
    Bar<<"style=\"fill:blue;\"/>\n";
    Bar<<"<rect x=\"400\" y=\"600\" width=\"50\" height=\""<<H[2]<<"\"\n";
    Bar<<"style=\"fill:blue;\"/>\n";
    Bar<<"<rect x=\"500\" y=\"600\" width=\"50\" height=\""<<H[3]<<"\"\n";
    Bar<<"style=\"fill:blue;\"/>\n";
    Bar<<"</svg>\n";


    return 0;
}
