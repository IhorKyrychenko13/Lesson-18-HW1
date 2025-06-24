#include <iostream>
#include "employee.h"
#include <ctime>

int main() {
    Employee staff[5] = {
        {"Іваненко", 1960, "Інженер", 20000, "Вища"},
        {"Петренко", 1985, "Програміст", 30000, "Вища"},
        {"Сидоренко", 1959, "Бухгалтер", 25000, "Середня"},
        {"Ковальчук", 1990, "Менеджер", 22000, "Вища"},
        {"Гнатюк", 1961, "Юрист", 24000, "Вища"}
    };

    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;

    std::cout << "Працівники старші за 60 років:\n";
    for (const auto& emp : staff) {
        int age = currentYear - emp.birthYear;
        if (age > 60) {
            std::cout << emp.lastName << ", " << emp.birthYear << ", "
                << emp.position << ", " << emp.salary << ", " << emp.education << std::endl;
        }
    }
}