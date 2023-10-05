#include <iostream>


using namespace std;

class Student
{
    private :
        string name;
        string studentClass;
        int rollno;
        double grade;

    public :
        //constructor
        Student (string studName, string stuClass, int roll, double marks){
            studName = name;
            stuClass = studentClass;
            roll = rollno;
            marks = grade;
        }

        Student(): name(""), studentClass(""), rollno(0), grade(0.0) {}

        string calculateLetterGrade()
        {
            if (grade >= 90)
            {
                return "A";
            }
            else if (grade >= 80)
            {
                return "B";
            }
            else if (grade >= 70)
            {
                return "C";
            }
            else if (grade >= 0)
            {
                return "C-";
            }
            else
            {
                return "Will need to resit";
            }
        }


    void displayStudentInfo(){
        cout << "\nName: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll number: " << rollno << endl;
        cout << "Letter grade: " << calculateLetterGrade() << endl;
    }

};

int main()
{

    string name;
    string sCIass;
    int rollno;
    double marks ;

    cout << "Student details: " << endl;
    cout << "Enter name :";
    getline (cin, name);
    fflush(stdin);

    cout << "\nEnter class: ";
    getline (cin, sCIass);
    fflush(stdin);

    cout << "\nEnter roll nurnber: ";
    cin >> rollno;

    cout << "\nEnter Marks (0-100): ";
    cin >> marks;

    Student studl(name, sCIass, rollno, marks); // student object

    return 0;

}
