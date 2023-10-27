#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

namespace restaurante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de ingre_cliente
	/// </summary>
	public ref class ingre_cliente : public System::Windows::Forms::Form
	{
	public:
		ingre_cliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ingre_cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_reg;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txb_nombre;
	private: System::Windows::Forms::TextBox^ txb_telefono;
	private: System::Windows::Forms::TextBox^ txb_dpi;
	private: System::Windows::Forms::TextBox^ txb_apel;
	private: System::Windows::Forms::Button^ btn_guard;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ingre_cliente::typeid));
			this->btn_reg = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txb_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txb_telefono = (gcnew System::Windows::Forms::TextBox());
			this->txb_dpi = (gcnew System::Windows::Forms::TextBox());
			this->txb_apel = (gcnew System::Windows::Forms::TextBox());
			this->btn_guard = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_reg
			// 
			this->btn_reg->Location = System::Drawing::Point(404, 210);
			this->btn_reg->Name = L"btn_reg";
			this->btn_reg->Size = System::Drawing::Size(75, 31);
			this->btn_reg->TabIndex = 1;
			this->btn_reg->Text = L"Regresar";
			this->btn_reg->UseVisualStyleBackColor = true;
			this->btn_reg->Click += gcnew System::EventHandler(this, &ingre_cliente::btn_reg_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre del Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DPI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Numero de Telefono";
			// 
			// txb_nombre
			// 
			this->txb_nombre->Location = System::Drawing::Point(245, 35);
			this->txb_nombre->Name = L"txb_nombre";
			this->txb_nombre->Size = System::Drawing::Size(154, 22);
			this->txb_nombre->TabIndex = 6;
			// 
			// txb_telefono
			// 
			this->txb_telefono->Location = System::Drawing::Point(245, 119);
			this->txb_telefono->Name = L"txb_telefono";
			this->txb_telefono->Size = System::Drawing::Size(154, 22);
			this->txb_telefono->TabIndex = 7;
			// 
			// txb_dpi
			// 
			this->txb_dpi->Location = System::Drawing::Point(245, 91);
			this->txb_dpi->Name = L"txb_dpi";
			this->txb_dpi->Size = System::Drawing::Size(154, 22);
			this->txb_dpi->TabIndex = 8;
			// 
			// txb_apel
			// 
			this->txb_apel->Location = System::Drawing::Point(245, 63);
			this->txb_apel->Name = L"txb_apel";
			this->txb_apel->Size = System::Drawing::Size(154, 22);
			this->txb_apel->TabIndex = 9;
			// 
			// btn_guard
			// 
			this->btn_guard->Location = System::Drawing::Point(35, 159);
			this->btn_guard->Name = L"btn_guard";
			this->btn_guard->Size = System::Drawing::Size(119, 23);
			this->btn_guard->TabIndex = 10;
			this->btn_guard->Text = L"Guardar Datos";
			this->btn_guard->UseVisualStyleBackColor = true;
			this->btn_guard->Click += gcnew System::EventHandler(this, &ingre_cliente::btn_guard_Click);
			// 
			// ingre_cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 253);
			this->Controls->Add(this->btn_guard);
			this->Controls->Add(this->txb_apel);
			this->Controls->Add(this->txb_dpi);
			this->Controls->Add(this->txb_telefono);
			this->Controls->Add(this->txb_nombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_reg);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ingre_cliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ingresar Datos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_reg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_guard_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^ datos = gcnew StreamWriter("info.txt", "a+");

		datos->Write("\r\n");
		datos->Write(txb_nombre->Text); datos->Write(";");
		datos->Write(txb_apel->Text); datos->Write(";");
		datos->Write(txb_dpi->Text); datos->Write(";");
		datos->Write(txb_telefono->Text); datos->Write(";");
		datos->Close();

		MessageBox::Show("Datos guardados correctamente");

	}
};
}
