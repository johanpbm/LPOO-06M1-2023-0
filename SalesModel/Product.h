/**
 * La clase Product modela un producto que se gestiona en el sistema de ventas.
 */
#pragma once
using namespace System;

namespace SalesModel {
    public ref class Product {
    private:
        int id;
        void Activate();        

    public:
        //Métodos de acceso para id
        int getId() {
            return id;
        }
        void setId(int id) {
            this->id = id;
            //id = _id;
        }

        property String^ Name; //Esto equivale al getName y setName
        property String^ Description;
        property double PriceMin;
        property double PriceMaj;        
        property array <Byte>^ Photo;
        property char Status;
        property int Stock;

        void Deactivate();

    };
}