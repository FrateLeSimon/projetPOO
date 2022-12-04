#pragma once

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionClientForm
	/// </summary>
	public ref class GestionClientForm : public System::Windows::Forms::Form
	{
	public:
		GestionClientForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TB_NomClient;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ GB_client;
	private: System::Windows::Forms::Label^ L_idClient;






	private: System::Windows::Forms::TextBox^ TB_PrenomClient;
	private: System::Windows::Forms::NumericUpDown^ NUD_idClient;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;





	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TB_NomClient = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->GB_client = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->NUD_idClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->TB_PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->L_idClient = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->GB_client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// TB_NomClient
			// 
			this->TB_NomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NomClient->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->TB_NomClient->Location = System::Drawing::Point(9, 48);
			this->TB_NomClient->Name = L"TB_NomClient";
			this->TB_NomClient->Size = System::Drawing::Size(192, 22);
			this->TB_NomClient->TabIndex = 2;
			this->TB_NomClient->Text = L"Nom du client ";
			this->TB_NomClient->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_NomClient_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(880, 150);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionClientForm::dataGridView1_CellContentClick);
			// 
			// GB_client
			// 
			this->GB_client->Controls->Add(this->groupBox2);
			this->GB_client->Controls->Add(this->groupBox1);
			this->GB_client->Controls->Add(this->label1);
			this->GB_client->Controls->Add(this->monthCalendar1);
			this->GB_client->Controls->Add(this->NUD_idClient);
			this->GB_client->Controls->Add(this->TB_PrenomClient);
			this->GB_client->Controls->Add(this->L_idClient);
			this->GB_client->Controls->Add(this->TB_NomClient);
			this->GB_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_client->Location = System::Drawing::Point(221, 168);
			this->GB_client->Name = L"GB_client";
			this->GB_client->Size = System::Drawing::Size(671, 300);
			this->GB_client->TabIndex = 6;
			this->GB_client->TabStop = false;
			this->GB_client->Text = L"Client";
			this->GB_client->Enter += gcnew System::EventHandler(this, &GestionClientForm::GB_client_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(6, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 22);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"N° de la rue";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Date de naissance Client";
			this->label1->Click += gcnew System::EventHandler(this, &GestionClientForm::label1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(3, 126);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &GestionClientForm::monthCalendar1_DateChanged);
			// 
			// NUD_idClient
			// 
			this->NUD_idClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_idClient->Location = System::Drawing::Point(96, 21);
			this->NUD_idClient->Name = L"NUD_idClient";
			this->NUD_idClient->Size = System::Drawing::Size(105, 22);
			this->NUD_idClient->TabIndex = 10;
			this->NUD_idClient->ValueChanged += gcnew System::EventHandler(this, &GestionClientForm::NUD_idClient_ValueChanged);
			// 
			// TB_PrenomClient
			// 
			this->TB_PrenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_PrenomClient->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->TB_PrenomClient->Location = System::Drawing::Point(9, 76);
			this->TB_PrenomClient->Name = L"TB_PrenomClient";
			this->TB_PrenomClient->Size = System::Drawing::Size(192, 22);
			this->TB_PrenomClient->TabIndex = 8;
			this->TB_PrenomClient->Text = L"Prénom du client ";
			this->TB_PrenomClient->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_PrenomClient_TextChanged);
			// 
			// L_idClient
			// 
			this->L_idClient->AutoSize = true;
			this->L_idClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_idClient->Location = System::Drawing::Point(24, 24);
			this->L_idClient->Name = L"L_idClient";
			this->L_idClient->Size = System::Drawing::Size(54, 16);
			this->L_idClient->TabIndex = 5;
			this->L_idClient->Text = L"Id Client";
			this->L_idClient->Click += gcnew System::EventHandler(this, &GestionClientForm::L_idClient_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Location = System::Drawing::Point(204, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 15;
			this->textBox2->Text = L"Nom de la rue";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::textBox2_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 24);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->Text = L"Nom de la ville";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(204, 51);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(192, 24);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->Text = L"Code postal";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::comboBox2_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(254, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(406, 86);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse de livraison du Client";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GestionClientForm::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(254, 126);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(406, 86);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Adresse de facturation du Client";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &GestionClientForm::groupBox2_Enter);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Location = System::Drawing::Point(6, 23);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 22);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"N° de la rue";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::textBox3_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(204, 51);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(192, 24);
			this->comboBox3->TabIndex = 17;
			this->comboBox3->Text = L"Code postal";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::comboBox3_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox4->Location = System::Drawing::Point(204, 23);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"Nom de la rue";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::textBox4_TextChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(6, 51);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(192, 24);
			this->comboBox4->TabIndex = 16;
			this->comboBox4->Text = L"Nom de la ville";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::comboBox4_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 107);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GestionClientForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 58);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GestionClientForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 58);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GestionClientForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 410);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 58);
			this->button4->TabIndex = 10;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GestionClientForm::button4_Click);
			// 
			// GestionClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 479);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->GB_client);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"GestionClientForm";
			this->Text = L"GestionClientForm";
			this->Load += gcnew System::EventHandler(this, &GestionClientForm::GestionClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->GB_client->ResumeLayout(false);
			this->GB_client->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void GB_client_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_idClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_idClient_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NomClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_PrenomClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
