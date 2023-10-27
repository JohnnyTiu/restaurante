#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

namespace restaurante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de datos_cliente
	/// </summary>
	public ref class datos_cliente : public System::Windows::Forms::Form
	{
	public:
		datos_cliente(void)
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
		~datos_cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ list_datos;
	protected:

	protected:
	private: System::Windows::Forms::ColumnHeader^ nombre;
	private: System::Windows::Forms::ColumnHeader^ apellido;
	private: System::Windows::Forms::ColumnHeader^ dpi;
	private: System::Windows::Forms::ColumnHeader^ telefono;
	private: System::Windows::Forms::Button^ btn_reg;
	private: System::Windows::Forms::Button^ btn_mstr;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(datos_cliente::typeid));
			this->list_datos = (gcnew System::Windows::Forms::ListView());
			this->nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->apellido = (gcnew System::Windows::Forms::ColumnHeader());
			this->dpi = (gcnew System::Windows::Forms::ColumnHeader());
			this->telefono = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_reg = (gcnew System::Windows::Forms::Button());
			this->btn_mstr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// list_datos
			// 
			this->list_datos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->nombre, this->apellido,
					this->dpi, this->telefono
			});
			this->list_datos->HideSelection = false;
			this->list_datos->Location = System::Drawing::Point(50, 48);
			this->list_datos->Name = L"list_datos";
			this->list_datos->Size = System::Drawing::Size(578, 198);
			this->list_datos->TabIndex = 0;
			this->list_datos->UseCompatibleStateImageBehavior = false;
			this->list_datos->View = System::Windows::Forms::View::Details;
			// 
			// nombre
			// 
			this->nombre->Text = L"Nombre";
			this->nombre->Width = 135;
			// 
			// apellido
			// 
			this->apellido->Text = L"Apellido";
			this->apellido->Width = 105;
			// 
			// dpi
			// 
			this->dpi->Text = L"DPI";
			this->dpi->Width = 114;
			// 
			// telefono
			// 
			this->telefono->Text = L"Telefono";
			this->telefono->Width = 133;
			// 
			// btn_reg
			// 
			this->btn_reg->Location = System::Drawing::Point(571, 328);
			this->btn_reg->Name = L"btn_reg";
			this->btn_reg->Size = System::Drawing::Size(75, 31);
			this->btn_reg->TabIndex = 1;
			this->btn_reg->Text = L"Regresar";
			this->btn_reg->UseVisualStyleBackColor = true;
			this->btn_reg->Click += gcnew System::EventHandler(this, &datos_cliente::btn_reg_Click);
			// 
			// btn_mstr
			// 
			this->btn_mstr->Location = System::Drawing::Point(50, 261);
			this->btn_mstr->Name = L"btn_mstr";
			this->btn_mstr->Size = System::Drawing::Size(119, 23);
			this->btn_mstr->TabIndex = 11;
			this->btn_mstr->Text = L"Mostrar Datos";
			this->btn_mstr->UseVisualStyleBackColor = true;
			this->btn_mstr->Click += gcnew System::EventHandler(this, &datos_cliente::btn_mstr_Click);
			// 
			// datos_cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 371);
			this->Controls->Add(this->btn_mstr);
			this->Controls->Add(this->btn_reg);
			this->Controls->Add(this->list_datos);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"datos_cliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &datos_cliente::datos_cliente_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void datos_cliente_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_reg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_mstr_Click(System::Object^ sender, System::EventArgs^ e) {
		char mystring[100];
		FILE* fe;
		fe = fopen("info.txt", "r");

		char cadena[50], * dato1, * dato2, * dato3, * dato4;
		rewind(fe);
		list_datos->Items->Clear();
		bool found = false;
		do
		{
			fgets(mystring, 100, fe);
			dato1 = strtok(mystring, ";");
			dato2 = strtok(NULL, ";");
			dato3 = strtok(NULL, ";");
			dato4 = strtok(NULL, ";");
			String^ srtNew1 = gcnew String(dato1);
			String^ srtNew2 = gcnew String(dato2);
			String^ srtNew3 = gcnew String(dato3);
			String^ srtNew4 = gcnew String(dato4);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			this->list_datos->Items->Add(listView1);
		} while (feof(fe) == 0);
	}
};
}
