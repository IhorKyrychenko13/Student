#pragma once
#include <iostream>
using namespace std;

class Airplane {
private:
    char flightNumber[10];
    char from[30];
    char to[30];
    char model[30];
    int totalSeats;
    int occupiedSeats;

public:
    Airplane(); 
    Airplane(const char* fNum, const char* dep, const char* dest, const char* mod, int total);
    void showInfo();

    bool sellTicket(int count);
    bool returnTicket(int count);

    const char* getFlightNumber();
    int getFreeSeats();
};