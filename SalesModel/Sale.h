/**
 * Clase Sale modela a una transacci�n de venta
 */
#pragma once
#include "Salesman.h"
#include "Customer.h"
#include "SaleDetail.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    public ref class Sale {
    public:
        property int Id;
        property String^ TxnDate;
        property char Status;
        property double Total;
        property Salesman^ Salesman;
        property Customer^ Customer;
        property List<SaleDetail^>^ SaleDetails;

        Sale() {
            SaleDetails = gcnew List<SaleDetail^>();
        }
    };
}