#include <iostream>

/* Write a program to enter Principal, Time, Rate of Interest and calculate Simple Interest.*/

using namespace std;

int main()
{

    float principal = 0;
    float rate = 0;
    float time = 0;
    float simpleInterest = 0;

    //clear screen
    system("CLS");


    cout << "\n\t\t######################\t\tQuestion 9\t\t######################\t\t" << endl;
    cout << "\n\t\tThis App will calculate the simple interest. You would need to enter \n\t\tthe principal, time and Rate of interest." << endl;

    //Get data
    cout << "\n\t\t**********************\t\tValue Entry\t\t**********************\t\t" << endl;
    cout << "\n\t\tPlease enter the Principal: $";
    cin >> principal;
    cout << "\n\t\tPlease enter the Rate of Interest (%): ";
    cin >> rate;
    cout << "\n\t\tPlease enter the Time (years): ";
    cin >> time;


    //Display the Simple Interest
    cout << "\n\n\t\t**********************\t\tDisplay Result\t\t**********************\t\t" << endl;
    simpleInterest = principal * (rate/100) * time;
    cout << "\n\t\tThe Simple interest for the Principle amount of $" << principal << " at a Rate of " << rate << "% for " << time;
    cout << " years is $" << simpleInterest;
    cout << "\n\t\tSimple interest: $" << simpleInterest;
    cout << "\n\n\t\t___________________________________________________________________________________\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << endl;


}
