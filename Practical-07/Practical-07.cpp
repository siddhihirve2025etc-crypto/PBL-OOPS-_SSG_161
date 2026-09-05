#include <iostream>
using namespace std;
class Student
{
    int r;
    float m;
public:
    void accept(int r, float m)
    {
        cin >> r >> m;
    }
    void display()
    {
        cout << r << "\t" << m << endl;
    }
    Student()
    {
        r = 3;
        m = 98.2;
    }
    Student(int roll, float mks)
    {
        r = roll;
        m = mks;
    }
    Student(Student &s)
    {
        r = s.r;
        m = s.m;
    }
};
int main()
{
    Student s1(25, 78.3);
    Student s2(s1);
    Student s3(88, 59.6);
    cout << "\nRoll No\tMarks\n";
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
