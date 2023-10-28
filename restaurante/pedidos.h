#pragma once

namespace restaurante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de pedidos
	/// </summary>
	public ref class pedidos : public System::Windows::Forms::Form
	{
	public:
		pedidos(void)
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
		~pedidos()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txb_op;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txb_cant;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txb_sino;
	private: System::Windows::Forms::TextBox^ txb_total;
	private: System::Windows::Forms::Label^ lb_total;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btn_tot;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(pedidos::typeid));
			this->btn_reg = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txb_op = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txb_cant = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txb_sino = (gcnew System::Windows::Forms::TextBox());
			this->txb_total = (gcnew System::Windows::Forms::TextBox());
			this->lb_total = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btn_tot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_reg
			// 
			this->btn_reg->Location = System::Drawing::Point(607, 511);
			this->btn_reg->Name = L"btn_reg";
			this->btn_reg->Size = System::Drawing::Size(75, 27);
			this->btn_reg->TabIndex = 1;
			this->btn_reg->Text = L"Regresar";
			this->btn_reg->UseVisualStyleBackColor = true;
			this->btn_reg->Click += gcnew System::EventHandler(this, &pedidos::btn_reg_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Menú";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 284);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(512, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"5. Helado de fresa/vainilla-----------------------Q.6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(521, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"4. Hamburguesa con bebida--------------------Q.22";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(516, 26);
			this->label4->TabIndex = 5;
			this->label4->Text = L"3. Hamburguesa con papas---------------------Q.18";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(520, 26);
			this->label5->TabIndex = 6;
			this->label5->Text = L"2. Hamurguesa doble-----------------------------Q.20";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(521, 26);
			this->label6->TabIndex = 7;
			this->label6->Text = L"1. Hamburguesa simple--------------------------Q.14";
			// 
			// txb_op
			// 
			this->txb_op->Location = System::Drawing::Point(174, 382);
			this->txb_op->Name = L"txb_op";
			this->txb_op->Size = System::Drawing::Size(100, 22);
			this->txb_op->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 26);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Opcion";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 419);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 26);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Cantidad";
			// 
			// txb_cant
			// 
			this->txb_cant->Location = System::Drawing::Point(174, 424);
			this->txb_cant->Name = L"txb_cant";
			this->txb_cant->Size = System::Drawing::Size(100, 22);
			this->txb_cant->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(14, 487);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(343, 26);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Seguir pidiendo (Si = 1/No = 0)";
			this->label9->Visible = false;
			// 
			// txb_sino
			// 
			this->txb_sino->Location = System::Drawing::Point(433, 492);
			this->txb_sino->Name = L"txb_sino";
			this->txb_sino->Size = System::Drawing::Size(100, 22);
			this->txb_sino->TabIndex = 12;
			this->txb_sino->Visible = false;
			// 
			// txb_total
			// 
			this->txb_total->Location = System::Drawing::Point(457, 392);
			this->txb_total->Name = L"txb_total";
			this->txb_total->Size = System::Drawing::Size(100, 22);
			this->txb_total->TabIndex = 14;
			this->txb_total->Visible = false;
			// 
			// lb_total
			// 
			this->lb_total->AutoSize = true;
			this->lb_total->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_total->Location = System::Drawing::Point(376, 392);
			this->lb_total->Name = L"lb_total";
			this->lb_total->Size = System::Drawing::Size(64, 26);
			this->lb_total->TabIndex = 15;
			this->lb_total->Text = L"Total";
			this->lb_total->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(430, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(158, 38);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Precios";
			// 
			// btn_tot
			// 
			this->btn_tot->Location = System::Drawing::Point(457, 436);
			this->btn_tot->Name = L"btn_tot";
			this->btn_tot->Size = System::Drawing::Size(143, 29);
			this->btn_tot->TabIndex = 17;
			this->btn_tot->Text = L"total";
			this->btn_tot->UseVisualStyleBackColor = true;
			this->btn_tot->Click += gcnew System::EventHandler(this, &pedidos::btn_tot_Click);
			// 
			// pedidos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 550);
			this->Controls->Add(this->btn_tot);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lb_total);
			this->Controls->Add(this->txb_total);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txb_sino);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txb_cant);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txb_op);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_reg);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"pedidos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pedidos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_reg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_tot_Click(System::Object^ sender, System::EventArgs^ e) {
		int op, cant, si_no, cuenta1, cuenta2, cuenta3, cuenta4, cuenta5, cuentaf;
		cuenta1 = 0; cuenta2 = 0; cuenta3 = 0; cuenta4 = 0; cuenta5 = 0;
		op = System::Convert::ToInt32(txb_op->Text);
		cant = System::Convert::ToInt32(txb_cant->Text);
		si_no = Convert::ToInt32(txb_sino->Text);
		
		do
		{
			txb_op->Clear();
			txb_cant->Clear();
			if (op == 1)
			{
				cuenta1 = 14 * cant;
			}
			if (op == 2)
			{
				cuenta2 = 22 * cant;
			}
			if (op == 3)
			{
				cuenta3 = 18 * cant;
			}
			if (op == 4)
			{
				cuenta4 = 22 * cant;
			}
			if (op == 5)
			{
				cuenta5 = 6 * cant;
			}

			txb_sino->Clear();
		} while (si_no == 0);

		if (si_no == 0)
		{
			cuentaf = cuenta1 + cuenta2 + cuenta3 + cuenta4 + cuenta5;
			txb_total->Visible = true;
			lb_total->Visible = true;
			this->txb_total->Text = cuentaf.ToString();
		}
	}

	}
};
}
