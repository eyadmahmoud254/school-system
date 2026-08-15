#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;

public:
    Person()
    {
        name = "No Name";
        age = -1;
        gender = "No gender";
        address = "No address";
        phoneNumber = "No phone";
        email = "No email";
        id = -1;
    }

    Person(string name, int age, string gender, string address, string phoneNumber, string email, int id)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->phoneNumber = phoneNumber;
        this->email = email;
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    void setId(int id)
    {
        this->id = id;
    }

    string getName() const
    {
        return name;
    }
    int getAge() const
    {
        return age;
    }
    string getGender() const
    {
        return gender;
    }
    string getAddress() const
    {
        return address;
    }
    string getPhoneNumber() const
    {
        return phoneNumber;
    }
    string getEmail() const
    {
        return email;
    }
    int getId() const
    {
        return id;
    }

    virtual void informations()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Gender: ";
        cin >> gender;

        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Phone Number: ";
        cin >> phoneNumber;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter ID: ";
        cin >> id;
    }

    virtual void print() const
    {
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Gender      : " << gender << endl;
        cout << "Address     : " << address << endl;
        cout << "Phone       : " << phoneNumber << endl;
        cout << "Email       : " << email << endl;
        cout << "ID          : " << id << endl;
    }

    virtual ~Person() {}
};

#endif // PERSON_H
