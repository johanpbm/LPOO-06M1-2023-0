/**
 * Clase Sale modela a una transacción de venta
 */
#pragma once
#include "Salesman.h"
#include "Customer.h"

using namespace System;

namespace SalesModel {
    public ref class Sale {
    public:
        property int Id;
        property String^ TxnDate;
        property char Status;
        property double Total;
        property Salesman^ Salesman;
        property Customer^ Customer;
    };
}