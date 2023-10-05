#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    string name;
    string studentClass;
    int rollno;
    double grade;
public:
    //constructor
    Student(const string &stuName, const string &stuClass, int roll, double marks): name(stuName),
    studentClass(stuClass), rollno(roll), grade(marks){}

    string calculateLetterGrade()
    {
        if(grade >= 90)
        {
            return "A";
        }
        else if(grade >= 80)
        {
            return "B";
        }
        else if(grade >= 70)
        {
            return "C";
        }
        else if(grade >= 60)
        {
            return "C-";
        }
        else{
            return "Will need to resit";
        }
    }
    void displayStudentInfo(){
        cout << "\nName: " <<  name << endl;
        cout << "Class: " <<  studentClass << endl;
        cout << "Roll number: " <<  rollno << endl;
        cout << "Grade: " <<  grade << endl;
        cout << "Letter grade: " <<  calculateLetterGrade() << endl;
    }
};
class MyClass{
public:
    int num1 = 8;
    int num2 = 7;
};

int main()
{
    string name;
    string sClass;
    int rollno;
    double marks;
    cout << "Student details: " << endl;
    cout << "Enter name: ";
    getline(cin, name);
    fflush(stdin);
    cout << "\nEnter class: ";
    getline(cin, sClass);
    fflush(stdin);
    cout << "\nEnter roll number: ";
    cin >> rollno;
    cout << "\nEnter marks (0-100): ";
    cin >> marks;
    Student stud1(name, sClass, rollno, marks); // student object
    stud1.displayStudentInfo();

//Pointer examples
    MyClass m;
    int *num1Pointer = &m.num1;
    int *num2Pointer = &m.num2;
    cout << &num1Pointer << endl;
    cout << &num2Pointer << endl;

    return 0;
}