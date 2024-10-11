// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;


int main()
{
    
        const double risePerYear = 1.5; // millimeters

        // Calculate the rise for 5, 7, and 10 years
        double riseIn5Years = risePerYear * 5;
        double riseIn7Years = risePerYear * 7;
        double riseIn10Years = risePerYear * 10;

        // Display the results
        cout << "In 5 years, the ocean's level will be "<<riseIn5Years <<" millimeters higher."<< endl;
            cout << "In 7 years, the ocean's level will be "<<riseIn7Years <<" millimeters higher."<< endl;
            cout << "In 10 years, the ocean's level will be "<<riseIn10Years <<" millimeters higher."<<endl;

           
}

