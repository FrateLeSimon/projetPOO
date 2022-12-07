#pragma once
#include "GestionPersonnelForm.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStatForm
	/// </summary>
	public ref class GestionStatForm : public System::Windows::Forms::Form
	{
	public:
		GestionStatForm(void)
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
		~GestionStatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGV_BDD;






	private: System::Windows::Forms::GroupBox^ GB_stat;
	private: System::Windows::Forms::Button^ B_Panier;
	private: System::Windows::Forms::NumericUpDown^ NUD_ChoixMois;


	private: System::Windows::Forms::Label^ L_ChoixMois;


	private: System::Windows::Forms::Button^ B_Chiffre;
	private: System::Windows::Forms::Button^ B_VachatStock;
	private: System::Windows::Forms::Button^ B_VCommerciale;
	private: System::Windows::Forms::Button^ B_T10Moins;
	private: System::Windows::Forms::Button^ B_T10Plus;
	private: System::Windows::Forms::NumericUpDown^ NUD_IdClientMontant;
	private: System::Windows::Forms::Label^ L_IdclientMontant;
	private: System::Windows::Forms::Button^ B_MontantTotalAchat;

	private: System::Windows::Forms::Button^ B_seuil;
	private: System::Windows::Forms::Label^ L_TVA;
	private: System::Windows::Forms::ComboBox^ CB_TVA;



	private: statsServices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ L_ChoixAnnee;
	private: System::Windows::Forms::NumericUpDown^ NUD_ChoixAnnee;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DGV_BDD = (gcnew System::Windows::Forms::DataGridView());
			this->GB_stat = (gcnew System::Windows::Forms::GroupBox());
			this->NUD_ChoixAnnee = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_ChoixAnnee = (gcnew System::Windows::Forms::Label());
			this->L_TVA = (gcnew System::Windows::Forms::Label());
			this->CB_TVA = (gcnew System::Windows::Forms::ComboBox());
			this->B_VachatStock = (gcnew System::Windows::Forms::Button());
			this->B_VCommerciale = (gcnew System::Windows::Forms::Button());
			this->B_T10Moins = (gcnew System::Windows::Forms::Button());
			this->B_T10Plus = (gcnew System::Windows::Forms::Button());
			this->NUD_IdClientMontant = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_IdclientMontant = (gcnew System::Windows::Forms::Label());
			this->B_MontantTotalAchat = (gcnew System::Windows::Forms::Button());
			this->B_seuil = (gcnew System::Windows::Forms::Button());
			this->B_Chiffre = (gcnew System::Windows::Forms::Button());
			this->B_Panier = (gcnew System::Windows::Forms::Button());
			this->NUD_ChoixMois = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_ChoixMois = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->BeginInit();
			this->GB_stat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixAnnee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdClientMontant))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixMois))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_BDD
			// 
			this->DGV_BDD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_BDD->Location = System::Drawing::Point(16, 15);
			this->DGV_BDD->Margin = System::Windows::Forms::Padding(4);
			this->DGV_BDD->Name = L"DGV_BDD";
			this->DGV_BDD->RowHeadersWidth = 51;
			this->DGV_BDD->Size = System::Drawing::Size(519, 446);
			this->DGV_BDD->TabIndex = 6;
			this->DGV_BDD->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionStatForm::DGV_BDD_CellContentClick);
			// 
			// GB_stat
			// 
			this->GB_stat->Controls->Add(this->NUD_ChoixAnnee);
			this->GB_stat->Controls->Add(this->L_ChoixAnnee);
			this->GB_stat->Controls->Add(this->L_TVA);
			this->GB_stat->Controls->Add(this->CB_TVA);
			this->GB_stat->Controls->Add(this->B_VachatStock);
			this->GB_stat->Controls->Add(this->B_VCommerciale);
			this->GB_stat->Controls->Add(this->B_T10Moins);
			this->GB_stat->Controls->Add(this->B_T10Plus);
			this->GB_stat->Controls->Add(this->NUD_IdClientMontant);
			this->GB_stat->Controls->Add(this->L_IdclientMontant);
			this->GB_stat->Controls->Add(this->B_MontantTotalAchat);
			this->GB_stat->Controls->Add(this->B_seuil);
			this->GB_stat->Controls->Add(this->B_Chiffre);
			this->GB_stat->Controls->Add(this->B_Panier);
			this->GB_stat->Controls->Add(this->NUD_ChoixMois);
			this->GB_stat->Controls->Add(this->L_ChoixMois);
			this->GB_stat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_stat->Location = System::Drawing::Point(543, 15);
			this->GB_stat->Margin = System::Windows::Forms::Padding(4);
			this->GB_stat->Name = L"GB_stat";
			this->GB_stat->Padding = System::Windows::Forms::Padding(4);
			this->GB_stat->Size = System::Drawing::Size(671, 446);
			this->GB_stat->TabIndex = 23;
			this->GB_stat->TabStop = false;
			this->GB_stat->Text = L"Statistique";
			this->GB_stat->Enter += gcnew System::EventHandler(this, &GestionStatForm::GB_stat_Enter);
			// 
			// NUD_ChoixAnnee
			// 
			this->NUD_ChoixAnnee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_ChoixAnnee->Location = System::Drawing::Point(268, 122);
			this->NUD_ChoixAnnee->Margin = System::Windows::Forms::Padding(4);
			this->NUD_ChoixAnnee->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			this->NUD_ChoixAnnee->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1945, 0, 0, 0 });
			this->NUD_ChoixAnnee->Name = L"NUD_ChoixAnnee";
			this->NUD_ChoixAnnee->Size = System::Drawing::Size(88, 26);
			this->NUD_ChoixAnnee->TabIndex = 24;
			this->NUD_ChoixAnnee->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->NUD_ChoixAnnee->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_ChoixAnne_ValueChanged);
			// 
			// L_ChoixAnnee
			// 
			this->L_ChoixAnnee->AutoSize = true;
			this->L_ChoixAnnee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ChoixAnnee->Location = System::Drawing::Point(264, 98);
			this->L_ChoixAnnee->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ChoixAnnee->Name = L"L_ChoixAnnee";
			this->L_ChoixAnnee->Size = System::Drawing::Size(56, 20);
			this->L_ChoixAnnee->TabIndex = 23;
			this->L_ChoixAnnee->Text = L"Annee";
			this->L_ChoixAnnee->Click += gcnew System::EventHandler(this, &GestionStatForm::label1_Click);
			// 
			// L_TVA
			// 
			this->L_TVA->AutoSize = true;
			this->L_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_TVA->Location = System::Drawing::Point(8, 298);
			this->L_TVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_TVA->Name = L"L_TVA";
			this->L_TVA->Size = System::Drawing::Size(41, 20);
			this->L_TVA->TabIndex = 22;
			this->L_TVA->Text = L"TVA";
			this->L_TVA->Click += gcnew System::EventHandler(this, &GestionStatForm::L_TVA_Click);
			// 
			// CB_TVA
			// 
			this->CB_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_TVA->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_TVA->FormattingEnabled = true;
			this->CB_TVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5.5", L"10", L"20" });
			this->CB_TVA->Location = System::Drawing::Point(8, 321);
			this->CB_TVA->Margin = System::Windows::Forms::Padding(4);
			this->CB_TVA->Name = L"CB_TVA";
			this->CB_TVA->Size = System::Drawing::Size(196, 28);
			this->CB_TVA->TabIndex = 21;
			this->CB_TVA->Text = L"TVA";
			this->CB_TVA->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_TVA_SelectedIndexChanged);
			// 
			// B_VachatStock
			// 
			this->B_VachatStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_VachatStock->Location = System::Drawing::Point(352, 224);
			this->B_VachatStock->Margin = System::Windows::Forms::Padding(4);
			this->B_VachatStock->Name = L"B_VachatStock";
			this->B_VachatStock->Size = System::Drawing::Size(301, 57);
			this->B_VachatStock->TabIndex = 20;
			this->B_VachatStock->Text = L"Valeur d\'achat du stock";
			this->B_VachatStock->UseVisualStyleBackColor = true;
			this->B_VachatStock->Click += gcnew System::EventHandler(this, &GestionStatForm::B_VachatStock_Click);
			// 
			// B_VCommerciale
			// 
			this->B_VCommerciale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_VCommerciale->Location = System::Drawing::Point(9, 225);
			this->B_VCommerciale->Margin = System::Windows::Forms::Padding(4);
			this->B_VCommerciale->Name = L"B_VCommerciale";
			this->B_VCommerciale->Size = System::Drawing::Size(277, 56);
			this->B_VCommerciale->TabIndex = 19;
			this->B_VCommerciale->Text = L"Valeur commerciale du stock";
			this->B_VCommerciale->UseVisualStyleBackColor = true;
			this->B_VCommerciale->Click += gcnew System::EventHandler(this, &GestionStatForm::B_VCommerciale_Click);
			// 
			// B_T10Moins
			// 
			this->B_T10Moins->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_T10Moins->Location = System::Drawing::Point(465, 32);
			this->B_T10Moins->Margin = System::Windows::Forms::Padding(4);
			this->B_T10Moins->Name = L"B_T10Moins";
			this->B_T10Moins->Size = System::Drawing::Size(188, 86);
			this->B_T10Moins->TabIndex = 18;
			this->B_T10Moins->Text = L"Top 10 - vendu";
			this->B_T10Moins->UseVisualStyleBackColor = true;
			this->B_T10Moins->Click += gcnew System::EventHandler(this, &GestionStatForm::B_T10Moins_Click);
			// 
			// B_T10Plus
			// 
			this->B_T10Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_T10Plus->Location = System::Drawing::Point(465, 128);
			this->B_T10Plus->Margin = System::Windows::Forms::Padding(4);
			this->B_T10Plus->Name = L"B_T10Plus";
			this->B_T10Plus->Size = System::Drawing::Size(188, 89);
			this->B_T10Plus->TabIndex = 17;
			this->B_T10Plus->Text = L"Top 10 + vendu";
			this->B_T10Plus->UseVisualStyleBackColor = true;
			this->B_T10Plus->Click += gcnew System::EventHandler(this, &GestionStatForm::B_T10Plus_Click);
			// 
			// NUD_IdClientMontant
			// 
			this->NUD_IdClientMontant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NUD_IdClientMontant->Location = System::Drawing::Point(307, 171);
			this->NUD_IdClientMontant->Margin = System::Windows::Forms::Padding(4);
			this->NUD_IdClientMontant->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_IdClientMontant->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_IdClientMontant->Name = L"NUD_IdClientMontant";
			this->NUD_IdClientMontant->Size = System::Drawing::Size(89, 26);
			this->NUD_IdClientMontant->TabIndex = 16;
			this->NUD_IdClientMontant->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_IdClientMontant->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_IdClientMontant_ValueChanged);
			// 
			// L_IdclientMontant
			// 
			this->L_IdclientMontant->AutoSize = true;
			this->L_IdclientMontant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_IdclientMontant->Location = System::Drawing::Point(205, 178);
			this->L_IdclientMontant->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_IdclientMontant->Name = L"L_IdclientMontant";
			this->L_IdclientMontant->Size = System::Drawing::Size(90, 20);
			this->L_IdclientMontant->TabIndex = 15;
			this->L_IdclientMontant->Text = L"Id du client";
			this->L_IdclientMontant->Click += gcnew System::EventHandler(this, &GestionStatForm::L_IdclientMontant_Click);
			// 
			// B_MontantTotalAchat
			// 
			this->B_MontantTotalAchat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->B_MontantTotalAchat->Location = System::Drawing::Point(9, 160);
			this->B_MontantTotalAchat->Margin = System::Windows::Forms::Padding(4);
			this->B_MontantTotalAchat->Name = L"B_MontantTotalAchat";
			this->B_MontantTotalAchat->Size = System::Drawing::Size(188, 57);
			this->B_MontantTotalAchat->TabIndex = 14;
			this->B_MontantTotalAchat->Text = L"Montant total des achats";
			this->B_MontantTotalAchat->UseVisualStyleBackColor = true;
			this->B_MontantTotalAchat->Click += gcnew System::EventHandler(this, &GestionStatForm::B_MontantTotalAchat_Click);
			// 
			// B_seuil
			// 
			this->B_seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_seuil->Location = System::Drawing::Point(448, 298);
			this->B_seuil->Margin = System::Windows::Forms::Padding(4);
			this->B_seuil->Name = L"B_seuil";
			this->B_seuil->Size = System::Drawing::Size(205, 57);
			this->B_seuil->TabIndex = 13;
			this->B_seuil->Text = L"Seuil de réapprovisionement";
			this->B_seuil->UseVisualStyleBackColor = true;
			this->B_seuil->Click += gcnew System::EventHandler(this, &GestionStatForm::B_seuil_Click);
			// 
			// B_Chiffre
			// 
			this->B_Chiffre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Chiffre->Location = System::Drawing::Point(9, 96);
			this->B_Chiffre->Margin = System::Windows::Forms::Padding(4);
			this->B_Chiffre->Name = L"B_Chiffre";
			this->B_Chiffre->Size = System::Drawing::Size(147, 57);
			this->B_Chiffre->TabIndex = 12;
			this->B_Chiffre->Text = L"Chiffre d\'affaires";
			this->B_Chiffre->UseVisualStyleBackColor = true;
			this->B_Chiffre->Click += gcnew System::EventHandler(this, &GestionStatForm::B_Chiffre_Click);
			// 
			// B_Panier
			// 
			this->B_Panier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Panier->Location = System::Drawing::Point(9, 32);
			this->B_Panier->Margin = System::Windows::Forms::Padding(4);
			this->B_Panier->Name = L"B_Panier";
			this->B_Panier->Size = System::Drawing::Size(387, 57);
			this->B_Panier->TabIndex = 11;
			this->B_Panier->Text = L"Panier moyen (aprés remise)";
			this->B_Panier->UseVisualStyleBackColor = true;
			this->B_Panier->Click += gcnew System::EventHandler(this, &GestionStatForm::B_Panier_Click);
			// 
			// NUD_ChoixMois
			// 
			this->NUD_ChoixMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_ChoixMois->Location = System::Drawing::Point(168, 122);
			this->NUD_ChoixMois->Margin = System::Windows::Forms::Padding(4);
			this->NUD_ChoixMois->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_ChoixMois->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_ChoixMois->Name = L"NUD_ChoixMois";
			this->NUD_ChoixMois->Size = System::Drawing::Size(88, 26);
			this->NUD_ChoixMois->TabIndex = 10;
			this->NUD_ChoixMois->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_ChoixMois->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_ChoixMois_ValueChanged);
			// 
			// L_ChoixMois
			// 
			this->L_ChoixMois->AutoSize = true;
			this->L_ChoixMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ChoixMois->Location = System::Drawing::Point(164, 98);
			this->L_ChoixMois->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->L_ChoixMois->Name = L"L_ChoixMois";
			this->L_ChoixMois->Size = System::Drawing::Size(92, 20);
			this->L_ChoixMois->TabIndex = 5;
			this->L_ChoixMois->Text = L"N° du mois";
			this->L_ChoixMois->Click += gcnew System::EventHandler(this, &GestionStatForm::L_ChoixMois_Click);
			// 
			// GestionStatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1229, 475);
			this->Controls->Add(this->GB_stat);
			this->Controls->Add(this->DGV_BDD);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionStatForm";
			this->Text = L"GestionStatForm";
			this->Load += gcnew System::EventHandler(this, &GestionStatForm::GestionStatForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->EndInit();
			this->GB_stat->ResumeLayout(false);
			this->GB_stat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixAnnee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdClientMontant))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixMois))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GB_client_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DGV_BDD_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void GB_stat_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_VCommerciale_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		if (this->CB_TVA->Text == "TVA") {
			this->oDs = this->oSvc->selectionnerValComStock("Rsl");
		}
		else {
			this->oDs = this->oSvc->selectionnerSimulation("Rsl", System::Convert::ToString(this->CB_TVA->Text));
		}
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void GestionStatForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_Panier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerPanierMoyen("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}

	private: System::Void B_Chiffre_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerChiffreAffaire("Rsl", System::Convert::ToString(this->NUD_ChoixMois->Value), System::Convert::ToString(this->NUD_ChoixAnnee->Value));
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void L_ChoixMois_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_ChoixMois_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_MontantTotalAchat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerMontantTotalAchat("Rsl", System::Convert::ToString(this->NUD_IdClientMontant->Value));
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void L_IdclientMontant_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_IdClientMontant_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_T10Plus_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerArticlePlusVendu("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";

	}
	private: System::Void B_T10Moins_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerArticleMoinsVendu("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void B_seuil_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerSeuilAppro("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void B_VachatStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DGV_BDD->Refresh();
		this->oSvc = gcnew statsServices();
		this->oDs = this->oSvc->selectionnerValAchatStock("Rsl");
		this->DGV_BDD->DataSource = this->oDs;
		this->DGV_BDD->DataMember = "Rsl";
	}
	private: System::Void L_TVA_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_TVA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_marge_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_marge_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_remise_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_remise_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_démarque_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_démarque_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Logo_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logo_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_ChoixAnne_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
