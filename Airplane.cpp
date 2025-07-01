#include "Airplane.h"
#include <cstring>

Airplane::Airplane() {
    strcpy_s(flightNumber, "000");
    strcpy_s(from, "Nowhere");
    strcpy_s(to, "Nowhere");
    strcpy_s(model, "Unknown");
    totalSeats = 100;
    occupiedSeats = 0;
}

Airplane::Airplane(const char* fNum, const char* dep, const char* dest, const char* mod, int total) {
    strcpy_s(flightNumber, fNum);
    strcpy_s(from, dep);
    strcpy_s(to, dest);
    strcpy_s(model, mod);
    totalSeats = total;
    occupiedSeats = 0;
}

void Airplane::showInfo() {
    cout << "\n===== Літак =====\n";
    cout << "Рейс: " << flightNumber << " (" << from << " → " << to << ")\n";
    cout << "Модель: " << model << "\n";
    cout << "Місць всього: " << totalSeats << ", Зайнято: " << occupiedSeats << "\n";
    cout << "Вільно: " << getFreeSeats() << "\n";
    cout << "==================\n";
}

bool Airplane::sellTicket(int count) {
    if (occupiedSeats + count <= totalSeats) {
        occupiedSeats += count;
        return true;
    }
    return false;
}

bool Airplane::returnTicket(int count) {
    if (occupiedSeats >= count) {
        occupiedSeats -= count;
        return true;
    }
    return false;
}

const char* Airplane::getFlightNumber() {
    return flightNumber;
}

int Airplane::getFreeSeats() {
    return totalSeats - occupiedSeats;
}