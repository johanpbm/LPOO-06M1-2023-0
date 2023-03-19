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

List<Product^>^ SalesController::Controller::QueryProductsByNameOrDescription(String^ value)
{
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(value) || productList[i]->Description->Contains(value))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

int SalesController::Controller::AddCustomer(Customer^ customer)
{
    customer->Status = 'A';
    customerList->Add(customer);
    return 1;
}

int SalesController::Controller::UpdateCustomer(Customer^ customer)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customer->Id == customerList[i]->Id) {
            customer->Status = 'A';
            customerList[i] = customer;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteCustomer(int customerId)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customerId == customerList[i]->Id) {
            customerList[i]->Status = 'I';
            //customerList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<Customer^>^ SalesController::Controller::QueryAllCustomers() {
    List<Customer^>^ activeCustomerList = gcnew List<Customer^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A') {
            activeCustomerList->Add(customerList[i]);
        }
    }
    return activeCustomerList;
}

List<Natural^>^ SalesController::Controller::QueryAllNaturals()
{
    List<Natural^>^ activeNaturalList = gcnew List<Natural^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A' && customerList[i]->GetType() == Natural::typeid) {
            activeNaturalList->Add((Natural^)customerList[i]);
        }
    }
    return activeNaturalList;
}

List<Company^>^ SalesController::Controller::QueryAllCompanies()
{
    List<Company^>^ activeCompanyList = gcnew List<Company^>();
    for (int i = 0; i < customerList->Count; i++) {
        if (customerList[i]->Status == 'A' && customerList[i]->GetType() == Company::typeid) {
            activeCompanyList->Add((Company^)customerList[i]);
        }
    }
    return activeCompanyList;
}

Customer^ SalesController::Controller::QueryCustomerById(int customerId) {
    for (int i = 0; i < customerList->Count; i++)
        if (customerId == customerList[i]->Id) {
            return customerList[i];
        }
    return nullptr;
}

Customer^ SalesController::Controller::QueryCustomerByDocNumber(String^ docNumber)
{
    for (int i = 0; i < customerList->Count; i++)
        if (docNumber == customerList[i]->DocNumber) {
            return customerList[i];
        }
    return nullptr;
}

int SalesController::Controller::AddSalesman(Salesman^ salesman)
{
    salesman->Status = 'A';
    salesmanList->Add(salesman);
    return 1;
}

int SalesController::Controller::UpdateSalesman(Salesman^ salesman)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesman->Id == salesmanList[i]->Id) {
            salesman->Status = 'A';
            salesmanList[i] = salesman;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteSalesman(int salesmanId)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesmanId == salesmanList[i]->Id) {
            //salesmanList->RemoveAt(i);
            salesmanList[i]->Status = 'I';
            return 1;
        }
    return 0;
}

List<Salesman^>^ SalesController::Controller::QueryAllSalesmen()
{
    List<Salesman^>^ activeSalesmanList = gcnew List<Salesman^>();
    for (int i = 0; i < salesmanList->Count; i++) {
        if (salesmanList[i]->Status == 'A') {
            activeSalesmanList->Add(salesmanList[i]);
        }
    }
    return activeSalesmanList;
}

List<String^>^ SalesController::Controller::QueryAllStores()
{    
    return storeList;
}

Salesman^ SalesController::Controller::QuerySalesmanById(int salesmanId)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (salesmanId == salesmanList[i]->Id) {
            return salesmanList[i];
        }
    return nullptr;
}

int SalesController::Controller::AddStoreManager(StoreManager^ storeManager)
{
    storeManager->Status = 'A';
    storeManagerList->Add(storeManager);
    return 1;
}

int SalesController::Controller::UpdateStoreManager(StoreManager^ storeManager)
{
    for (int i = 0; i < storeManagerList->Count; i++)
        if (storeManager->Id == storeManagerList[i]->Id) {
            storeManager->Status = 'A';
            storeManagerList[i] = storeManager;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteStoreManager(int storeManagerId)
{
    for (int i = 0; i < storeManagerList->Count; i++)
        if (storeManagerId == storeManagerList[i]->Id) {
            storeManagerList[i]->Status = 'I';
            //storeManagerList->RemoveAt(i);
            return 1;
        }
    return 0;
}
//P
List<StoreManager^>^ SalesController::Controller::QueryAllStoreManagers()
{
    List<StoreManager^>^ activeStoreManagerList = gcnew List<StoreManager^>();
    for (int i = 0; i < storeManagerList->Count; i++) {
        if (storeManagerList[i]->Status == 'A') {
            activeStoreManagerList->Add(storeManagerList[i]);
        }
    }
    return activeStoreManagerList;
}

StoreManager^ SalesController::Controller::QueryStoreManagerById(int storeManagerId)
{
    for (int i = 0; i < storeManagerList->Count; i++)
        if (storeManagerId == storeManagerList[i]->Id) {
            return storeManagerList[i];
        }
    return nullptr;
}

int SalesController::Controller::AddSupervisor(Supervisor^ supervisor)
{
    supervisor->Status = 'A';
    supervisorList->Add(supervisor);
    return 1;
}

int SalesController::Controller::UpdateSupervisor(Supervisor^ supervisor)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisor->Id == supervisorList[i]->Id) {
            supervisor->Status = 'A';
            supervisorList[i] = supervisor;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteSupervisor(int supervisorId)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisorId == supervisorList[i]->Id) {
            supervisorList[i]->Status = 'I';
            //supervisorList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<Supervisor^>^ SalesController::Controller::QueryAllSupervisors()
{
    List<Supervisor^>^ activeSupervisorList = gcnew List<Supervisor^>();
    for (int i = 0; i < supervisorList->Count; i++) {
        if (supervisorList[i]->Status == 'A') {
            activeSupervisorList->Add(supervisorList[i]);
        }
    }
    return activeSupervisorList;
}

Supervisor^ SalesController::Controller::QuerySupervisorById(int supervisorId)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisorId == supervisorList[i]->Id) {
            return supervisorList[i];
        }
    return nullptr;
}

Employee^ SalesController::Controller::Login(String^ username, String^ password)
{
    Employee^ employee;
    if (username == "jbaldeon" && password == "password") {
        employee = gcnew Employee();
        employee->Id = 1;
        employee->Name = "Johan";
        employee->LastName = "Balde�n";
        employee->Email = "johan.baldeon@pucp.edu.pe";
        employee->Address = "Elm Street 666";
        employee->DocNumber = "66666666";
        employee->PhoneNumber = "999999999";
        employee->Salary = 4500;
        employee->Username = "jbaldeon";
    }
    return employee;
}