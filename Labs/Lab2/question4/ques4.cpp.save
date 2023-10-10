#include <iostream>
#include <string>
//fflush(FILE *ostream);


/* Write a program to store and display Student information using a structure for Student and an array to store the student record.
This structure has three members: name (string), roll (integer) and marks (float).
Using for loop, the program should accept the information of 5 students from the user and displays it on the screen.*/

using namespace std;

typedef struct
{
    string sname;
    int sroll;
    float saverage;

}student;

int main()
{
    //clear screen
    system("CLS");

    student Student[5];
    int arraylength = sizeof(Student)/sizeof(student);



    cout << "\t\t######################\t\tQuestion 4\t\t######################\t\t" << endl;
    cout << "\n\t\tThis App will get the student information and then output that information." << endl;

    //Get Student info
    cout << "\n\n\t\t*****************\t\tGet Student Info\t\t*****************\t\t" << endl;
    for (int i = 0; i < arraylength; i++)
    {
        cout << "\n\t\t*****************\t\t Student "<< i + 1 <<" Entry\t\t*****************\t\t" << endl;
        cout << "\n\t\tPlease enter Student Name: ";
        getline(cin, Student[i].sname);
        cout << "\n\t\tPlease enter Student Grade: ";
        cin >> Student[i].sroll;
        cout << "\n\t\tPlease enter Student Semester Average: ";
        cin >> Student[i].saverage;
        cout << "\n\t\t\t_______________________________________________________________\t\t\t";
        cout << endl;
        fflush(stdin);
    }

    //clear screen
    system("CLS");

    //Display Student info
    cout << "\t\t*****************\t\tDisplay Student Info\t\t*****************\t\t" << endl;
     for (int j = 0; j < arraylength; j++)
    {
        cout << "\n\t\t*******\t\tDisplay Student "<< j + 1 <<" Info\t\t********\t\t" << endl;
        cout << "\n\t\tStudent Name "<< j + 1 << " : " << Student[j].sname;
        cout << "\n\t\tStudent Grade "<< j + 1 << " : " << Student[j].sroll;
        cout << "\n\t\tStudent Semester Average "<< j + 1 << " : " << Student[j].saverage;
        cout << "\n\n\t\t\t_______________________________________________________________\t\t\t";
        cout << endl;
        cout << endl;
        cout << endl;
    }

}
