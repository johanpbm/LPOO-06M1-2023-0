/**
 * La clase Customer modela a un cliente a quien se realiza la venta.
 */
#pragma once
#include "Person.h"

using namespace System;

namespace SalesModel {
    public ref class Customer : public Person {
    public:
        property int CustomerPoints;
        Customer();
        Customer(int id, String^ name, String^ docNumber, String^ address, String^ phoneNumber, String^ email, int customerPoints);

    };
}