#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtProductId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtPriceMin;
	private: System::Windows::Forms::TextBox^ txtPriceMaj;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvProducts;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPriceMin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPriceMaj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductStock;
	private: System::Windows::Forms::Button^ btnSetImage;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtProductId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceMin = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceMaj = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->productId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPriceMin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPriceMaj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripci�n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(68, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio (min.)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Precio (may.)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Stock";
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(172, 54);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(100, 20);
			this->txtProductId->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(172, 81);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(222, 20);
			this->txtName->TabIndex = 7;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(172, 108);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(222, 54);
			this->txtDescription->TabIndex = 8;
			// 
			// txtPriceMin
			// 
			this->txtPriceMin->Location = System::Drawing::Point(172, 169);
			this->txtPriceMin->Name = L"txtPriceMin";
			this->txtPriceMin->Size = System::Drawing::Size(100, 20);
			this->txtPriceMin->TabIndex = 9;
			// 
			// txtPriceMaj
			// 
			this->txtPriceMaj->Location = System::Drawing::Point(172, 195);
			this->txtPriceMaj->Name = L"txtPriceMaj";
			this->txtPriceMaj->Size = System::Drawing::Size(100, 20);
			this->txtPriceMaj->TabIndex = 10;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(172, 221);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 20);
			this->txtStock->TabIndex = 11;
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(427, 54);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(203, 172);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 12;
			this->pbPhoto->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(71, 266);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(148, 23);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(256, 266);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(156, 23);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(449, 266);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(140, 23);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->productId,
					this->productName, this->productPriceMin, this->productPriceMaj, this->ProductStock
			});
			this->dgvProducts->Location = System::Drawing::Point(32, 312);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(617, 219);
			this->dgvProducts->TabIndex = 16;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProducts_CellClick);
			// 
			// productId
			// 
			this->productId->HeaderText = L"Id";
			this->productId->Name = L"productId";
			this->productId->Width = 50;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Nombre";
			this->productName->Name = L"productName";
			this->productName->Width = 300;
			// 
			// productPriceMin
			// 
			this->productPriceMin->HeaderText = L"Precio Unit. (min.)";
			this->productPriceMin->Name = L"productPriceMin";
			this->productPriceMin->Width = 70;
			// 
			// productPriceMaj
			// 
			this->productPriceMaj->HeaderText = L"Precio Unit (may.)";
			this->productPriceMaj->Name = L"productPriceMaj";
			this->productPriceMaj->Width = 70;
			// 
			// ProductStock
			// 
			this->ProductStock->HeaderText = L"Stock";
			this->ProductStock->Name = L"ProductStock";
			this->ProductStock->Width = 70;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(449, 232);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(159, 23);
			this->btnSetImage->TabIndex = 17;
			this->btnSetImage->Text = L"Establecer imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &ProductForm::btnSetImage_Click);
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 543);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPriceMaj);
			this->Controls->Add(this->txtPriceMin);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtProductId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Product^ product = gcnew Product();
		product->setId(Convert::ToInt32(txtProductId->Text));
		product->Name = txtName->Text;
		product->Description = txtDescription->Text;
		product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
		product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
		product->Stock = Convert::ToInt32(txtStock->Text);
		product->Status = 'A';
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			product->Photo = ms->ToArray();
		}

		Controller::AddProduct(product);

		CleanControls();
		ShowProducts();
	}
	
	void ShowProducts() {
		List<Product^>^ myProductList = Controller::QueryAllProducts();
		
		dgvProducts->Rows->Clear();
		for (int i = 0; i < myProductList->Count; i++) {
			dgvProducts->Rows->Add(gcnew array<String^>{
					"" + myProductList[i]->getId(),
					myProductList[i]->Name,
					"" + myProductList[i]->PriceMin,
					"" + myProductList[i]->PriceMaj,
					"" + myProductList[i]->Stock
			});
		}
	}

	void CleanControls() {
		txtProductId->Clear();
		txtName->Clear();
		txtDescription->Clear();
		txtPriceMin->Clear();
		txtPriceMaj->Clear();
		txtStock->Clear();
		pbPhoto->Image = nullptr;
	}

private: System::Void dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvProducts->SelectedCells[0]->RowIndex;
	int productId = Convert::ToInt32( dgvProducts->Rows[selectedRowIndex]->Cells[0]->Value->ToString() );
	Product^ p = Controller::QueryProductById(productId);
	txtProductId->Text = "" + p->getId();
	txtName->Text = p->Name;
	txtDescription->Text = p->Description;
	txtPriceMin->Text = "" +p->PriceMin;
	txtPriceMaj->Text = "" + p->PriceMaj;
	txtStock->Text = "" + p->Stock;
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}
}	

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ product = gcnew Product();
	product->setId(Convert::ToInt32(txtProductId->Text));
	product->Name = txtName->Text;
	product->Description = txtDescription->Text;
	product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
	product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
	product->Stock = Convert::ToInt32(txtStock->Text);
	product->Status = 'A';
	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		product->Photo = ms->ToArray();
	}

	Controller::UpdateProduct(product);
	CleanControls();
	ShowProducts();

}
private: System::Void btnSetImage_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}

}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtProductId->Text->Trim() == "") {
		MessageBox::Show("Debe seleccionar un producto");
		return;
	}
	Controller::DeleteProduct(Convert::ToInt32(txtProductId->Text->Trim()));
	CleanControls();
	ShowProducts();
}
};
}
