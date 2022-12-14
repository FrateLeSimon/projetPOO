#pragma once
#include "..\CLservices.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r?sum?e de GestionClientForm
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
		/// Nettoyage des ressources utilis?es.
		/// </summary>
		~GestionClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TB_NomClient;
	private: System::Windows::Forms::DataGridView^ DGV_BDD;
	protected:

	protected:

	protected:





	private: System::Windows::Forms::GroupBox^ GB_client;
	private: System::Windows::Forms::Label^ L_idClient;






	private: System::Windows::Forms::TextBox^ TB_PrenomClient;
	private: System::Windows::Forms::NumericUpDown^ NUD_idClient;



	private: System::Windows::Forms::TextBox^ TB_NumRueL;
	private: System::Windows::Forms::GroupBox^ GB_Afacturation;




	private: System::Windows::Forms::TextBox^ TB_NumRueF;
	private: System::Windows::Forms::ComboBox^ CB_CpostalF;


	private: System::Windows::Forms::TextBox^ TB_NrueF;
	private: System::Windows::Forms::ComboBox^ CB_NvilleF;


	private: System::Windows::Forms::GroupBox^ GB_Alivraison;
	private: System::Windows::Forms::ComboBox^ CB_CpostalL;


	private: System::Windows::Forms::TextBox^ TB_NrueL;
	private: System::Windows::Forms::ComboBox^ CB_NVilleL;


	private: System::Windows::Forms::Button^ B_load;
	private: System::Windows::Forms::Button^ B_insert;
	private: System::Windows::Forms::Button^ B_update;
	private: System::Windows::Forms::Button^ B_delete;



	private: System::Windows::Forms::PictureBox^ Logo;











	private: clientServices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::NumericUpDown^ NUD_mois;


	private: System::Windows::Forms::NumericUpDown^ NUD_jour;
	private: System::Windows::Forms::Label^ L_annee;
	private: System::Windows::Forms::Label^ L_mois;
	private: System::Windows::Forms::Label^ L_jour;
	private: System::Windows::Forms::NumericUpDown^ NUD_annee;
	private: System::Windows::Forms::GroupBox^ GB_naissance;



	protected:

	private:
		/// <summary>
		/// Variable n?cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m?thode avec l'?diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionClientForm::typeid));
			this->TB_NomClient = (gcnew System::Windows::Forms::TextBox());
			this->DGV_BDD = (gcnew System::Windows::Forms::DataGridView());
			this->GB_client = (gcnew System::Windows::Forms::GroupBox());
			this->GB_naissance = (gcnew System::Windows::Forms::GroupBox());
			this->L_jour = (gcnew System::Windows::Forms::Label());
			this->L_annee = (gcnew System::Windows::Forms::Label());
			this->NUD_jour = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUD_annee = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_mois = (gcnew System::Windows::Forms::Label());
			this->NUD_mois = (gcnew System::Windows::Forms::NumericUpDown());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->GB_Afacturation = (gcnew System::Windows::Forms::GroupBox());
			this->TB_NumRueF = (gcnew System::Windows::Forms::TextBox());
			this->CB_CpostalF = (gcnew System::Windows::Forms::ComboBox());
			this->TB_NrueF = (gcnew System::Windows::Forms::TextBox());
			this->CB_NvilleF = (gcnew System::Windows::Forms::ComboBox());
			this->GB_Alivraison = (gcnew System::Windows::Forms::GroupBox());
			this->TB_NumRueL = (gcnew System::Windows::Forms::TextBox());
			this->CB_CpostalL = (gcnew System::Windows::Forms::ComboBox());
			this->TB_NrueL = (gcnew System::Windows::Forms::TextBox());
			this->CB_NVilleL = (gcnew System::Windows::Forms::ComboBox());
			this->NUD_idClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->TB_PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->L_idClient = (gcnew System::Windows::Forms::Label());
			this->B_load = (gcnew System::Windows::Forms::Button());
			this->B_insert = (gcnew System::Windows::Forms::Button());
			this->B_update = (gcnew System::Windows::Forms::Button());
			this->B_delete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->BeginInit();
			this->GB_client->SuspendLayout();
			this->GB_naissance->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_jour))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_annee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_mois))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->GB_Afacturation->SuspendLayout();
			this->GB_Alivraison->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->BeginInit();
			this->SuspendLayout();
			// 
			// TB_NomClient
			// 
			this->TB_NomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NomClient->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NomClient->Location = System::Drawing::Point(9, 48);
			this->TB_NomClient->Name = L"TB_NomClient";
			this->TB_NomClient->Size = System::Drawing::Size(192, 22);
			this->TB_NomClient->TabIndex = 2;
			this->TB_NomClient->Text = L"Nom du client ";
			this->TB_NomClient->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_NomClient_TextChanged);
			// 
			// DGV_BDD
			// 
			this->DGV_BDD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_BDD->Location = System::Drawing::Point(12, 12);
			this->DGV_BDD->Name = L"DGV_BDD";
			this->DGV_BDD->Size = System::Drawing::Size(1004, 150);
			this->DGV_BDD->TabIndex = 5;
			this->DGV_BDD->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionClientForm::dataGridView1_CellContentClick);
			// 
			// GB_client
			// 
			this->GB_client->Controls->Add(this->GB_naissance);
			this->GB_client->Controls->Add(this->Logo);
			this->GB_client->Controls->Add(this->GB_Afacturation);
			this->GB_client->Controls->Add(this->GB_Alivraison);
			this->GB_client->Controls->Add(this->NUD_idClient);
			this->GB_client->Controls->Add(this->TB_PrenomClient);
			this->GB_client->Controls->Add(this->L_idClient);
			this->GB_client->Controls->Add(this->TB_NomClient);
			this->GB_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_client->Location = System::Drawing::Point(221, 168);
			this->GB_client->Name = L"GB_client";
			this->GB_client->Padding = System::Windows::Forms::Padding(2);
			this->GB_client->Size = System::Drawing::Size(795, 245);
			this->GB_client->TabIndex = 6;
			this->GB_client->TabStop = false;
			this->GB_client->Text = L"Client";
			this->GB_client->Enter += gcnew System::EventHandler(this, &GestionClientForm::GB_client_Enter);
			// 
			// GB_naissance
			// 
			this->GB_naissance->Controls->Add(this->L_jour);
			this->GB_naissance->Controls->Add(this->L_annee);
			this->GB_naissance->Controls->Add(this->NUD_jour);
			this->GB_naissance->Controls->Add(this->NUD_annee);
			this->GB_naissance->Controls->Add(this->L_mois);
			this->GB_naissance->Controls->Add(this->NUD_mois);

			this->GB_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->GB_naissance->Location = System::Drawing::Point(9, 112);
			this->GB_naissance->Name = L"GB_naissance";
			this->GB_naissance->Size = System::Drawing::Size(200, 119);
			this->GB_naissance->TabIndex = 30;
			this->GB_naissance->TabStop = false;
			this->GB_naissance->Text = L"Date de naissance";

			this->GB_naissance->Enter += gcnew System::EventHandler(this, &GestionClientForm::GB_naissance_Enter);

			// 
			// L_jour
			// 
			this->L_jour->AutoSize = true;
			this->L_jour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_jour->Location = System::Drawing::Point(9, 27);
			this->L_jour->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->L_jour->Name = L"L_jour";
			this->L_jour->Size = System::Drawing::Size(33, 16);
			this->L_jour->TabIndex = 27;
			this->L_jour->Text = L"Jour";
			this->L_jour->Click += gcnew System::EventHandler(this, &GestionClientForm::L_jour_Click);
			// 
			// L_annee
			// 
			this->L_annee->AutoSize = true;
			this->L_annee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_annee->Location = System::Drawing::Point(9, 82);
			this->L_annee->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->L_annee->Name = L"L_annee";
			this->L_annee->Size = System::Drawing::Size(46, 16);
			this->L_annee->TabIndex = 29;
			this->L_annee->Text = L"Ann?e";
			this->L_annee->Click += gcnew System::EventHandler(this, &GestionClientForm::L_annee_Click);
			// 
			// NUD_jour
			// 
			this->NUD_jour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_jour->Location = System::Drawing::Point(64, 25);
			this->NUD_jour->Margin = System::Windows::Forms::Padding(2);

			this->NUD_jour->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->NUD_jour->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });

			this->NUD_jour->Name = L"NUD_jour";
			this->NUD_jour->Size = System::Drawing::Size(116, 22);
			this->NUD_jour->TabIndex = 23;
			this->NUD_jour->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_jour->ValueChanged += gcnew System::EventHandler(this, &GestionClientForm::NUD_jour_ValueChanged);
			// 
			// NUD_annee
			// 
			this->NUD_annee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_annee->Location = System::Drawing::Point(64, 82);
			this->NUD_annee->Margin = System::Windows::Forms::Padding(2);

			this->NUD_annee->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->NUD_annee->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1900, 0, 0, 0 });
			this->NUD_annee->Name = L"NUD_annee";
			this->NUD_annee->Size = System::Drawing::Size(116, 22);
			this->NUD_annee->TabIndex = 26;
			this->NUD_annee->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });

			this->NUD_annee->Name = L"NUD_annee";
			this->NUD_annee->Size = System::Drawing::Size(116, 22);
			this->NUD_annee->TabIndex = 26;

			this->NUD_annee->ValueChanged += gcnew System::EventHandler(this, &GestionClientForm::NUD_annee_ValueChanged);
			// 
			// L_mois
			// 
			this->L_mois->AutoSize = true;
			this->L_mois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->L_mois->Location = System::Drawing::Point(9, 57);

			this->L_mois->Location = System::Drawing::Point(9, 56);

			this->L_mois->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->L_mois->Name = L"L_mois";
			this->L_mois->Size = System::Drawing::Size(36, 16);
			this->L_mois->TabIndex = 28;
			this->L_mois->Text = L"Mois";
			this->L_mois->Click += gcnew System::EventHandler(this, &GestionClientForm::L_mois_Click);
			// 
			// NUD_mois
			// 
			this->NUD_mois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->NUD_mois->Location = System::Drawing::Point(64, 55);
			this->NUD_mois->Margin = System::Windows::Forms::Padding(2);
			this->NUD_mois->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_mois->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_mois->Name = L"NUD_mois";
			this->NUD_mois->Size = System::Drawing::Size(116, 22);
			this->NUD_mois->TabIndex = 24;
			this->NUD_mois->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });

			this->NUD_mois->Location = System::Drawing::Point(64, 54);
			this->NUD_mois->Margin = System::Windows::Forms::Padding(2);
			this->NUD_mois->Name = L"NUD_mois";
			this->NUD_mois->Size = System::Drawing::Size(116, 22);
			this->NUD_mois->TabIndex = 24;

			this->NUD_mois->ValueChanged += gcnew System::EventHandler(this, &GestionClientForm::NUD_mois_ValueChanged);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(536, 21);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(242, 210);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 22;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &GestionClientForm::Logo_Click);
			// 
			// GB_Afacturation
			// 
			this->GB_Afacturation->Controls->Add(this->TB_NumRueF);
			this->GB_Afacturation->Controls->Add(this->CB_CpostalF);
			this->GB_Afacturation->Controls->Add(this->TB_NrueF);
			this->GB_Afacturation->Controls->Add(this->CB_NvilleF);
			this->GB_Afacturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Afacturation->Location = System::Drawing::Point(224, 124);
			this->GB_Afacturation->Margin = System::Windows::Forms::Padding(2);
			this->GB_Afacturation->Name = L"GB_Afacturation";
			this->GB_Afacturation->Size = System::Drawing::Size(281, 86);
			this->GB_Afacturation->TabIndex = 19;
			this->GB_Afacturation->TabStop = false;
			this->GB_Afacturation->Text = L"Adresse de facturation";
			this->GB_Afacturation->Enter += gcnew System::EventHandler(this, &GestionClientForm::GB_Afacturation_Enter);
			// 
			// TB_NumRueF
			// 
			this->TB_NumRueF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NumRueF->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NumRueF->Location = System::Drawing::Point(6, 23);
			this->TB_NumRueF->Name = L"TB_NumRueF";
			this->TB_NumRueF->Size = System::Drawing::Size(148, 22);
			this->TB_NumRueF->TabIndex = 13;
			this->TB_NumRueF->Text = L"N? de la rue";
			this->TB_NumRueF->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_NumRueF_TextChanged);
			// 
			// CB_CpostalF
			// 
			this->CB_CpostalF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_CpostalF->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CB_CpostalF->FormattingEnabled = true;
			this->CB_CpostalF->Location = System::Drawing::Point(160, 51);
			this->CB_CpostalF->Name = L"CB_CpostalF";
			this->CB_CpostalF->Size = System::Drawing::Size(111, 24);
			this->CB_CpostalF->TabIndex = 17;
			this->CB_CpostalF->Text = L"Code postal";
			this->CB_CpostalF->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::CB_CpostalF_SelectedIndexChanged);
			// 
			// TB_NrueF
			// 
			this->TB_NrueF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NrueF->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NrueF->Location = System::Drawing::Point(160, 23);
			this->TB_NrueF->Name = L"TB_NrueF";
			this->TB_NrueF->Size = System::Drawing::Size(111, 22);
			this->TB_NrueF->TabIndex = 15;
			this->TB_NrueF->Text = L"Nom de la rue";
			this->TB_NrueF->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_NrueF_TextChanged);
			// 
			// CB_NvilleF
			// 
			this->CB_NvilleF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_NvilleF->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CB_NvilleF->FormattingEnabled = true;
			this->CB_NvilleF->Location = System::Drawing::Point(6, 51);
			this->CB_NvilleF->Name = L"CB_NvilleF";
			this->CB_NvilleF->Size = System::Drawing::Size(148, 24);
			this->CB_NvilleF->TabIndex = 16;
			this->CB_NvilleF->Text = L"Nom de la ville";
			this->CB_NvilleF->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::CB_NvilleF_SelectedIndexChanged);
			// 
			// GB_Alivraison
			// 
			this->GB_Alivraison->Controls->Add(this->TB_NumRueL);
			this->GB_Alivraison->Controls->Add(this->CB_CpostalL);
			this->GB_Alivraison->Controls->Add(this->TB_NrueL);
			this->GB_Alivraison->Controls->Add(this->CB_NVilleL);
			this->GB_Alivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Alivraison->Location = System::Drawing::Point(224, 21);
			this->GB_Alivraison->Margin = System::Windows::Forms::Padding(2);
			this->GB_Alivraison->Name = L"GB_Alivraison";
			this->GB_Alivraison->Size = System::Drawing::Size(281, 86);
			this->GB_Alivraison->TabIndex = 18;
			this->GB_Alivraison->TabStop = false;
			this->GB_Alivraison->Text = L"Adresse de livraison";
			this->GB_Alivraison->Enter += gcnew System::EventHandler(this, &GestionClientForm::GB_Alivraison_Enter);
			// 
			// TB_NumRueL
			// 
			this->TB_NumRueL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NumRueL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NumRueL->Location = System::Drawing::Point(6, 23);
			this->TB_NumRueL->Name = L"TB_NumRueL";
			this->TB_NumRueL->Size = System::Drawing::Size(148, 22);
			this->TB_NumRueL->TabIndex = 13;
			this->TB_NumRueL->Text = L"N? de la rue";
			this->TB_NumRueL->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_NumRueL_TextChanged);
			// 
			// CB_CpostalL
			// 
			this->CB_CpostalL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_CpostalL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CB_CpostalL->FormattingEnabled = true;
			this->CB_CpostalL->Location = System::Drawing::Point(160, 51);
			this->CB_CpostalL->Name = L"CB_CpostalL";
			this->CB_CpostalL->Size = System::Drawing::Size(111, 24);
			this->CB_CpostalL->TabIndex = 17;
			this->CB_CpostalL->Text = L"Code postal";
			this->CB_CpostalL->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::CB_CpostalL_SelectedIndexChanged);
			// 
			// TB_NrueL
			// 
			this->TB_NrueL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NrueL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NrueL->Location = System::Drawing::Point(160, 23);
			this->TB_NrueL->Name = L"TB_NrueL";
			this->TB_NrueL->Size = System::Drawing::Size(111, 22);
			this->TB_NrueL->TabIndex = 15;
			this->TB_NrueL->Text = L"Nom de la rue";
			this->TB_NrueL->TextChanged += gcnew System::EventHandler(this, &GestionClientForm::TB_NrueL_TextChanged);
			// 
			// CB_NVilleL
			// 
			this->CB_NVilleL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_NVilleL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CB_NVilleL->FormattingEnabled = true;
			this->CB_NVilleL->Location = System::Drawing::Point(6, 51);
			this->CB_NVilleL->Name = L"CB_NVilleL";
			this->CB_NVilleL->Size = System::Drawing::Size(148, 24);
			this->CB_NVilleL->TabIndex = 16;
			this->CB_NVilleL->Text = L"Nom de la ville";
			this->CB_NVilleL->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientForm::CB_NvilleL_SelectedIndexChanged);
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
			this->TB_PrenomClient->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_PrenomClient->Location = System::Drawing::Point(9, 76);
			this->TB_PrenomClient->Name = L"TB_PrenomClient";
			this->TB_PrenomClient->Size = System::Drawing::Size(192, 22);
			this->TB_PrenomClient->TabIndex = 8;
			this->TB_PrenomClient->Text = L"Pr?nom du client ";
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
			// B_load
			// 
			this->B_load->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_load->Location = System::Drawing::Point(12, 168);
			this->B_load->Name = L"B_load";
			this->B_load->Size = System::Drawing::Size(202, 77);
			this->B_load->TabIndex = 7;
			this->B_load->Text = L"Charger";
			this->B_load->UseVisualStyleBackColor = true;
			this->B_load->Click += gcnew System::EventHandler(this, &GestionClientForm::B_load_Click);
			// 
			// B_insert
			// 
			this->B_insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_insert->Location = System::Drawing::Point(25, 251);
			this->B_insert->Name = L"B_insert";
			this->B_insert->Size = System::Drawing::Size(174, 50);
			this->B_insert->TabIndex = 8;
			this->B_insert->Text = L"Ins?rer";
			this->B_insert->UseVisualStyleBackColor = true;
			this->B_insert->Click += gcnew System::EventHandler(this, &GestionClientForm::B_insert_Click);
			// 
			// B_update
			// 
			this->B_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_update->Location = System::Drawing::Point(25, 307);
			this->B_update->Name = L"B_update";
			this->B_update->Size = System::Drawing::Size(174, 50);
			this->B_update->TabIndex = 9;
			this->B_update->Text = L"Modifier";
			this->B_update->UseVisualStyleBackColor = true;
			this->B_update->Click += gcnew System::EventHandler(this, &GestionClientForm::B_update_Click);
			// 
			// B_delete
			// 
			this->B_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_delete->Location = System::Drawing::Point(25, 363);
			this->B_delete->Name = L"B_delete";
			this->B_delete->Size = System::Drawing::Size(174, 50);
			this->B_delete->TabIndex = 10;
			this->B_delete->Text = L"Supprimer";
			this->B_delete->UseVisualStyleBackColor = true;
			this->B_delete->Click += gcnew System::EventHandler(this, &GestionClientForm::B_delete_Click);
			// 
			// GestionClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1028, 428);
			this->Controls->Add(this->B_delete);
			this->Controls->Add(this->B_update);
			this->Controls->Add(this->B_insert);
			this->Controls->Add(this->B_load);
			this->Controls->Add(this->GB_client);
			this->Controls->Add(this->DGV_BDD);
			this->Name = L"GestionClientForm";
			this->Text = L"GestionClientForm";
			this->Load += gcnew System::EventHandler(this, &GestionClientForm::GestionClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->EndInit();
			this->GB_client->ResumeLayout(false);
			this->GB_client->PerformLayout();
			this->GB_naissance->ResumeLayout(false);
			this->GB_naissance->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_jour))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_annee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_mois))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->GB_Afacturation->ResumeLayout(false);
			this->GB_Afacturation->PerformLayout();
			this->GB_Alivraison->ResumeLayout(false);
			this->GB_Alivraison->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->EndInit();
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
	private: System::Void L_DdNaissance_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MC_DdNaissance_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void GB_Alivraison_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NumRueL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NrueL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_NvilleL_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_CpostalL_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_Afacturation_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NumRueF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_NrueF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_NvilleF_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_CpostalF_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew clientServices();
		this->oDs = this->oSvc->selectionnerTousLesClients("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void B_insert_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew clientServices();
		this->oSvc->ajouterUnClient(this->TB_NomClient->Text, this->TB_PrenomClient->Text, this->TB_NumRueL->Text, this->TB_NumRueF->Text, this->TB_NrueL->Text, this->TB_NrueF->Text, this->CB_NVilleL->Text, this->CB_NvilleF->Text, this->CB_CpostalL->Text, this->CB_CpostalF->Text, this->NUD_annee->Value + "-" + this->NUD_mois->Value + "-" + this->NUD_jour->Value);
	}
	private: System::Void B_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew clientServices();
		this->oSvc->modifierUnClient(System::Convert::ToString(this->NUD_idClient->Value), this->TB_NomClient->Text, this->TB_PrenomClient->Text, this->TB_NumRueL->Text, this->TB_NumRueF->Text, this->TB_NrueL->Text, this->TB_NrueF->Text, this->CB_NVilleL->Text, this->CB_NvilleF->Text, this->CB_CpostalL->Text, this->CB_CpostalF->Text, this->NUD_annee->Value + "-" + this->NUD_mois->Value + "-" + this->NUD_jour->Value);
	}
	private: System::Void B_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew clientServices();
		this->oSvc->supprimerUnClient(System::Convert::ToString(this->NUD_idClient->Value));
	}
	private: System::Void L_1achat_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MC_1achat_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_jour_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_mois_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_annee_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_jour_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_mois_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_annee_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_naissance_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
