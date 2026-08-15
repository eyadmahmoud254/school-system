#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;

public:
    Course()
    {
        courseCode = "";
        courseName = "";
        teacherName = "";
    }

    Course(string courseCode, string courseName, string teacherName)
    {
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->teacherName = teacherName;
    }

    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }
    void setTeacherName(string teacherName)
    {
        this->teacherName = teacherName;
    }

    string getCourseCode() const
    {
        return courseCode;
    }
    string getCourseName() const
    {
        return courseName;
    }
    string getTeacherName() const
    {
        return teacherName;
    }

    void print() const
    {
        cout << "Course Code  : " << courseCode << endl;
        cout << "Course Name  : " << courseName << endl;
        cout << "Teacher Name : " << teacherName << endl;
    }

    void informations()
    {
        cin.ignore();
        cout << "Please Enter Course Code : ";
        getline(cin, courseCode);

        cout << "Please Enter Course Name : ";
        getline(cin, courseName);

        cout << "Please Enter Teacher Name : ";
        getline(cin, teacherName);
    }
};

#endif // COURSE_H
