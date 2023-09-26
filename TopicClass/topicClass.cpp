#include <iostream>
#include <string>


using namespace std;

class Shape{
private:
    int length;
    int width;

public:
    //Function: Contructor (only be defined in a class). Dont have to be called but triggered directly with the class.
    //Parameterized Contructor if it has propertices
    Shape(int l, int w){
        length = l;
        width = w;
    }

    /*Define a constructor to set length >= 10. if not then set to 0
    and display message else set length to the value;*/
    Shape(int len){
        if (len >= 10){
            length = len;
        }else{
            length = 0;
            cout << "Invalid value entered (must be 10 or more) "<< endl;
        }
    }

    Shape(){}// Default constructor



    //Normal Function. This would be like setter or getters. But they would need to manually be called in main.
    void setLength(int n){
        length = n;
    }

    void setWidth(int n){
        width = n;
    }

    int getLength(){
        return length;
    }

    int getWidth(){
        return width;
    }

    int area (){
        return length*width;
    }
};


int main()
{
    Shape rectangle; // Instrantiate object and constructor values
    Shape rectangle2 (12, 10);
    Shape rectangle3 (8);

    int length, width;

    cout << "\nEnter the Length: ";
    cin >> length;

    cout << "\nEnter the Width: ";
    cin >> width;

    rectangle.setLength(length);
    rectangle.setWidth(width);

    //rectangle
    cout << "\nThe Length " << rectangle.getLength() << endl;
    cout << "The Width " << rectangle.getWidth() << endl;
    cout << "The area " << rectangle.area() << endl;

    //rectangle2
    cout << "\n\nThe Length " << rectangle2.getLength() << endl;
    cout << "The Width " << rectangle2.getWidth() << endl;
    cout << "The area " << rectangle2.area() << endl;

    //rectangle3
    cout << "\n\nThe Length " << rectangle3.getLength() << endl;
    cout << "The Width " << rectangle3.getWidth() << endl;
    cout << "The area " << rectangle3.area() << endl;

}
