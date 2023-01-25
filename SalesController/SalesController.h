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
			static List<Product^>^ productList = gcnew List<Product^>(); // Variable de clase (global)

		public:
		// TODO: Agregue aquí los métodos de esta clase.
		//Métodod CRUD de Product (C:Create, R:Request, U:Update, D:Delete)
			static int AddProduct(Product^ product);
			static Product^ QueryProductById(int productId);
			static List<Product^>^ QueryAllProducts();
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(int productId);			
	};
}
