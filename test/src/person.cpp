#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
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

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }


    void informations()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin >> gender;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Phone: ";
        cin >> phoneNumber;
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter ID: ";
        cin >> id;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
    }
};

#endif // PERSON_H
