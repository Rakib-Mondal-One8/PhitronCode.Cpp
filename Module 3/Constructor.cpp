#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa) // constructor
    {
        // roll = r;
        // cls = c;
        // gpa = g;
        this->roll = roll; // This is a pointer;
        this->cls = cls;   // -> this arrow sign is de refferencing 'this';
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(29, 9, 5.01);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}