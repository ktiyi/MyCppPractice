// Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of the Student class.
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
public:
    Student(string s)
    {
        name = s;
    }
    Student()
    {
        name = "Unknown";
    }
    void print_name()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("Jhon");
    Student s2;
    s1.print_name();
    s2.print_name();
    return 0;
}  
