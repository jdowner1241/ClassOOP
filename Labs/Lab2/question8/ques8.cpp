#include <iostream>
#include <cmath>
#include <stdio.h>

/*Write a program to calculate the volume of a cube.*/

using namespace std;

int main()
{
    //clear screen
    system ("CLS");

    float tempvalue;
    float ctemp;
    float ftemp;
    int keeprun = 0;
    int keepchoice;
    int selection;


    cout << "\n\t\t######################\t\tQuestion 8\t\t######################\t\t" << endl;
    cout << "\n\t\tThis App will enter the temperature and allow you to convert it." << endl;

    //start loop
    while (keeprun != 2)
    {


        //Get the temp as a base value without an assigned temperature.
        cout << "\n\t\t**********************\t\tTemperature Entry\t\t**********************\t\t" << endl;
        cout << "\n\t\tPlease enter the base Temperature: ";
        cin >> tempvalue;
        cout << "\n\t\tPlease select a temperature type. Your selected value would be converted to the opposite type.\t\t" << endl;

        do {
            system("CLS");
            cout << "\n\n\t\t**********************\t\t Base Temperature \t\t**********************\t\t" << endl;
            cout << "\n\t\tCurrent Base Temperature value: " << tempvalue;
            cout << "\n\n\t\t**********************\t\tSelection\t\t**********************\t\t" << endl;
            cout << "\n\t\t1) Celsius to Fahrenheit ";
            cout << "\n\t\t2) Fahrenheit to Celsius ";
            cout << "\n\t\tSelection (1 or 2): ";
            cin >> selection;

            switch (selection)
            {
                case 1:
                        cout << "\n\n\t\t**********************\t\tCelsius to Fahrenheit\t\t**********************\t\t";
                        ctemp = (tempvalue * 9/5) + 32;
                        cout << "\n\t\tCesius: " << tempvalue << " to Fahrenheit: " << ctemp << " \370C";
                        cout << "\n\n\t\t___________________________________________________________________________________\t\t" << endl;
                        break;
                case 2:
                        cout << "\n\n\t\t**********************\t\tFahrenheit to Celsius\t\t**********************\t\t" << endl;
                        ftemp = (tempvalue - 32) * 5 / 9;;
                        cout << "\n\t\tFahrenheit: " << tempvalue << " to Celsius: " << ftemp << " \370C";
                        cout << "\n\n\t\t___________________________________________________________________________________\t\t" << endl;
                        break;
                default:
                        cout << "\n\n\t\tInvalid selection." << endl;
                        cout << "\n\n\t\t___________________________________________________________________________________\t\t" << endl;

            }
            cout << "\n\n\t\tCurrent Base Temperature value: " << tempvalue;
            cout << "\n\t\tWould you like to keep your base Temperature? ";
            cout << "\n\t\tChoice ( 1) Yes or 2) No ): ";
            cin >> keepchoice;
        } while (keepchoice != 2);


        system("CLS");
        cout << "\n\n\t\t___________________________________________________________________________________\t\t" << endl;
        cout << "\n\t\tEnter 2 to exit loop, otherwise any key to continue: ";
        cin >> keeprun;
        system("CLS");
    }

    cout << "\n\n\t\t######################\t\t   End    \t\t######################\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << endl;





}
