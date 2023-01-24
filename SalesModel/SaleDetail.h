/**
 * Clase SaleDetail que modela a un detalle de una transacción de venta.
 */
#pragma once

#include "Product.h"

using namespace System;

namespace SalesModel {
    public ref class SaleDetail {
    public:
        property int Id;
        property int Quantity;
        property double SubTotal;
        property double UnitPrice;
        property Product^ Product;
    };

}