/**
 * La clase Salesman modela a un vendedor.
 * Salesman hereda de Employee, eso significa que un salesman es un tipo de
 * Employee del sistema.
 */
#pragma once
#include "Employee.h"

namespace SalesModel {
    public ref class Salesman : public Employee {
    public:
        property double Quota;
    };
}

