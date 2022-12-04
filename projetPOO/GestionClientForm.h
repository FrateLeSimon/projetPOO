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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->NUD_idClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->TB_PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->L_idClient = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->GB_client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->BeginInit();
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
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(266, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(626, 150);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionClientForm::dataGridView1_CellContentClick);
			// 
			// GB_client
			// 
			this->GB_client->Controls->Add(this->label1);
			this->GB_client->Controls->Add(this->monthCalendar1);
			this->GB_client->Controls->Add(this->NUD_idClient);
			this->GB_client->Controls->Add(this->TB_PrenomClient);
			this->GB_client->Controls->Add(this->L_idClient);
			this->GB_client->Controls->Add(this->TB_NomClient);
			this->GB_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_client->Location = System::Drawing::Point(12, 182);
			this->GB_client->Name = L"GB_client";
			this->GB_client->Size = System::Drawing::Size(794, 300);
			this->GB_client->TabIndex = 6;
			this->GB_client->TabStop = false;
			this->GB_client->Text = L"Client";
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
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(3, 126);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			// 
			// NUD_idClient
			// 
			this->NUD_idClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_idClient->Location = System::Drawing::Point(96, 21);
			this->NUD_idClient->Name = L"NUD_idClient";
			this->NUD_idClient->Size = System::Drawing::Size(105, 22);
			this->NUD_idClient->TabIndex = 10;
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
			// 
			// GestionClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 494);
			this->Controls->Add(this->GB_client);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"GestionClientForm";
			this->Text = L"GestionClientForm";
			this->Load += gcnew System::EventHandler(this, &GestionClientForm::GestionClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->GB_client->ResumeLayout(false);
			this->GB_client->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
