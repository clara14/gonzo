#include <iostream>
#include<cstring>
#include <string>

using namespace std;

int main(){

    string mystring = " ";
    char letter;

    for(int i = 0; i < 5; i++){
        cout << "Enter a char: ";
        cin >> letter;
        mystring+= letter;
    }

    cout << "\n The string is " << mystring << " \n\n";

    cout << "Enter a letter to see if its in your string: ";
    cin >> letter;

    for(int i=0;i<mystring.length();i++)
    {
        if(mystring[i]==letter)
        {    cout << "that shit worked dawg\n";
             return(1);
        }
    }

    cout << "that shit didnt work dawg\n";


    return(0);



}

