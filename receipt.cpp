// receipt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string first, second;
    double firstP, secondP, total;

    cout << "Input name of first item: ";
    cin >> first;
    cout << "Input price of first item: ";
    cin >> firstP;

    cout << "Input name of second item: ";
    cin >> second;
    cout << "Input price of second item: ";
    cin >> secondP;

    total = firstP + secondP;

    {
        cout << "RECEIPT\n";
        cout << setw(20) << left << first << "$" << setw(5) << right << firstP << endl;
        cout << setw(20) << left << second << "$" << setw(5) << right << secondP << endl;
        cout << setw(20) << left << "Total" << "$" << setw(5) << right << total;
    }
}

/*
Input name of first item : Cheeseburger
Input price of first item : 10.59
Input name of second item : Fries
Input price of second item : 3.49
RECEIPT
Cheeseburger        $10.59
Fries               $ 3.49
Total               $14.08 
*/
