#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Teacher : public Person
{
private:
    string subject;
    double salary;

public:
    Teacher() : Person()
    {
        subject = "";
        salary = 0.0;
    }

    Teacher(string name, int age, string gender, string address, string phoneNumber, string email, int id, string subject, double salary)
        : Person(name, age, gender, address, phoneNumber, email, id)
    {
        this->subject = subject;
        this->salary = salary;
    }

    void setSubject(string subject)
    {
        this->subject = subject;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    string getSubject() const
    {
        return subject;
    }
    double getSalary() const
    {
        return salary;
    }

    void informations() override
    {
        Person::informations();

        cin.ignore();
        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void print() const override
    {
        Person::print();
        cout << "Subject     : " << subject << endl;
        cout << "Salary      : " << salary << endl;
    }
};

#endif // TEACHER_H
