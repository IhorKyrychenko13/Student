#include "Student.h"
#include "Airplane.h"
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student s("Андрій Шевченко", 93.5, "КНУ", "ФІ-31");
    s.showInfo();
    s.setName("Олег Бондар");
    s.setGrade(96.2);
    s.showInfo();
    Airplane a("PS101", "Київ", "Берлін", "Airbus A320", 150);
    a.showInfo();
    a.sellTicket(50);
    a.sellTicket(70);
    a.returnTicket(10);
    a.showInfo();

    return 0;
}