#pragma once
#include "ingre_cliente.h"
#include "datos_cliente.h"

namespace restaurante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de clientes
	/// </summary>
	public ref class clientes : public System::Windows::Forms::Form
	{
	public:
		clientes(void)
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
		~clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_reg;
	private: System::Windows::Forms::Button^ btn_ingclien;
	private: System::Windows::Forms::Button^ btn_mstrdts;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(clientes::typeid));
			this->btn_reg = (gcnew System::Windows::Forms::Button());
			this->btn_ingclien = (gcnew System::Windows::Forms::Button());
			this->btn_mstrdts = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_reg
			// 
			this->btn_reg->Location = System::Drawing::Point(195, 210);
			this->btn_reg->Name = L"btn_reg";
			this->btn_reg->Size = System::Drawing::Size(75, 31);
			this->btn_reg->TabIndex = 0;
			this->btn_reg->Text = L"Regresar";
			this->btn_reg->UseVisualStyleBackColor = true;
			this->btn_reg->Click += gcnew System::EventHandler(this, &clientes::btn_reg_Click);
			// 
			// btn_ingclien
			// 
			this->btn_ingclien->Location = System::Drawing::Point(48, 48);
			this->btn_ingclien->Name = L"btn_ingclien";
			this->btn_ingclien->Size = System::Drawing::Size(169, 31);
			this->btn_ingclien->TabIndex = 1;
			this->btn_ingclien->Text = L"Ingresa datos del cliente";
			this->btn_ingclien->UseVisualStyleBackColor = true;
			this->btn_ingclien->Click += gcnew System::EventHandler(this, &clientes::btn_ingclien_Click);
			// 
			// btn_mstrdts
			// 
			this->btn_mstrdts->Location = System::Drawing::Point(48, 109);
			this->btn_mstrdts->Name = L"btn_mstrdts";
			this->btn_mstrdts->Size = System::Drawing::Size(169, 23);
			this->btn_mstrdts->TabIndex = 2;
			this->btn_mstrdts->Text = L"Consultar Datos";
			this->btn_mstrdts->UseVisualStyleBackColor = true;
			this->btn_mstrdts->Click += gcnew System::EventHandler(this, &clientes::btn_mstrdts_Click);
			// 
			// clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->btn_mstrdts);
			this->Controls->Add(this->btn_ingclien);
			this->Controls->Add(this->btn_reg);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"clientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clientes";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_reg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_ingclien_Click(System::Object^ sender, System::EventArgs^ e) {
		ingre_cliente^ frm = gcnew ingre_cliente();
		this->Visible = false;
		frm->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btn_mstrdts_Click(System::Object^ sender, System::EventArgs^ e) {
		datos_cliente^ frm = gcnew datos_cliente();
		this->Visible = false;
		frm->ShowDialog();
		this->Visible = true;
	}
};
}
