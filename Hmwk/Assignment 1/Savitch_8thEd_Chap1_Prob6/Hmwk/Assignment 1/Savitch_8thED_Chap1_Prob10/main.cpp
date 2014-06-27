/* 
 * File:   main.cpp
 * Author: Cesar Rivera-Garcia
 * Created on June 26, 2014, 1:11 PM
 * Purpose: create a large letter "C" composed of a character
 */

//System Libraries
#include <iostream>

using namespace std;

// User Defined Libraries

//Global Constants

//Execution begins here
int main()
{
    char ltr;
    
    cout<<"Enter a letter and then press enter.\n";
    cin>>ltr;//the letter you will enter
    
    cout<<"   "<<ltr<<ltr<<ltr<<endl;
    cout<<"  "<<ltr<<"  "<<ltr<<endl;
    cout<<" "<<ltr<<endl;
    cout<<" "<<ltr<<endl;
    cout<<" "<<ltr<<endl;
    cout<<" "<<ltr<<endl;
    cout<<" "<<ltr<<endl;
    cout<<"  "<<ltr<<"  "<<ltr<<endl;
    cout<<"   "<<ltr<<ltr<<ltr<<endl;

    return 0;
}

