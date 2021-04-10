/*                              MOHAMMED FAHAD , ID: 24006611
“The work in this assignment is my own. Any outside sources have been properly cited.”
 */


//Provided by:   MOHAMMED FAHAD
// Email Address: mfahad001@citymail.cuny.edu

#include<stdio.h>
#include <ostream>
#include <fstream>
#include <iostream>
#include "rec_fun.hpp"
using namespace std;

int main()
{
    /*------------*binary values*-------*/
    binary_print(cout,27); //print binary value
    cout<<endl;
    binary_print(cout,4);//print binary value
    cout<<endl;
    /*------------ *Triangle Pattern *-------*/
    cout<<endl;
    triangle(cout,3, 5);//to print traingular patter
    cout<<endl;
    /* power function */
    cout<<pow(2,3)<<endl;
    cout<<endl;
    /* indented sentences function*/
    indented_sentences(1,4);
    
    return 0;
}
