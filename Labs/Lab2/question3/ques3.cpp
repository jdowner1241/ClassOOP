#include <iostream>
#include <string>

/* Write a program that computes the size of a string.
You can get the length of a string object by using a size() function or a length() function.*/

using namespace std;

int main()
{
    //clear screen
    system("CLS");

    string enString;
    string enstring1;
    int stringlength;

    cout << "\t\t######################\t\tQuestion 3\t\t######################\t\t" << endl;
    cout << "\n\t\tThis App will output the length of a string. This include empty spaces." << endl;
    cout << "\n\t\tPlease enter string: ";
    getline(cin, enString);


    //calculates the length of the string. (requires string library)

    stringlength = enString.length();  // enString.size() can also be used.

    //Output the length of the string you entered.
    cout << "\n\n\t\tThe string you've entered has length of " << stringlength<< endl;


}
