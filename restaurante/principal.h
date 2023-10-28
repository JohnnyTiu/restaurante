#pragma once
#include "clientes.h"
#include "pedidos.h"

namespace restaurante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de principal
	/// </summary>
	public ref class principal : public System::Windows::Forms::Form
	{
	public:
		principal(void)
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
		~principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_clientes;
	private: System::Windows::Forms::Button^ btn_pedidos;
	private: System::Windows::Forms::Label^ lb_titu;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(principal::typeid));
			this->btn_clientes = (gcnew System::Windows::Forms::Button());
			this->btn_pedidos = (gcnew System::Windows::Forms::Button());
			this->lb_titu = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_clientes
			// 
			this->btn_clientes->Location = System::Drawing::Point(46, 129);
			this->btn_clientes->Name = L"btn_clientes";
			this->btn_clientes->Size = System::Drawing::Size(75, 23);
			this->btn_clientes->TabIndex = 0;
			this->btn_clientes->Text = L"Clientes";
			this->btn_clientes->UseVisualStyleBackColor = true;
			this->btn_clientes->Click += gcnew System::EventHandler(this, &principal::btn_clientes_Click);
			// 
			// btn_pedidos
			// 
			this->btn_pedidos->Location = System::Drawing::Point(165, 129);
			this->btn_pedidos->Name = L"btn_pedidos";
			this->btn_pedidos->Size = System::Drawing::Size(75, 30);
			this->btn_pedidos->TabIndex = 1;
			this->btn_pedidos->Text = L"pedidos";
			this->btn_pedidos->UseVisualStyleBackColor = true;
			this->btn_pedidos->Click += gcnew System::EventHandler(this, &principal::btn_pedidos_Click);
			// 
			// lb_titu
			// 
			this->lb_titu->AutoSize = true;
			this->lb_titu->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_titu->Location = System::Drawing::Point(56, 33);
			this->lb_titu->Name = L"lb_titu";
			this->lb_titu->Size = System::Drawing::Size(166, 37);
			this->lb_titu->TabIndex = 2;
			this->lb_titu->Text = L"Bienvenidos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Los Pollos Hermanos";
			// 
			// principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lb_titu);
			this->Controls->Add(this->btn_pedidos);
			this->Controls->Add(this->btn_clientes);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"principal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"principal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_clientes_Click(System::Object^ sender, System::EventArgs^ e) {
		clientes^ frm = gcnew clientes();
		this->Visible = false;
		frm->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btn_pedidos_Click(System::Object^ sender, System::EventArgs^ e) {
		pedidos^ frm = gcnew pedidos();
		this->Visible = false;
		frm->ShowDialog();
		this->Visible = true;
	}
};
}
