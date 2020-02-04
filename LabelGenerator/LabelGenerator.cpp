#include "LabelGenerator.h"
#include <iostream>
#include <sstream>  // for string streams
#include <string>  // for string

using namespace std;


LabelGenerator::LabelGenerator(string n, int s){
	setName(n);
	setSt(s);
}
string LabelGenerator::nextLabel(){
	string striSt = std::to_string(getSt());

    string F = getName() + " " + striSt;
	st++;
    return F;
}
void LabelGenerator::setSt(int s){st=s;}
void LabelGenerator::setName(string n){name = n;}
int LabelGenerator::getSt(){return st;}
string LabelGenerator::getName(){return name;}


LabelGenerator::~LabelGenerator(void)
{
}
