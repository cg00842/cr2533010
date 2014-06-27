/* 
 * File:   main.cpp
 * Author: Cesar Rivera-Garcia
 * Created on June 26, 2014, 10:47 AM
 */

#include <iostream>
using namespace std;
//Begin
int main()
{
    int number_of_pods, peas_per_pod, total_peas;//Set the integer
    
    cout<<"Hello\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;//Calculation begins here
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";//Calculation ends here
    cout<<"Good-bye\n";
    //exit
    
    return 0;
}