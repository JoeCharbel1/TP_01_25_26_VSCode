#include <iostream>
#include <string>
using namespace std;
typedef struct
{
    string name;
    int ID;
    double grade;
}student;

void UpdateGrade(student& A, double grade)
{
    A.grade=grade;
}

int main_e1(){
    student students[3]={ {"Alice", 20, 88.5},{"Bob", 22, 92.0},{"Charlie",19 ,85.0}};
    cout<<"Alice Grade is "<<students[0].grade<<endl;
    cout<<"Bob Grade is "<<students[1].grade<<endl;
    cout<<"Charlie Grade is "<<students[2].grade<<endl;
    UpdateGrade(students[0], 95);
    cout<<"Alice Grade after update is "<<students[0].grade<<endl;
    UpdateGrade(students[1], 80);
    cout<<"Bob Grade after update is "<<students[1].grade<<endl;
    UpdateGrade(students[2], 98);
    cout<<"Charlie Grade after update is"<<students[2].grade<<endl;
    return 0;
}