#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
private:
    string gradeLevel;
    float gpa;
    string subject;

public:
    Student() : Person()
    {
        gradeLevel = "";
        gpa = 0.0f;
        subject = "";
    }

    Student(string name, int age, string gender, string address, string phoneNumber, string email, int id, string gradeLevel, float gpa, string subject)
        : Person(name, age, gender, address, phoneNumber, email, id)
    {
        this->gradeLevel = gradeLevel;
        this->gpa = gpa;
        this->subject = subject;
    }

    void setSubject(string subject)
    {
        this->subject = subject;
    }
    string getSubject() const
    {
        return subject;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel = gradeLevel;
    }
    void setGPA(float gpa)
    {
        this->gpa = gpa;
    }
    string getGradeLevel() const
    {
        return gradeLevel;
    }
    float getGPA() const
    {
        return gpa;
    }

    void print() const override
    {
        Person::print();
        cout << "Grade Level : " << gradeLevel << endl;
        cout << "GPA         : " << gpa << endl;
        cout << "Subject     : " << subject << endl;
    }

    void informations() override
    {
        Person::informations();

        cin.ignore();
        cout << "Please Enter Your Grade Level : ";
        getline(cin, gradeLevel);

        cout << "Please Enter Your GPA : ";
        cin >> gpa;

        cin.ignore();
        cout << "Please Enter Subject : ";
        getline(cin, subject);
    }
};

#endif // STUDENT_H
