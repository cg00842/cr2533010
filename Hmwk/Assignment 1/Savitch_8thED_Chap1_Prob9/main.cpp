/* 
 * File:   main.cpp
 * Author: Cesar Rivera-Garcia
 * Created on June 26, 2014, 8:50 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Execution
int main() {
    
    float distance;
    unsigned short acceleration=32;//Is feet per second
    float time;//Is in seconds
    
    cout<<"Enter the time the object is falling in seconds"<<endl;
    cin>>time;
    
    distance=(acceleration*(time*time))/2;//distance of the freefall of object
    
    cout<<"The object drops "<<distance<<" feet"<<endl;
    
    return 0;
}