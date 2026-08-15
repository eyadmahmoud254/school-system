#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <string>

#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Class room.h"

using namespace std;

class School
{
private:
    string schoolName;
    string address;
    string principalName;

    Student students[1000];
    Teacher teachers[50];
    Staff staffMembers[50];
    Course courses[6];
    Classroom classrooms[50];

    int studentCounter = 0;
    int teacherCounter = 0;
    int staffCounter = 0;
    int coursesCounter = 0;
    int classroomCounter = 0;

public:
    School() {}

    void addStudent(const Student& stud)
    {
        if (studentCounter < 1000)
        {
            students[studentCounter] = stud;
            studentCounter++;
        }
        else
        {
            cout << "Cannot add more students (Limit reached)!" << endl;
        }
    }

    void addTeacher(const Teacher& t)
    {
        if (teacherCounter < 50)
        {
            teachers[teacherCounter] = t;
            teacherCounter++;
        }
        else
        {
            cout << "Cannot add more teachers (Limit reached)!" << endl;
        }
    }

    void addStaff(const Staff& s)
    {
        if (staffCounter < 50)
        {
            staffMembers[staffCounter] = s;
            staffCounter++;
        }
        else
        {
            cout << "Cannot add more staff (Limit reached)!" << endl;
        }
    }

    void addcourse(const Course& c)
    {
        if (coursesCounter < 6)
        {
            courses[coursesCounter] = c;
            coursesCounter++;
        }
        else
        {
            cout << "Cannot add more courses (Limit reached)!" << endl;
        }
    }

    void addClassRoom(const Classroom& c)
    {
        if (classroomCounter < 50)
        {
            classrooms[classroomCounter] = c;
            classroomCounter++;
        }
        else
        {
            cout << "Cannot add more classrooms (Limit reached)!" << endl;
        }
    }

    void printStudent() const
    {
        if (studentCounter == 0)
        {
            cout << "No students registered yet!" << endl;
            return;
        }
        for (int i = 0; i < studentCounter; i++)
        {
            students[i].print();
        }
    }

    void printTeachers() const
    {
        if (teacherCounter == 0)
        {
            cout << "No teachers registered yet!" << endl;
            return;
        }
        for (int i = 0; i < teacherCounter; i++)
        {
            teachers[i].print();
        }
    }

    void printStaff() const
    {
        if (staffCounter == 0)
        {
            cout << "No staff registered yet!" << endl;
            return;
        }
        for (int i = 0; i < staffCounter; i++)
        {
            staffMembers[i].print();
        }
    }

    void printCourses() const
    {
        if (coursesCounter == 0)
        {
            cout << "No courses registered yet!" << endl;
            return;
        }
        for (int i = 0; i < coursesCounter; i++)
        {
            courses[i].print();

        }
    }

    void printClassRooms() const
    {
        if (classroomCounter == 0)
        {
            cout << "No classrooms registered yet!" << endl;
            return;
        }
        for (int i = 0; i < classroomCounter; i++)
        {
            classrooms[i].print();

        }
    }
};

#endif // SCHOOL_H
