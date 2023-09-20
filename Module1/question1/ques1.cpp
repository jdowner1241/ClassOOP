#include <iostream>

/*Check Whether Number is Even or Odd using if else. To check whether an integer is even or odd,
the remainder is calculated when it is divided by 2 using modulus operator %. If remainder is zero, that integer is even if not that integer is odd.*/

using namespace std;

int main()
{
    // Clear screen.
    system("CLS");

    int enVal = 0;
    int reminder = 0;

    cout << "\t\t######################\t\tQuestion 1\t\t######################\t\t" << endl;
    cout << "\n\t\tThis App will confirm if the number you enter is even or odd." << endl;
    cout << "\n\t\tPlease enter number: ";
    cin >> enVal;

    reminder = enVal % 2;
    if (reminder == 0)
    {
        cout << "\t\t" << enVal << " is an even number." << endl;
    }
    else
    {
        cout << "\t\t" << enVal << " is an odd number." << endl;
    }
}
