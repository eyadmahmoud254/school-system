#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
using namespace std;

class Classroom
{
private:
    int roomNumber;
    int capacity;

public:
    Classroom()
    {
        this->roomNumber = -1;
        this->capacity = -1;
    }

    Classroom(int roomNumber, int capacity)
    {
        this->roomNumber = roomNumber;
        this->capacity = capacity;
    }

    void setRoomNumber(int roomNumber)
    {
        this->roomNumber = roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }

    int getRoomNumber() const
    {
        return roomNumber;
    }
    int getCapacity() const
    {
        return capacity;
    }

    void print() const
    {
        cout << "Room Number : " << roomNumber << endl;
        cout << "Capacity    : " << capacity << endl;
    }

    void informations()
    {
        cout << "Please enter the room number: ";
        cin >> roomNumber;
        cout << "Please enter its capacity: ";
        cin >> capacity;
    }
};

#endif // CLASSROOM_H
