#include <iostream>
#include <string.h>

using namespace std;

char cipher(char c, int shift)
{
    if(c>='A'&&c<='Z')
    {
        return (c - 'A' + 26 + shift) % 26 + 'A';
    }
    else
    {
        return (c - 'a' + 26 + shift) % 26 + 'a';
    }
}
char decipher(char c, int shift)
{
    if(c>='A'&&c<='Z')
    {
        return (c - 'A' + 26 - shift) % 26 + 'A';
    }
    else
    {
        return (c - 'a' + 26 - shift) % 26 + 'a';
    }
}


int main()
{


// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Caesar Cipher
// Last Modification Date: 04/03/2
// Author1 and ID and Group: 20170411 G15
// Teaching Assistant: Samer Taha


    cout<<"\n Hello ^_^"<<endl;
    cout<<"\n My name is Moath Hasan - 20170411"<<endl;
    char repeat='y';

    while (repeat=='y')
    {

        cout<<"\n What do you like to do ?"<<endl;
        cout<< " 1- Cipher a message \n 2- Decipher a message \n 3- End"<<endl;

        int c;
        cin >> c;
        if (c == 1 || c == 2)
        {
            string sentence;
            cout << "\n Please enter a sentence:" << endl;
            cin.ignore();
            getline(cin, sentence);
            int shift;
            cout << "\n Please enter the shift value:";
            cin >> shift;
            for (int i = 0; i < sentence.length(); ++i)
            {
                if (sentence[i] == ' ')
                {
                    cout << ' ';
                }
                else if (c == 1)
                {
                    cout << cipher(sentence[i], shift);
                }
                else if (c == 2)
                {
                    cout << decipher(sentence[i], shift);
                }
            }
            cout << endl;
        }
        else if (c == 3)
        {
            cout <<"Good luck !! ";
        }
        cout << "\n Would you like to continue? Press y to repeat. Press any other key to exit. ";
        cin >> repeat;
    }

    return 0;
}
