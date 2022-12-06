#pragma once
#include "GestionStockForm.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionPersonnelForm
	/// </summary>
	public ref class GestionPersonnelForm : public System::Windows::Forms::Form
	{
	public:
		GestionPersonnelForm(void)
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
		~GestionPersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGV_BDD;
	private: System::Windows::Forms::GroupBox^ GB_Personnel;

	private: System::Windows::Forms::MonthCalendar^ MC_Dembauche;

	private: System::Windows::Forms::Label^ L_Dembauche;

	private: System::Windows::Forms::GroupBox^ GB_Apersonnel;
	private: System::Windows::Forms::TextBox^ TB_NumRue;
	private: System::Windows::Forms::ComboBox^ CB_Cpostal;








	private: System::Windows::Forms::TextBox^ TB_Nrue;
	private: System::Windows::Forms::ComboBox^ CB_NVille;




	private: System::Windows::Forms::NumericUpDown^ NUD_idClient;
	private: System::Windows::Forms::TextBox^ TB_PrenomPersonnel;

	private: System::Windows::Forms::Label^ L_idPersonnel;
	private: System::Windows::Forms::TextBox^ TB_NomPersonnel;
	private: System::Windows::Forms::NumericUpDown^ NUD_IdSupérieur;
	private: System::Windows::Forms::Label^ L_IdSupérieur;
	private: System::Windows::Forms::CheckBox^ CB_Admin;
	private: System::Windows::Forms::Button^ B_load;
	private: System::Windows::Forms::Button^ B_insert;
	private: System::Windows::Forms::Button^ B_update;
	private: System::Windows::Forms::Button^ B_delete;

	private: personnelServices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::PictureBox^ Logo;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionPersonnelForm::typeid));
			this->DGV_BDD = (gcnew System::Windows::Forms::DataGridView());
			this->GB_Personnel = (gcnew System::Windows::Forms::GroupBox());
			this->CB_Admin = (gcnew System::Windows::Forms::CheckBox());
			this->NUD_IdSupérieur = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_IdSupérieur = (gcnew System::Windows::Forms::Label());
			this->MC_Dembauche = (gcnew System::Windows::Forms::MonthCalendar());
			this->L_Dembauche = (gcnew System::Windows::Forms::Label());
			this->GB_Apersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->TB_NumRue = (gcnew System::Windows::Forms::TextBox());
			this->CB_Cpostal = (gcnew System::Windows::Forms::ComboBox());
			this->TB_Nrue = (gcnew System::Windows::Forms::TextBox());
			this->CB_NVille = (gcnew System::Windows::Forms::ComboBox());
			this->NUD_idClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->TB_PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->L_idPersonnel = (gcnew System::Windows::Forms::Label());
			this->TB_NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->B_load = (gcnew System::Windows::Forms::Button());
			this->B_insert = (gcnew System::Windows::Forms::Button());
			this->B_update = (gcnew System::Windows::Forms::Button());
			this->B_delete = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->BeginInit();
			this->GB_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdSupérieur))->BeginInit();
			this->GB_Apersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_BDD
			// 
			this->DGV_BDD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_BDD->Location = System::Drawing::Point(12, 12);
			this->DGV_BDD->Name = L"DGV_BDD";
			this->DGV_BDD->Size = System::Drawing::Size(791, 182);
			this->DGV_BDD->TabIndex = 6;
			this->DGV_BDD->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionPersonnelForm::DGV_BDD_CellContentClick);
			// 
			// GB_Personnel
			// 
			this->GB_Personnel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->GB_Personnel->Controls->Add(this->CB_Admin);
			this->GB_Personnel->Controls->Add(this->NUD_IdSupérieur);
			this->GB_Personnel->Controls->Add(this->L_IdSupérieur);
			this->GB_Personnel->Controls->Add(this->MC_Dembauche);
			this->GB_Personnel->Controls->Add(this->L_Dembauche);
			this->GB_Personnel->Controls->Add(this->GB_Apersonnel);
			this->GB_Personnel->Controls->Add(this->NUD_idClient);
			this->GB_Personnel->Controls->Add(this->TB_PrenomPersonnel);
			this->GB_Personnel->Controls->Add(this->L_idPersonnel);
			this->GB_Personnel->Controls->Add(this->TB_NomPersonnel);
			this->GB_Personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Personnel->Location = System::Drawing::Point(12, 200);
			this->GB_Personnel->Name = L"GB_Personnel";
			this->GB_Personnel->Size = System::Drawing::Size(791, 203);
			this->GB_Personnel->TabIndex = 7;
			this->GB_Personnel->TabStop = false;
			this->GB_Personnel->Text = L"Personnel";
			this->GB_Personnel->Enter += gcnew System::EventHandler(this, &GestionPersonnelForm::GB_Personnel_Enter);
			// 
			// CB_Admin
			// 
			this->CB_Admin->AutoSize = true;
			this->CB_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Admin->Location = System::Drawing::Point(27, 135);
			this->CB_Admin->Name = L"CB_Admin";
			this->CB_Admin->Size = System::Drawing::Size(111, 20);
			this->CB_Admin->TabIndex = 25;
			this->CB_Admin->Text = L"Administrateur";
			this->CB_Admin->UseVisualStyleBackColor = true;
			this->CB_Admin->CheckedChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::CB_Admin_CheckedChanged);
			// 
			// NUD_IdSupérieur
			// 
			this->NUD_IdSupérieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_IdSupérieur->Location = System::Drawing::Point(112, 107);
			this->NUD_IdSupérieur->Name = L"NUD_IdSupérieur";
			this->NUD_IdSupérieur->Size = System::Drawing::Size(105, 22);
			this->NUD_IdSupérieur->TabIndex = 24;
			this->NUD_IdSupérieur->ValueChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::NUD_IdSupérieur_ValueChanged);
			// 
			// L_IdSupérieur
			// 
			this->L_IdSupérieur->AutoSize = true;
			this->L_IdSupérieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_IdSupérieur->Location = System::Drawing::Point(24, 107);
			this->L_IdSupérieur->Name = L"L_IdSupérieur";
			this->L_IdSupérieur->Size = System::Drawing::Size(79, 16);
			this->L_IdSupérieur->TabIndex = 23;
			this->L_IdSupérieur->Text = L"Id Supérieur";
			this->L_IdSupérieur->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::L_IdSupérieur_Click);
			// 
			// MC_Dembauche
			// 
			this->MC_Dembauche->Location = System::Drawing::Point(556, 31);
			this->MC_Dembauche->Name = L"MC_Dembauche";
			this->MC_Dembauche->TabIndex = 21;
			this->MC_Dembauche->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &GestionPersonnelForm::MC_Dembauche_DateChanged);
			// 
			// L_Dembauche
			// 
			this->L_Dembauche->AutoSize = true;
			this->L_Dembauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Dembauche->Location = System::Drawing::Point(617, 12);
			this->L_Dembauche->Name = L"L_Dembauche";
			this->L_Dembauche->Size = System::Drawing::Size(114, 16);
			this->L_Dembauche->TabIndex = 20;
			this->L_Dembauche->Text = L"Date d\'embauche";
			this->L_Dembauche->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::L_Dembauche_Click);
			// 
			// GB_Apersonnel
			// 
			this->GB_Apersonnel->Controls->Add(this->TB_NumRue);
			this->GB_Apersonnel->Controls->Add(this->CB_Cpostal);
			this->GB_Apersonnel->Controls->Add(this->TB_Nrue);
			this->GB_Apersonnel->Controls->Add(this->CB_NVille);
			this->GB_Apersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Apersonnel->Location = System::Drawing::Point(247, 12);
			this->GB_Apersonnel->Name = L"GB_Apersonnel";
			this->GB_Apersonnel->Size = System::Drawing::Size(281, 86);
			this->GB_Apersonnel->TabIndex = 18;
			this->GB_Apersonnel->TabStop = false;
			this->GB_Apersonnel->Text = L"Adresse du Personnel";
			this->GB_Apersonnel->Enter += gcnew System::EventHandler(this, &GestionPersonnelForm::GB_Apersonnel_Enter);
			// 
			// TB_NumRue
			// 
			this->TB_NumRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NumRue->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NumRue->Location = System::Drawing::Point(6, 23);
			this->TB_NumRue->Name = L"TB_NumRue";
			this->TB_NumRue->Size = System::Drawing::Size(148, 22);
			this->TB_NumRue->TabIndex = 13;
			this->TB_NumRue->Text = L"N° de la rue";
			this->TB_NumRue->TextChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::TB_NumRue_TextChanged);
			// 
			// CB_Cpostal
			// 
			this->CB_Cpostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Cpostal->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CB_Cpostal->FormattingEnabled = true;
			this->CB_Cpostal->Location = System::Drawing::Point(160, 51);
			this->CB_Cpostal->Name = L"CB_Cpostal";
			this->CB_Cpostal->Size = System::Drawing::Size(111, 24);
			this->CB_Cpostal->TabIndex = 17;
			this->CB_Cpostal->Text = L"Code postal";
			this->CB_Cpostal->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::CB_Cpostal_SelectedIndexChanged);
			// 
			// TB_Nrue
			// 
			this->TB_Nrue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Nrue->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_Nrue->Location = System::Drawing::Point(160, 23);
			this->TB_Nrue->Name = L"TB_Nrue";
			this->TB_Nrue->Size = System::Drawing::Size(111, 22);
			this->TB_Nrue->TabIndex = 15;
			this->TB_Nrue->Text = L"Nom de la rue";
			this->TB_Nrue->TextChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::TB_Nrue_TextChanged);
			// 
			// CB_NVille
			// 
			this->CB_NVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_NVille->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CB_NVille->FormattingEnabled = true;
			this->CB_NVille->Location = System::Drawing::Point(6, 51);
			this->CB_NVille->Name = L"CB_NVille";
			this->CB_NVille->Size = System::Drawing::Size(148, 24);
			this->CB_NVille->TabIndex = 16;
			this->CB_NVille->Text = L"Nom de la ville";
			this->CB_NVille->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::CB_NVille_SelectedIndexChanged);
			// 
			// NUD_idClient
			// 
			this->NUD_idClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_idClient->Location = System::Drawing::Point(112, 22);
			this->NUD_idClient->Name = L"NUD_idClient";
			this->NUD_idClient->Size = System::Drawing::Size(105, 22);
			this->NUD_idClient->TabIndex = 10;
			this->NUD_idClient->ValueChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::NUD_idClient_ValueChanged);
			// 
			// TB_PrenomPersonnel
			// 
			this->TB_PrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_PrenomPersonnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_PrenomPersonnel->Location = System::Drawing::Point(9, 76);
			this->TB_PrenomPersonnel->Name = L"TB_PrenomPersonnel";
			this->TB_PrenomPersonnel->Size = System::Drawing::Size(208, 22);
			this->TB_PrenomPersonnel->TabIndex = 8;
			this->TB_PrenomPersonnel->Text = L"Prénom du personnel";
			this->TB_PrenomPersonnel->TextChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::TB_PrenomPersonnel_TextChanged);
			// 
			// L_idPersonnel
			// 
			this->L_idPersonnel->AutoSize = true;
			this->L_idPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_idPersonnel->Location = System::Drawing::Point(24, 24);
			this->L_idPersonnel->Name = L"L_idPersonnel";
			this->L_idPersonnel->Size = System::Drawing::Size(82, 16);
			this->L_idPersonnel->TabIndex = 5;
			this->L_idPersonnel->Text = L"Id Personnel";
			this->L_idPersonnel->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::L_idPersonnel_Click);
			// 
			// TB_NomPersonnel
			// 
			this->TB_NomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NomPersonnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NomPersonnel->Location = System::Drawing::Point(9, 48);
			this->TB_NomPersonnel->Name = L"TB_NomPersonnel";
			this->TB_NomPersonnel->Size = System::Drawing::Size(208, 22);
			this->TB_NomPersonnel->TabIndex = 2;
			this->TB_NomPersonnel->Text = L"Nom du personnel";
			this->TB_NomPersonnel->TextChanged += gcnew System::EventHandler(this, &GestionPersonnelForm::TB_NomPersonnel_TextChanged);
			// 
			// B_load
			// 
			this->B_load->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_load->Location = System::Drawing::Point(809, 12);
			this->B_load->Name = L"B_load";
			this->B_load->Size = System::Drawing::Size(99, 182);
			this->B_load->TabIndex = 8;
			this->B_load->Text = L"Charger";
			this->B_load->UseVisualStyleBackColor = true;
			this->B_load->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::B_load_Click);
			// 
			// B_insert
			// 
			this->B_insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_insert->Location = System::Drawing::Point(914, 12);
			this->B_insert->Name = L"B_insert";
			this->B_insert->Size = System::Drawing::Size(161, 56);
			this->B_insert->TabIndex = 9;
			this->B_insert->Text = L"Insérer";
			this->B_insert->UseVisualStyleBackColor = true;
			this->B_insert->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::B_insert_Click);
			// 
			// B_update
			// 
			this->B_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_update->Location = System::Drawing::Point(914, 74);
			this->B_update->Name = L"B_update";
			this->B_update->Size = System::Drawing::Size(161, 56);
			this->B_update->TabIndex = 10;
			this->B_update->Text = L"Modifier";
			this->B_update->UseVisualStyleBackColor = true;
			this->B_update->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::B_update_Click);
			// 
			// B_delete
			// 
			this->B_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_delete->Location = System::Drawing::Point(914, 138);
			this->B_delete->Name = L"B_delete";
			this->B_delete->Size = System::Drawing::Size(161, 56);
			this->B_delete->TabIndex = 11;
			this->B_delete->Text = L"Supprimer";
			this->B_delete->UseVisualStyleBackColor = true;
			this->B_delete->Click += gcnew System::EventHandler(this, &GestionPersonnelForm::B_delete_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(809, 200);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(266, 203);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 25;
			this->Logo->TabStop = false;
			// 
			// GestionPersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1087, 412);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->B_delete);
			this->Controls->Add(this->B_update);
			this->Controls->Add(this->B_insert);
			this->Controls->Add(this->B_load);
			this->Controls->Add(this->GB_Personnel);
			this->Controls->Add(this->DGV_BDD);
			this->Name = L"GestionPersonnelForm";
			this->Text = L"GestionPersonnelForm";
			this->Load += gcnew System::EventHandler(this, &GestionPersonnelForm::GestionPersonnelForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->EndInit();
			this->GB_Personnel->ResumeLayout(false);
			this->GB_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdSupérieur))->EndInit();
			this->GB_Apersonnel->ResumeLayout(false);
			this->GB_Apersonnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionPersonnelForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DGV_BDD_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void GB_Personnel_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_idPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_idClient_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NomPersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_PrenomPersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_IdSupérieur_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_IdSupérieur_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_Admin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_Apersonnel_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NumRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_Nrue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_NVille_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_Cpostal_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_Dembauche_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MC_Dembauche_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew personnelServices();
		this->oDs = this->oSvc->selectionnerTousLesPersonnels("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void B_insert_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew personnelServices();
		this->oSvc->ajouterUnPersonnel(this->TB_NomPersonnel->Text, this->TB_PrenomPersonnel->Text, this->NUD_IdSupérieur->Text, this->TB_NumRue->Text, this->TB_Nrue->Text, this->CB_NVille->Text, this->CB_Cpostal->Text, System::Convert::ToString(this->MC_Dembauche->SelectionStart), this->CB_Admin->Text);
	}
	private: System::Void B_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew personnelServices();
		this->oSvc->modifierUnPersonnel(this->TB_NomPersonnel->Text, this->TB_PrenomPersonnel->Text, this->NUD_IdSupérieur->Text, this->TB_NumRue->Text, this->TB_Nrue->Text, this->CB_NVille->Text, this->CB_Cpostal->Text, System::Convert::ToString(this->MC_Dembauche->SelectionStart), this->CB_Admin->Text, this->NUD_idClient->Text);
	}
	private: System::Void B_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew personnelServices();
		this->oSvc->supprimerUnPersonnel(this->NUD_idClient->Text);
	}
};
}
