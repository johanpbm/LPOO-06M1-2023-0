/**
 * Clase Employee que modela a un empleado.
 */
#pragma once

#include "Person.h"

namespace  SalesModel {
    public ref class Employee : public Person {
    public:
        property String^ LastName;
        property double Salary;
        property String^ Store;
        property String^ Username;
        property String^ Password;
        property char Gender;
        property String^ Birthday;
    };
}