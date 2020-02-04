#include<iostream>

using namespace std;


void Display(char a[][4]);
void Display2(char numbers[][4] ,char stars[][4], int n1 , int n2);
int cheak(char a[4][4]);

int main(){

	char numbers[4][4] = {'5','6','4','7','8','3','7','2','1','3','4','2','5','6','8','1'};
	char stars[4][4] = {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};



	int n1,n2,n3,n4;

	while (cheak(stars) == 1 ){

		Display(stars);
		//Display(numbers);

		cout << " Enter to numbers Matrix to view the number row and col for number one  : ";
		cin>>n1>>n2;

		Display2(numbers,stars,n1,n2);
		cout << " Enter to numbers Matrix to view the number row and col for number two  : ";
		cin>>n3>>n4;
		Display2(numbers,stars,n3,n4);

		if(stars[n1][n2] != stars[n3][n4]){
			stars[n1][n2]='*';
			stars[n3][n4]='*';
		}

		cout<<"________________________By: Muaath Hasan_______________________________________"<<endl;
		cout<<"_______________________________________________________________________________"<<endl<<endl;


	}


    return 0;
}




void Display(char a[][4]){

    cout <<"    "<< '0' << "  " << '1' << "  " << '2' << "  " << '3' <<endl;
    cout <<"   "<< "------------" <<endl;
	for (int i=0;i<4;i++){
            cout << i << " |" ;
		for (int j=0;j<4;j++){
			cout << " " << a[i][j] << " ";
		}
		cout<<endl;
	}

	cout<<endl << endl;
}

int cheak(char a[4][4]){
	int n=16;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			if (a[i][j] != '*'){
				n-- ;
			}
		}
	}
	if (n==0){return 0;}
    else {return 1;}
}

void Display2(char numbers[][4] ,char stars[][4], int n1 , int n2){

	cout <<"    "<< '0' << "  " << '1' << "  " << '2' << "  " << '3' <<endl;
    cout <<"   "<< "------------" <<endl;
	for (int i=0;i<4;i++){
            cout << i << " |" ;
		for (int j=0;j<4;j++){
			if ((n1==i) && (n2==j)){
				stars[i][j] = numbers[i][j];
				cout << " " << stars[i][j] << " ";}
			else {cout << " " << stars[i][j] << " ";}
			}
		cout<<endl;
		}
		cout<<endl;

	cout << endl << endl;
}
