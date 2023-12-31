#include <iostream>
#include <stdlib.h>

/*
Question 1
•	Declare an integer type variable name intNumber and assign it a value of 30.
•	Declare a float type variable name floatNumber and assign it a value of 30.78.
•	Declare a double type variable name doubleNumber and assign it a value of 45.1234.
•	Declare a bool type variable name boolean and assign it a value of true.
•	Declare a char type variable name charName and assign it a value of u.
•	Lastly, print the values of all declared variables.

Question 2
Write some code which will take your name, address and phone number as input from the terminal and print on the console.

Question 3
Create a program that prompts the user for a temperature
in degrees Fahrenheit, converts it to Celsius,and displays the result.
It should use integer variables. **(32°F − 32) × 5/9 = 0°C

Question 4
Create a program that prompts the user to type in a floating-point number
representing the radius of a circle. The program should then calculate and
display the circle’s area. **A = πr2. π = 3.14

*/

using namespace std;

void question1();
void question2();
void question3();
void question4();

int main()
{
    int selection;
    int keepRun = 1;

    cout << endl
         << "\t\t ***************************** Welcome ******************************* \t\t";
    cout << endl
         << "\t\t Please enter 1 to continue and 2 to exit: ";
    cin >> keepRun;

    while (keepRun != 2)
    {
        cout << endl
             << "\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Selection $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \t\t";
        cout << endl
             << "\t\t Select 1 to 4. Selection: ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            cout << "\t\t Question 1:" << endl;
            question1();
            break;
        case 2:
            cout << endl
                 << " \t\t Question 2:" << endl;
            question2();
            break;
        case 3:
            cout << endl
                 << " \t\t Question 3:" << endl;
            question3();
            break;
        case 4:
            cout << endl
                 << " \t\t Question 4:" << endl;
            question4();
            break;
        default:
            // clear screen
            system("CLS");
            cout << endl
                 << "\t\t Invalid selection" << endl;
            break;
        }

        cout << endl
             << "\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Selection $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \t\t";
        cout << endl
             << "\t\t Enter 2 to exit the program otherwise the program will continue: ";
        cin >> keepRun;
    }

    return 0;
}

void question1()
{
    // clear screen
    system("CLS");

    // Variable names
    int intNumber = 30;
    float floatNumber = 30.78;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'u';
    string stringName = "Jamario";

    // Display variable output
    cout << endl
         << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 1 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t";
    cout << "\n\t\t Value of Interger is " << intNumber << endl;
    cout << "\t\t Value of Float is " << floatNumber << endl;
    cout << "\t\t Value of Double is " << doubleNumber << endl;
    cout << "\t\t Value of Char is " << boolean << endl;
    cout << "\t\t Value of Bool is " << charName << endl;
    cout << "\t\t Value of String is " << stringName << endl;
    cout << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 1 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t" << endl;
    system("PAUSE");
}

void question2()
{
    // clear screen
    system("CLS");

    // Variable
    string name;
    string address;
    int phoneNum;

    // Get input
    cout << endl
         << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 2 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t";
    cout << "\n\t\t Enter Name: ";
    cin >> name;
    cout << "\t\t Enter Address: ";
    cin >> address; // getline(cin, address);
    cout << "\t\t Enter Phone number: ";
    cin >> phoneNum;

    // Display info
    cout << endl
         << "\t\t Name: " << name << endl;
    cout << "\t\t Address: " << address << endl;
    cout << "\t\t Phone: " << phoneNum << endl;
    cout << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 2 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t" << endl;
}

void question3()
{
    // clear screen
    system("CLS");

    // Variable
    int currentTemp = 0;
    int convertion = 0;

    // Get Temperature in degrees Fahrenheit
    cout << endl
         << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 3 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t";
    cout << "\n\t\t Enter Temperature (\370F): ";
    cin >> currentTemp;

    // Convert the temperature
    convertion = (currentTemp - 32) * 5 / 9; // variable converter
    cout << "\t\t Temperature in " << convertion << " \370C" << endl;
    cout << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 3 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t" << endl;
}

void question4()
{
    // clear screen
    system("CLS");

    // Variable
    float radius = 0;
    float pie = 3.14;
    float area;

    // Get Circle Radius
    cout << endl
         << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 4 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t";
    cout << "\n\t\t Enter the radius: ";
    cin >> radius;

    // Display the Area of the circle
    area = pie * (radius * radius);
    cout << endl
         << "\t\t Area of the Circle is : " << area << " Area Unit" << endl;
    cout << "\n\t\t %%%%%%%%%%%%%%%%%%%%%%%%%% Question 4 %%%%%%%%%%%%%%%%%%%%%%%%%%% \t\t" << endl;
}
