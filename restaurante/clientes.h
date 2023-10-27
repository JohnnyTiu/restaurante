#pragma once

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
			// clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
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
	};
}
