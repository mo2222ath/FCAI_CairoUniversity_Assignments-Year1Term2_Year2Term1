#include <iostream>
#include <cstdlib>

using namespace std;
char matrix[3][3]= {'1','2','3','4','5','6','7','8','9'};
char player = 'x';
void printMat()
{
    system("cls");
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< "  " <<matrix[i][j] << "  ";
        }
        cout << "\n";
    }
}
void play()
{
    char pos;
    cout << "Enter your postion "<< player << ":";
    cin >> pos;
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){if (matrix[i][j]== pos){matrix[i][j] = player;}}
        if (player == 'x')
            {player = 'o';}
        else if (player == 'o') {player = 'x';}
    }
}

char whowin(){
    int xc=0 , oc=0 , counter = 0;
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (matrix[i][j] != 'x' && matrix[i][j] != 'o' ) counter++;
            if (matrix[i][j] == 'x') xc++;
            else if (matrix[i][j]== 'o') oc++;
            if (xc == 3||oc == 3){
                return xc > oc ? 'x' : 'o';
            }
        }
        xc=0,oc=0;
    }

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (matrix[j][i] == 'x') xc++;
            else if (matrix[j][i]== 'o') oc++;
            if (xc == 3||oc == 3){
                return xc > oc ? 'x' : 'o';
            }
        }
        xc=0,oc=0;
    }
    if (matrix[0][0]== 'x' && matrix[1][1]== 'x' && matrix[2][2]== 'x') return 'x';
    else if (matrix[0][0]== 'o' && matrix[1][1]== 'o' && matrix[2][2]== 'o') return 'o';
    else if (matrix[2][0]== 'x' && matrix[1][1]== 'x' && matrix[0][2]== 'x') return 'x';
    else if (matrix[2][0]== 'o' && matrix[1][1]== 'o' && matrix[0][2]== 'o') return 'o';

    if (counter == 0) return 'over';


    return '.';


}


int main(){

    while (whowin() == '.'){
        printMat();
        play();
    }
    printMat();
    if (whowin() == 'over'){cout << "\n No Winner!! \n\n";}
    else
        cout << "\nThe winner is player  ("<< whowin() << ") , Congratulation !! \n";
    system("pause");



        return 0;
    }
