
#include <iostream>

using namespace std;

class LabelGenerator
{
private:
	int st;
	string name;
public:
	LabelGenerator(string , int);
	string nextLabel();
	void setSt(int);
	void setName(string);
	int getSt();
	string getName();
	friend ostream& operator<< (ostream& out, LabelGenerator m);
	~LabelGenerator(void);
};
