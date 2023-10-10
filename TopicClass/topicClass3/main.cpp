#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rect;
    rect.set_values(3, 4);
    cout << "Area: " << rect.area();

    return 0;
}