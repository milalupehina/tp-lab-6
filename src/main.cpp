// Copyright 2021 by mila

#include <vector>
#include "Factory.h"

int main () {
    //
// создание штата сотрудников на основе файла
    vector<Employee*> staff = StaffFactory::makeStaff();

// присвоение отработанного времени
    for(Employee emp : staff) {
        emp -> setWorkTime(8);
    }

// расчет зарплаты
    for(Employee emp : staff) {
        emp -> calc();
    }

// вывод данных о зарплате
    for(Employee emp : staff) {
        emp -> printInfo();
    }
}


//```
/*
Написать демонстрационное приложение,
которое создает штат сотрудников
на основе данных из текстового файла
и рассчитывает им зарплату,
исходя из отработанного времени
и участия в проектах.
Информация о сотрудниках,
об отработанном времени
и заработной плате выводится
на экран в виде таблицы.*/


/*
Подготовить текстовый файл со списком сотрудников. Информация о каждом сотруднике должна включать:

- **id** - идентификационный номер.
- **name** - ФИО сотрудника.
- **position** - должность.
- **salary** - базовая ставка руб./час (если нужна).
- **project** - название проекта (если нужен).
 */


/*
 * //стрелка - наследование - указание на базовый класс
//ромб-указатель - агрегация - дополнение включение в указанный класс
//ромбик - выполняемого
//кружочки - методы

//пред. - приват и паблик - красное и зеленое

 */
