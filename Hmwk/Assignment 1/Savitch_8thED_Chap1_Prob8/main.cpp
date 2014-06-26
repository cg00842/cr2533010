/* 
 * File:   main.cpp
 * Author: Cesar Rivera-Garcia
 * Created on June 26, 2014, 11:19 AM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Begin Execution
int main(int argc, char** argv) {
    
    //Declare the variables
    char nQ, nD, nN;//Number of Quarters, Nickles, and Dimes
    unsigned short cents;
    
    //Input the number of coins
    cout<<"On 1 line input the number of Quarters\n";
    cout<<"then Nickles, and Dimes\n";
    cout<<"Values from 0 to 9 only\n";
    cin>>nQ>>nD>>nN;
    
    //Calculate the cents
    cents=(nQ-48)*25+(nD-48)*10+(nN-48)*5;
    
    //output the results
    cout<<"Total cents = ";
    cout<<cents;
    
    //exit
    return 0;
}

