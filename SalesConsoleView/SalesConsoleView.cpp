#include "pch.h"

using namespace System;
using namespace SalesModel;
using namespace SalesController;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    Product^ product1 = gcnew Product();
    product1->setId(1);
    product1->Name = "Jábón Mongler";
    product1->Description = "Jabón familiar";
    product1->PriceMin = 4.5;
    product1->PriceMaj = 3.7;
    product1->Stock = 100;
    product1->Status = 'A';

    Controller::AddProduct(product1);

    Product^ product2 = gcnew Product();
    product2->setId(2);
    product2->Name = "Jábón Caimán";
    product2->Description = "Jabón oloroso";
    product2->PriceMin = 3.5;
    product2->PriceMaj = 3.0;
    product2->Stock = 120;
    product2->Status = 'A';

    Controller::AddProduct(product2);

    List<Product^>^ myProductList = Controller::QueryAllProducts();

    for (int i = 0; i < myProductList->Count; i++)
        Console::WriteLine( myProductList[i]->getId() + " - " +
                            myProductList[i]->Name + " - " +
                            myProductList[i]->PriceMin);

    Console::WriteLine("Gracias!");
    return 0;
}
