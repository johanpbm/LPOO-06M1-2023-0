#pragma once
/* Clase que modela el componente controlador que se encarga
* de gestionar los procesos del sistema.
*/
using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;

namespace SalesController {
	/*Clase Controller con las operaciones del negocio. */
	public ref class Controller
	{
		private:
			static List<Product^>^ productList = gcnew List<Product^>(); // Variable de clase (global) para la lista de productos
			static List <Customer^>^ customerList = gcnew List<Customer^>(); // Lista de clientes
			static List <Salesman^>^ salesmanList = gcnew List<Salesman^>(); // Lista de vendedores
			static List <StoreManager^>^ storeManagerList = gcnew List<StoreManager^>(); // Lista de gerentes de tienda
			static List <Supervisor^>^ supervisorList = gcnew List<Supervisor^>(); // Lista de supervisores de tienda
			static List <Sale^>^ salesList = gcnew List<Sale^>(); // Lista de ventas registradas
			static array<String^>^ storeArr = {"Camacho", "San Miguel"}; // Arreglo de tiendas como cadenas de texto.
			static List <String^>^ storeList = gcnew List<String^>(storeArr);
			static List <Sale^>^ saleList = gcnew List<Sale^>();

		public:
		// TODO: Agregue aquí los métodos de esta clase.
			//Métodos CRUD de Product (C:Create, R:Request, U:Update, D:Delete)
			static int AddProduct(Product^ product);
			static Product^ QueryProductById(int productId);
			static List<Product^>^ QueryAllProducts();
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(int productId);
			static List<Product^>^ QueryProductsByNameOrDescription(String^ nameDesc);

			//Métodos CRUD de Customer
			static int AddCustomer(Customer^);
			static int UpdateCustomer(Customer^);
			static int DeleteCustomer(int customerId);
			static List<Customer^>^ QueryAllCustomers();
			static List<Natural^>^ QueryAllNaturals();
			static List<Company^>^ QueryAllCompanies();
			static Customer^ QueryCustomerById(int customerId);
			static Customer^ QueryCustomerByDocNumber(String^ docNumber);

			//Métodos CRUD de Salesman
			static int AddSalesman(Salesman^);
			static int UpdateSalesman(Salesman^);
			static int DeleteSalesman(int salesmanId);
			static Salesman^ QuerySalesmanById(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();
			static List<String^>^ QueryAllStores();

			//Métodos CRUD de StoreManager
			static int AddStoreManager(StoreManager^);
			static int UpdateStoreManager(StoreManager^);
			static int DeleteStoreManager(int storeManagerId);
			static StoreManager^ QueryStoreManagerById(int storeManagerId);
			static List<StoreManager^>^ QueryAllStoreManagers();

			//Métodos CRUD de Supervisor
			static int AddSupervisor(Supervisor^);
			static int UpdateSupervisor(Supervisor^);
			static int DeleteSupervisor(int supervisorId);
			static Supervisor^ QuerySupervisorById(int supervisorId);
			static List<Supervisor^>^ QueryAllSupervisors();

			//Autenticación de usuario
			static Employee^ Login(String^ username, String^ password);

			//Operaciones de venta
			//
	};
}
