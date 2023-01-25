#include "pch.h"

#include "SalesController.h"

int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    return product->getId();
}

Product^ SalesController::Controller::QueryProductById(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->getId() == productId)
            return productList[i];
    return nullptr;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    return productList;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->getId() == product->getId()) {
            productList[i] = product;
            return product->getId();
        }            

    return 0;
}

int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->getId() == productId) {
            productList->RemoveAt(i);
            return productId;
        }
    return 0;
}
