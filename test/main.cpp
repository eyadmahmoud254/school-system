#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "School.h"
#include "Class room.h"

using namespace std;

int main()
{
    School sh;
    int x;

    do
    {
        cout << "press 0 To Exit" << endl;
        cout << "press 1 To Add Student" << endl;
        cout << "press 2 To Add Teacher" << endl;
        cout << "press 3 To Add Staff" << endl;
        cout << "press 4 To Add Course" << endl;
        cout << "press 5 To Add Class Room" << endl;
        cout << "press 6 To Print All Students" << endl;
        cout << "press 7 To Print All Teachers" << endl;
        cout << "press 8 To Print All Staffs" << endl;
        cout << "press 9 To Print All Courses" << endl;
        cout << "press 10 To Print All Class Rooms" << endl;
        cin>>x;
        system("cls");

        switch (x)
        {
        case 0:
            cout << "The Program End Bye Bye" << endl;
            break;

        case 1:
        {
            Student s;
            s.informations();
            sh.addStudent(s);
            break;
        }

        case 2:
        {
            Teacher t;
            t.informations();
            sh.addTeacher(t);
            break;
        }

        case 3:
        {
            Staff s;
            s.informations();
            sh.addStaff(s);
            break;
        }

        case 4:
        {
            Course c;
            c.informations();
            sh.addcourse(c);
            break;
        }

        case 5:
        {
            Classroom c;
            c.informations();
            sh.addClassRoom(c);
            break;
        }

        case 6:
            sh.printStudent();
            break;

        case 7:
            sh.printTeachers();
            break;

        case 8:
            sh.printStaff();
            break;

        case 9:
            sh.printCourses();
            break;

        case 10:
            sh.printClassRooms();
            break;

        default:
            cout << "Try Again Press Number from (0 - 10)" << endl;
            break;
        }

    }
    while (x != 0);

    return 0;
}
