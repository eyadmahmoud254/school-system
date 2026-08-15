#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Staff : public Person
{
private:
    string role;
    float salary;

public:
    Staff() : Person()
    {
        role = "";
        salary = 0.0f;
    }

    Staff(string name, int age, string gender, string address, string phoneNumber, string email, int id, string role, float salary)
        : Person(name, age, gender, address, phoneNumber, email, id)
    {
        this->role = role;
        this->salary = salary;
    }

    void setRole(string role)
    {
        this->role = role;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    string getRole() const
    {
        return role;
    }
    float getSalary() const
    {
        return salary;
    }

    void informations() override
    {
        Person::informations();

        cout << "Enter Salary: ";
        cin >> salary;

        cin.ignore();
        cout << "Enter Role: ";
        getline(cin, role);
    }

    void print() const override
    {
        Person::print();
        cout << "Salary      : " << salary << endl;
        cout << "Role        : " << role << endl;
    }
};

#endif // STAFF_H
