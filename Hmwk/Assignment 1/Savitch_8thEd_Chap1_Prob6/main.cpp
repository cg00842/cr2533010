/* 
 * File:   main.cpp
 * Author: Cesar Rivera-Garcia
 * Created on June 26, 2014, 8:04 PM
 * Purpose: Errors in programs
 */

/* Error Programs
 * a) main.cpp:8:10: fatal error: 'i ostream' file not found
 * b) main.cpp:12:10: error: expected "FILENAME" or <FILENAME>
 * c) main.cpp:16:2: error: C++ requires a type specifier for all declarations
 * d) main.cpp:17:6: error: expected unqualified-id
 * e) main.cpp:20:1: error: expected expression
 *    main.cpp:20:9: error: expected ';' after top level declarator
 * f) main.cpp:25:5: error: use of undeclared identifier 'cot'; did you mean 'cout'?
 *    main.cpp:28:5: error: use of undeclared identifier 'cn'
 *    main.cpp:41:9: warning: result of comparison against a string literal is unspecified (use strncmp instead) [-Wstring-compare]
 *    main.cpp:44:14: error: expected '}'
 */
#include <iostream>
using namespace std;
//Begin
int main()
{
    int number_of_pods, peas_per_pod, total_peas;//Set the integer
    
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
    
    //exit
    return 0;
}