#include <iostream>
#include <cmath>
#include <stdio.h>

/*Write a program to calculate the volume of a cube.*/

using namespace std;

int main()
{
    //clear screen
    system ("CLS");

    int lSide;
    int sSide;
    float area;
    float perimeter;

    cout << "\n\t\t######################\t\tQuestion 7\t\t######################\t\t" << endl;
    cout << "\n\t\tThis App will enter the length in meters for both the large and short side of a rectangle. Then output the Area and Perimeter." << endl;

    //Get the length of each side
    cout << "\n\t\t**********************\t\tLength Entry\t\t**********************\t\t" << endl;
    cout << "\n\t\tPlease enter the length of the large side (m): ";
    cin >> lSide;
    cout << "\n\t\tPlease enter the length of the short side (m): ";
    cin >> sSide;
    cout << "\n\t\t___________________________________________________________________________________\t\t" << endl;

    //Display the Area and Perimeter.
    cout << "\n\n\t\t**********************\t\tDisplayed Area and Perimeter\t\t**********************\t\t" << endl;
    area = lSide * sSide;
    perimeter = (lSide * 2) + (sSide*2);
    cout << "\n\t\tThe area of the Rectangle is " << area << " m"<< (char)253 << endl;
    cout << "\n\t\tThe Perimeter of the Rectangle is " << perimeter << " m" << endl;
    cout << "\n\n\t\t___________________________________________________________________________________\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << endl;



}
