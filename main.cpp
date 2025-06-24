#include <iostream>
#include "employee.h"
#include <ctime>

int main() {
    Employee staff[5] = {
        {"��������", 1960, "�������", 20000, "����"},
        {"��������", 1985, "���������", 30000, "����"},
        {"���������", 1959, "���������", 25000, "�������"},
        {"���������", 1990, "��������", 22000, "����"},
        {"������", 1961, "�����", 24000, "����"}
    };

    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;

    std::cout << "���������� ������ �� 60 ����:\n";
    for (const auto& emp : staff) {
        int age = currentYear - emp.birthYear;
        if (age > 60) {
            std::cout << emp.lastName << ", " << emp.birthYear << ", "
                << emp.position << ", " << emp.salary << ", " << emp.education << std::endl;
        }
    }
}