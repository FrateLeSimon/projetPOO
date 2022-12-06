#pragma once
#include "GestionClientForm.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommandeForm
	/// </summary>
	public ref class GestionCommandeForm : public System::Windows::Forms::Form
	{
	public:
		GestionCommandeForm(void)
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
		~GestionCommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGV_Commande;
	protected:

	protected:
	private: System::Windows::Forms::GroupBox^ GB_Commande;
	private: System::Windows::Forms::Label^ L_idCommande;
	private: System::Windows::Forms::NumericUpDown^ NUD_idCommande;
	private: System::Windows::Forms::TextBox^ TB_Référence;




	private: System::Windows::Forms::TextBox^ TB_MontantHT;
	private: System::Windows::Forms::TextBox^ TB_MontantTTC;
	private: System::Windows::Forms::Button^ B_load;
	private: System::Windows::Forms::Button^ B_insert;
	private: System::Windows::Forms::Button^ B_update;
	private: System::Windows::Forms::Button^ B_delete;
	private: System::Windows::Forms::PictureBox^ Logo;


	private: commandeServices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::NumericUpDown^ NUD_IdClient;
	private: System::Windows::Forms::Label^ L_IdClient;
	private: System::Windows::Forms::GroupBox^ GB_livraison;

	private: System::Windows::Forms::Label^ L_jour;
	private: System::Windows::Forms::Label^ L_annee;
	private: System::Windows::Forms::NumericUpDown^ NUD_jourL;
	private: System::Windows::Forms::NumericUpDown^ NUD_anneeL;


	private: System::Windows::Forms::Label^ L_mois;
	private: System::Windows::Forms::NumericUpDown^ NUD_moisL;

	private: System::Windows::Forms::GroupBox^ GB_emission;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ NUD_jourE;
	private: System::Windows::Forms::NumericUpDown^ NUD_anneeE;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ NUD_moisE;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionCommandeForm::typeid));
			this->DGV_Commande = (gcnew System::Windows::Forms::DataGridView());
			this->GB_Commande = (gcnew System::Windows::Forms::GroupBox());
			this->NUD_IdClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_IdClient = (gcnew System::Windows::Forms::Label());
			this->TB_MontantTTC = (gcnew System::Windows::Forms::TextBox());
			this->TB_MontantHT = (gcnew System::Windows::Forms::TextBox());
			this->TB_Référence = (gcnew System::Windows::Forms::TextBox());
			this->NUD_idCommande = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_idCommande = (gcnew System::Windows::Forms::Label());
			this->B_load = (gcnew System::Windows::Forms::Button());
			this->B_insert = (gcnew System::Windows::Forms::Button());
			this->B_update = (gcnew System::Windows::Forms::Button());
			this->B_delete = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->GB_livraison = (gcnew System::Windows::Forms::GroupBox());
			this->L_jour = (gcnew System::Windows::Forms::Label());
			this->L_annee = (gcnew System::Windows::Forms::Label());
			this->NUD_jourL = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUD_anneeL = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_mois = (gcnew System::Windows::Forms::Label());
			this->NUD_moisL = (gcnew System::Windows::Forms::NumericUpDown());
			this->GB_emission = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NUD_jourE = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUD_anneeE = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NUD_moisE = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Commande))->BeginInit();
			this->GB_Commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->GB_livraison->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_jourL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_anneeL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_moisL))->BeginInit();
			this->GB_emission->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_jourE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_anneeE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_moisE))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_Commande
			// 
			this->DGV_Commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Commande->Location = System::Drawing::Point(13, 13);
			this->DGV_Commande->Name = L"DGV_Commande";
			this->DGV_Commande->Size = System::Drawing::Size(1205, 285);
			this->DGV_Commande->TabIndex = 0;
			this->DGV_Commande->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionCommandeForm::dataGridView1_CellContentClick);
			// 
			// GB_Commande
			// 
			this->GB_Commande->Controls->Add(this->GB_emission);
			this->GB_Commande->Controls->Add(this->GB_livraison);
			this->GB_Commande->Controls->Add(this->NUD_IdClient);
			this->GB_Commande->Controls->Add(this->L_IdClient);
			this->GB_Commande->Controls->Add(this->TB_MontantTTC);
			this->GB_Commande->Controls->Add(this->TB_MontantHT);
			this->GB_Commande->Controls->Add(this->TB_Référence);
			this->GB_Commande->Controls->Add(this->NUD_idCommande);
			this->GB_Commande->Controls->Add(this->L_idCommande);
			this->GB_Commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Commande->Location = System::Drawing::Point(268, 304);
			this->GB_Commande->Name = L"GB_Commande";
			this->GB_Commande->Size = System::Drawing::Size(702, 178);
			this->GB_Commande->TabIndex = 1;
			this->GB_Commande->TabStop = false;
			this->GB_Commande->Text = L"Commande";
			this->GB_Commande->Enter += gcnew System::EventHandler(this, &GestionCommandeForm::GB_Commande_Enter);
			// 
			// NUD_IdClient
			// 
			this->NUD_IdClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_IdClient->Location = System::Drawing::Point(66, 80);
			this->NUD_IdClient->Name = L"NUD_IdClient";
			this->NUD_IdClient->Size = System::Drawing::Size(111, 22);
			this->NUD_IdClient->TabIndex = 20;
			this->NUD_IdClient->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_IdClient_ValueChanged);
			// 
			// L_IdClient
			// 
			this->L_IdClient->AutoSize = true;
			this->L_IdClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_IdClient->Location = System::Drawing::Point(6, 82);
			this->L_IdClient->Name = L"L_IdClient";
			this->L_IdClient->Size = System::Drawing::Size(54, 16);
			this->L_IdClient->TabIndex = 19;
			this->L_IdClient->Text = L"Id Client";
			this->L_IdClient->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_IdClient_Click);
			// 
			// TB_MontantTTC
			// 
			this->TB_MontantTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_MontantTTC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_MontantTTC->Location = System::Drawing::Point(9, 136);
			this->TB_MontantTTC->Name = L"TB_MontantTTC";
			this->TB_MontantTTC->Size = System::Drawing::Size(199, 22);
			this->TB_MontantTTC->TabIndex = 18;
			this->TB_MontantTTC->Text = L"Montant toutes taxes comprise";
			this->TB_MontantTTC->TextChanged += gcnew System::EventHandler(this, &GestionCommandeForm::TB_MontantTTC_TextChanged);
			// 
			// TB_MontantHT
			// 
			this->TB_MontantHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_MontantHT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_MontantHT->Location = System::Drawing::Point(9, 108);
			this->TB_MontantHT->Name = L"TB_MontantHT";
			this->TB_MontantHT->Size = System::Drawing::Size(199, 22);
			this->TB_MontantHT->TabIndex = 17;
			this->TB_MontantHT->Text = L"Montant hors taxe";
			this->TB_MontantHT->TextChanged += gcnew System::EventHandler(this, &GestionCommandeForm::TB_MontantHT_TextChanged);
			// 
			// TB_Référence
			// 
			this->TB_Référence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Référence->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_Référence->Location = System::Drawing::Point(9, 53);
			this->TB_Référence->Name = L"TB_Référence";
			this->TB_Référence->Size = System::Drawing::Size(199, 22);
			this->TB_Référence->TabIndex = 12;
			this->TB_Référence->Text = L"Référence";
			this->TB_Référence->TextChanged += gcnew System::EventHandler(this, &GestionCommandeForm::TB_Référence_TextChanged);
			// 
			// NUD_idCommande
			// 
			this->NUD_idCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_idCommande->Location = System::Drawing::Point(103, 29);
			this->NUD_idCommande->Name = L"NUD_idCommande";
			this->NUD_idCommande->Size = System::Drawing::Size(105, 22);
			this->NUD_idCommande->TabIndex = 11;
			this->NUD_idCommande->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_idCommande_ValueChanged);
			// 
			// L_idCommande
			// 
			this->L_idCommande->AutoSize = true;
			this->L_idCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_idCommande->Location = System::Drawing::Point(6, 31);
			this->L_idCommande->Name = L"L_idCommande";
			this->L_idCommande->Size = System::Drawing::Size(91, 16);
			this->L_idCommande->TabIndex = 6;
			this->L_idCommande->Text = L"Id Commande";
			this->L_idCommande->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_idCommande_Click);
			// 
			// B_load
			// 
			this->B_load->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_load->Location = System::Drawing::Point(12, 304);
			this->B_load->Name = L"B_load";
			this->B_load->Size = System::Drawing::Size(95, 178);
			this->B_load->TabIndex = 9;
			this->B_load->Text = L"Charger";
			this->B_load->UseVisualStyleBackColor = true;
			this->B_load->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_load_Click);
			// 
			// B_insert
			// 
			this->B_insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_insert->Location = System::Drawing::Point(114, 304);
			this->B_insert->Name = L"B_insert";
			this->B_insert->Size = System::Drawing::Size(134, 51);
			this->B_insert->TabIndex = 10;
			this->B_insert->Text = L"Insérer";
			this->B_insert->UseVisualStyleBackColor = true;
			this->B_insert->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_insert_Click);
			// 
			// B_update
			// 
			this->B_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_update->Location = System::Drawing::Point(114, 369);
			this->B_update->Name = L"B_update";
			this->B_update->Size = System::Drawing::Size(134, 50);
			this->B_update->TabIndex = 11;
			this->B_update->Text = L"Modifier";
			this->B_update->UseVisualStyleBackColor = true;
			this->B_update->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_update_Click);
			// 
			// B_delete
			// 
			this->B_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_delete->Location = System::Drawing::Point(114, 433);
			this->B_delete->Name = L"B_delete";
			this->B_delete->Size = System::Drawing::Size(134, 49);
			this->B_delete->TabIndex = 12;
			this->B_delete->Text = L"Supprimer";
			this->B_delete->UseVisualStyleBackColor = true;
			this->B_delete->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_delete_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(985, 304);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(232, 178);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 24;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &GestionCommandeForm::Logo_Click);
			// 
			// GB_livraison
			// 
			this->GB_livraison->Controls->Add(this->L_jour);
			this->GB_livraison->Controls->Add(this->L_annee);
			this->GB_livraison->Controls->Add(this->NUD_jourL);
			this->GB_livraison->Controls->Add(this->NUD_anneeL);
			this->GB_livraison->Controls->Add(this->L_mois);
			this->GB_livraison->Controls->Add(this->NUD_moisL);
			this->GB_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_livraison->Location = System::Drawing::Point(238, 31);
			this->GB_livraison->Name = L"GB_livraison";
			this->GB_livraison->Size = System::Drawing::Size(200, 119);
			this->GB_livraison->TabIndex = 31;
			this->GB_livraison->TabStop = false;
			this->GB_livraison->Text = L"Date de livraison";
			this->GB_livraison->Enter += gcnew System::EventHandler(this, &GestionCommandeForm::GB_livraison_Enter);
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
			this->L_jour->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_jour_Click);
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
			this->L_annee->Text = L"Année";
			this->L_annee->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_annee_Click);
			// 
			// NUD_jourL
			// 
			this->NUD_jourL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_jourL->Location = System::Drawing::Point(64, 25);
			this->NUD_jourL->Margin = System::Windows::Forms::Padding(2);
			this->NUD_jourL->Name = L"NUD_jourL";
			this->NUD_jourL->Size = System::Drawing::Size(116, 22);
			this->NUD_jourL->TabIndex = 23;
			this->NUD_jourL->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_jourL_ValueChanged);
			// 
			// NUD_anneeL
			// 
			this->NUD_anneeL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_anneeL->Location = System::Drawing::Point(64, 82);
			this->NUD_anneeL->Margin = System::Windows::Forms::Padding(2);
			this->NUD_anneeL->Name = L"NUD_anneeL";
			this->NUD_anneeL->Size = System::Drawing::Size(116, 22);
			this->NUD_anneeL->TabIndex = 26;
			this->NUD_anneeL->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_anneeL_ValueChanged);
			// 
			// L_mois
			// 
			this->L_mois->AutoSize = true;
			this->L_mois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_mois->Location = System::Drawing::Point(9, 56);
			this->L_mois->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->L_mois->Name = L"L_mois";
			this->L_mois->Size = System::Drawing::Size(36, 16);
			this->L_mois->TabIndex = 28;
			this->L_mois->Text = L"Mois";
			this->L_mois->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_mois_Click);
			// 
			// NUD_moisL
			// 
			this->NUD_moisL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_moisL->Location = System::Drawing::Point(64, 54);
			this->NUD_moisL->Margin = System::Windows::Forms::Padding(2);
			this->NUD_moisL->Name = L"NUD_moisL";
			this->NUD_moisL->Size = System::Drawing::Size(116, 22);
			this->NUD_moisL->TabIndex = 24;
			this->NUD_moisL->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_moisL_ValueChanged);
			// 
			// GB_emission
			// 
			this->GB_emission->Controls->Add(this->label1);
			this->GB_emission->Controls->Add(this->label2);
			this->GB_emission->Controls->Add(this->NUD_jourE);
			this->GB_emission->Controls->Add(this->NUD_anneeE);
			this->GB_emission->Controls->Add(this->label3);
			this->GB_emission->Controls->Add(this->NUD_moisE);
			this->GB_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GB_emission->Location = System::Drawing::Point(468, 31);
			this->GB_emission->Name = L"GB_emission";
			this->GB_emission->Size = System::Drawing::Size(200, 119);
			this->GB_emission->TabIndex = 32;
			this->GB_emission->TabStop = false;
			this->GB_emission->Text = L"Date d\'emission";
			this->GB_emission->Enter += gcnew System::EventHandler(this, &GestionCommandeForm::GB_emission_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 27);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Jour";
			this->label1->Click += gcnew System::EventHandler(this, &GestionCommandeForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 82);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Année";
			this->label2->Click += gcnew System::EventHandler(this, &GestionCommandeForm::label2_Click);
			// 
			// NUD_jourE
			// 
			this->NUD_jourE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_jourE->Location = System::Drawing::Point(64, 25);
			this->NUD_jourE->Margin = System::Windows::Forms::Padding(2);
			this->NUD_jourE->Name = L"NUD_jourE";
			this->NUD_jourE->Size = System::Drawing::Size(116, 22);
			this->NUD_jourE->TabIndex = 23;
			this->NUD_jourE->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_jourE_ValueChanged);
			// 
			// NUD_anneeE
			// 
			this->NUD_anneeE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_anneeE->Location = System::Drawing::Point(64, 82);
			this->NUD_anneeE->Margin = System::Windows::Forms::Padding(2);
			this->NUD_anneeE->Name = L"NUD_anneeE";
			this->NUD_anneeE->Size = System::Drawing::Size(116, 22);
			this->NUD_anneeE->TabIndex = 26;
			this->NUD_anneeE->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_anneeE_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 56);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 16);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Mois";
			this->label3->Click += gcnew System::EventHandler(this, &GestionCommandeForm::label3_Click);
			// 
			// NUD_moisE
			// 
			this->NUD_moisE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_moisE->Location = System::Drawing::Point(64, 54);
			this->NUD_moisE->Margin = System::Windows::Forms::Padding(2);
			this->NUD_moisE->Name = L"NUD_moisE";
			this->NUD_moisE->Size = System::Drawing::Size(116, 22);
			this->NUD_moisE->TabIndex = 24;
			this->NUD_moisE->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeForm::NUD_moisE_ValueChanged);
			// 
			// GestionCommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1229, 492);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->B_delete);
			this->Controls->Add(this->B_update);
			this->Controls->Add(this->B_insert);
			this->Controls->Add(this->B_load);
			this->Controls->Add(this->GB_Commande);
			this->Controls->Add(this->DGV_Commande);
			this->Name = L"GestionCommandeForm";
			this->Text = L"GestionCommandeForm";
			this->Load += gcnew System::EventHandler(this, &GestionCommandeForm::GestionCommandeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Commande))->EndInit();
			this->GB_Commande->ResumeLayout(false);
			this->GB_Commande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdClient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->GB_livraison->ResumeLayout(false);
			this->GB_livraison->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_jourL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_anneeL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_moisL))->EndInit();
			this->GB_emission->ResumeLayout(false);
			this->GB_emission->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_jourE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_anneeE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_moisE))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionCommandeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_Commande_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_idCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_idCommande_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_Référence_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_MontantHT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_MontantTTC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_DateLivraison_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_DateEmission_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MC_DateLivraison_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void MC_DateEmission_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void B_load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_Commande->Refresh();
		this->oSvc = gcnew commandeServices();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("Rsl");
		this->DGV_Commande->DataSource = this->oDs;
		this->DGV_Commande->DataMember = "Rsl";
	}
	private: System::Void B_insert_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew commandeServices();
		this->oSvc->ajouterUneCommande(this->NUD_IdClient->Text, this->TB_Référence->Text, System::Convert::ToString(this->MC_DateLivraison->SelectionStart), System::Convert::ToString(this->MC_DateEmission->SelectionStart), this->TB_MontantHT->Text, this->TB_MontantTTC->Text);
	}
	private: System::Void B_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew commandeServices();
		this->oSvc->modifierUneCommande(this->NUD_IdClient->Text, this->TB_Référence->Text, System::Convert::ToString(this->MC_DateLivraison->SelectionStart), System::Convert::ToString(this->MC_DateEmission->SelectionStart), this->TB_MontantHT->Text, this->TB_MontantTTC->Text, this->NUD_idCommande->Text);
	}
	private: System::Void B_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew commandeServices();
		this->oSvc->supprimerUneCommande(this->NUD_idCommande->Text);
	}
	private: System::Void L_IdClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_IdClient_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_livraison_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_jourL_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_jour_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_mois_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_moisL_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_annee_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_anneeL_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_emission_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_jourE_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_moisE_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_anneeE_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
