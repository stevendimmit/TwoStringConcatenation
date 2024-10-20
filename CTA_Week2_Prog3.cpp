// CTA_Week2_Prog3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Steven Dimmit

#include <iostream>
#include <string>

using namespace std;

int main()
{   
    // need two strings to combine two strings
    string firstInput;
    string secondInput;
    string concatenatedString;
    // while loop variable that keeps track of number of iterations of loop
    int i = 0;
    //number of iterations, change if you want more or less
    const unsigned int numIterations = 3;
    
    //while loop to test multiple different lengths of strings.
    while (i < numIterations) {
        cout << "Enter First String: ";
        getline(cin, firstInput);
        cout << "Enter Second String: ";
        getline(cin, secondInput);
        cout << "Combined String: ";
        concatenatedString = firstInput + " " + secondInput;
        cout << concatenatedString << endl;
        i++;
    }
}
