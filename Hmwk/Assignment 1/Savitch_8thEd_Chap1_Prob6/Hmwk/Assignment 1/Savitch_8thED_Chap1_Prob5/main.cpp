/* 
 * File:   main.cpp
 * Author: Cesar Rivera-Garcia
 * Created on June 26, 2014, 7:01 PM
 * Purpose: Program outputs the sum and product of two integers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Execution
int main()
{
    int number_of_pods, peas_per_pod, total_peas, ttl_peas;//Set the integer
    
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    ttl_peas=number_of_pods+peas_per_pod;//Sum calculation begins here
    total_peas=number_of_pods*peas_per_pod;//Product calculation begins here
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";//Product calculation ends here
    cout<<"and the sum of the peas and the pods ";
    cout<<ttl_peas;//Sum calculation ends here
    
    //exit
    return 0;
}