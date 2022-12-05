#pragma once

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
	private: System::Windows::Forms::ComboBox^ CB_démarque;
	private: System::Windows::Forms::Label^ L_démarque;
	private: System::Windows::Forms::ComboBox^ CB_remise;
	private: System::Windows::Forms::Label^ L_remise;
	private: System::Windows::Forms::ComboBox^ CB_marge;
	private: System::Windows::Forms::Label^ L_marge;







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
			this->CB_démarque = (gcnew System::Windows::Forms::ComboBox());
			this->L_démarque = (gcnew System::Windows::Forms::Label());
			this->CB_remise = (gcnew System::Windows::Forms::ComboBox());
			this->L_remise = (gcnew System::Windows::Forms::Label());
			this->CB_marge = (gcnew System::Windows::Forms::ComboBox());
			this->L_marge = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdClientMontant))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixMois))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_BDD
			// 
			this->DGV_BDD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_BDD->Location = System::Drawing::Point(12, 12);
			this->DGV_BDD->Name = L"DGV_BDD";
			this->DGV_BDD->Size = System::Drawing::Size(389, 362);
			this->DGV_BDD->TabIndex = 6;
			this->DGV_BDD->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionStatForm::DGV_BDD_CellContentClick);
			// 
			// GB_stat
			// 
			this->GB_stat->Controls->Add(this->CB_démarque);
			this->GB_stat->Controls->Add(this->L_démarque);
			this->GB_stat->Controls->Add(this->CB_remise);
			this->GB_stat->Controls->Add(this->L_remise);
			this->GB_stat->Controls->Add(this->CB_marge);
			this->GB_stat->Controls->Add(this->L_marge);
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
			this->GB_stat->Location = System::Drawing::Point(407, 12);
			this->GB_stat->Name = L"GB_stat";
			this->GB_stat->Size = System::Drawing::Size(503, 362);
			this->GB_stat->TabIndex = 23;
			this->GB_stat->TabStop = false;
			this->GB_stat->Text = L"Statistique";
			this->GB_stat->Enter += gcnew System::EventHandler(this, &GestionStatForm::GB_stat_Enter);
			// 
			// CB_démarque
			// 
			this->CB_démarque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_démarque->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_démarque->FormattingEnabled = true;
			this->CB_démarque->Location = System::Drawing::Point(200, 321);
			this->CB_démarque->Name = L"CB_démarque";
			this->CB_démarque->Size = System::Drawing::Size(148, 24);
			this->CB_démarque->TabIndex = 28;
			this->CB_démarque->Text = L"Démarque";
			this->CB_démarque->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_démarque_SelectedIndexChanged);
			// 
			// L_démarque
			// 
			this->L_démarque->AutoSize = true;
			this->L_démarque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_démarque->Location = System::Drawing::Point(197, 300);
			this->L_démarque->Name = L"L_démarque";
			this->L_démarque->Size = System::Drawing::Size(71, 16);
			this->L_démarque->TabIndex = 27;
			this->L_démarque->Text = L"Démarque";
			this->L_démarque->Click += gcnew System::EventHandler(this, &GestionStatForm::L_démarque_Click);
			// 
			// CB_remise
			// 
			this->CB_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_remise->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_remise->FormattingEnabled = true;
			this->CB_remise->Location = System::Drawing::Point(6, 321);
			this->CB_remise->Name = L"CB_remise";
			this->CB_remise->Size = System::Drawing::Size(148, 24);
			this->CB_remise->TabIndex = 26;
			this->CB_remise->Text = L"Remise";
			this->CB_remise->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_remise_SelectedIndexChanged);
			// 
			// L_remise
			// 
			this->L_remise->AutoSize = true;
			this->L_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_remise->Location = System::Drawing::Point(6, 300);
			this->L_remise->Name = L"L_remise";
			this->L_remise->Size = System::Drawing::Size(54, 16);
			this->L_remise->TabIndex = 25;
			this->L_remise->Text = L"Remise";
			this->L_remise->Click += gcnew System::EventHandler(this, &GestionStatForm::L_remise_Click);
			// 
			// CB_marge
			// 
			this->CB_marge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_marge->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_marge->FormattingEnabled = true;
			this->CB_marge->Location = System::Drawing::Point(200, 261);
			this->CB_marge->Name = L"CB_marge";
			this->CB_marge->Size = System::Drawing::Size(148, 24);
			this->CB_marge->TabIndex = 24;
			this->CB_marge->Text = L"marge";
			this->CB_marge->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_marge_SelectedIndexChanged);
			// 
			// L_marge
			// 
			this->L_marge->AutoSize = true;
			this->L_marge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_marge->Location = System::Drawing::Point(198, 242);
			this->L_marge->Name = L"L_marge";
			this->L_marge->Size = System::Drawing::Size(46, 16);
			this->L_marge->TabIndex = 23;
			this->L_marge->Text = L"Marge";
			this->L_marge->Click += gcnew System::EventHandler(this, &GestionStatForm::L_marge_Click);
			// 
			// L_TVA
			// 
			this->L_TVA->AutoSize = true;
			this->L_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_TVA->Location = System::Drawing::Point(6, 242);
			this->L_TVA->Name = L"L_TVA";
			this->L_TVA->Size = System::Drawing::Size(34, 16);
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
			this->CB_TVA->Location = System::Drawing::Point(6, 261);
			this->CB_TVA->Name = L"CB_TVA";
			this->CB_TVA->Size = System::Drawing::Size(148, 24);
			this->CB_TVA->TabIndex = 21;
			this->CB_TVA->Text = L"TVA";
			this->CB_TVA->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_TVA_SelectedIndexChanged);
			// 
			// B_VachatStock
			// 
			this->B_VachatStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_VachatStock->Location = System::Drawing::Point(374, 247);
			this->B_VachatStock->Name = L"B_VachatStock";
			this->B_VachatStock->Size = System::Drawing::Size(116, 98);
			this->B_VachatStock->TabIndex = 20;
			this->B_VachatStock->Text = L"Valeur d\'achat du stock";
			this->B_VachatStock->UseVisualStyleBackColor = true;
			this->B_VachatStock->Click += gcnew System::EventHandler(this, &GestionStatForm::B_VachatStock_Click);
			// 
			// B_VCommerciale
			// 
			this->B_VCommerciale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_VCommerciale->Location = System::Drawing::Point(7, 182);
			this->B_VCommerciale->Name = L"B_VCommerciale";
			this->B_VCommerciale->Size = System::Drawing::Size(237, 46);
			this->B_VCommerciale->TabIndex = 19;
			this->B_VCommerciale->Text = L"Valeur commerciale du stock";
			this->B_VCommerciale->UseVisualStyleBackColor = true;
			this->B_VCommerciale->Click += gcnew System::EventHandler(this, &GestionStatForm::B_VCommerciale_Click);
			// 
			// B_T10Moins
			// 
			this->B_T10Moins->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_T10Moins->Location = System::Drawing::Point(349, 26);
			this->B_T10Moins->Name = L"B_T10Moins";
			this->B_T10Moins->Size = System::Drawing::Size(141, 70);
			this->B_T10Moins->TabIndex = 18;
			this->B_T10Moins->Text = L"Top 10 - vendu";
			this->B_T10Moins->UseVisualStyleBackColor = true;
			this->B_T10Moins->Click += gcnew System::EventHandler(this, &GestionStatForm::B_T10Moins_Click);
			// 
			// B_T10Plus
			// 
			this->B_T10Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_T10Plus->Location = System::Drawing::Point(349, 104);
			this->B_T10Plus->Name = L"B_T10Plus";
			this->B_T10Plus->Size = System::Drawing::Size(141, 72);
			this->B_T10Plus->TabIndex = 17;
			this->B_T10Plus->Text = L"Top 10 + vendu";
			this->B_T10Plus->UseVisualStyleBackColor = true;
			this->B_T10Plus->Click += gcnew System::EventHandler(this, &GestionStatForm::B_T10Plus_Click);
			// 
			// NUD_IdClientMontant
			// 
			this->NUD_IdClientMontant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NUD_IdClientMontant->Location = System::Drawing::Point(230, 139);
			this->NUD_IdClientMontant->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_IdClientMontant->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_IdClientMontant->Name = L"NUD_IdClientMontant";
			this->NUD_IdClientMontant->Size = System::Drawing::Size(67, 22);
			this->NUD_IdClientMontant->TabIndex = 16;
			this->NUD_IdClientMontant->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_IdClientMontant->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_IdClientMontant_ValueChanged);
			// 
			// L_IdclientMontant
			// 
			this->L_IdclientMontant->AutoSize = true;
			this->L_IdclientMontant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->L_IdclientMontant->Location = System::Drawing::Point(154, 145);
			this->L_IdclientMontant->Name = L"L_IdclientMontant";
			this->L_IdclientMontant->Size = System::Drawing::Size(70, 16);
			this->L_IdclientMontant->TabIndex = 15;
			this->L_IdclientMontant->Text = L"Id du client";
			this->L_IdclientMontant->Click += gcnew System::EventHandler(this, &GestionStatForm::L_IdclientMontant_Click);
			// 
			// B_MontantTotalAchat
			// 
			this->B_MontantTotalAchat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->B_MontantTotalAchat->Location = System::Drawing::Point(7, 130);
			this->B_MontantTotalAchat->Name = L"B_MontantTotalAchat";
			this->B_MontantTotalAchat->Size = System::Drawing::Size(141, 46);
			this->B_MontantTotalAchat->TabIndex = 14;
			this->B_MontantTotalAchat->Text = L"Montant total des achats";
			this->B_MontantTotalAchat->UseVisualStyleBackColor = true;
			this->B_MontantTotalAchat->Click += gcnew System::EventHandler(this, &GestionStatForm::B_MontantTotalAchat_Click);
			// 
			// B_seuil
			// 
			this->B_seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_seuil->Location = System::Drawing::Point(264, 182);
			this->B_seuil->Name = L"B_seuil";
			this->B_seuil->Size = System::Drawing::Size(226, 46);
			this->B_seuil->TabIndex = 13;
			this->B_seuil->Text = L"Seuil de réapprovisionement";
			this->B_seuil->UseVisualStyleBackColor = true;
			this->B_seuil->Click += gcnew System::EventHandler(this, &GestionStatForm::B_seuil_Click);
			// 
			// B_Chiffre
			// 
			this->B_Chiffre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Chiffre->Location = System::Drawing::Point(7, 78);
			this->B_Chiffre->Name = L"B_Chiffre";
			this->B_Chiffre->Size = System::Drawing::Size(110, 46);
			this->B_Chiffre->TabIndex = 12;
			this->B_Chiffre->Text = L"Chiffre d\'affaires";
			this->B_Chiffre->UseVisualStyleBackColor = true;
			this->B_Chiffre->Click += gcnew System::EventHandler(this, &GestionStatForm::B_Chiffre_Click);
			// 
			// B_Panier
			// 
			this->B_Panier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Panier->Location = System::Drawing::Point(7, 26);
			this->B_Panier->Name = L"B_Panier";
			this->B_Panier->Size = System::Drawing::Size(290, 46);
			this->B_Panier->TabIndex = 11;
			this->B_Panier->Text = L"Panier moyen (aprés remise)";
			this->B_Panier->UseVisualStyleBackColor = true;
			this->B_Panier->Click += gcnew System::EventHandler(this, &GestionStatForm::B_Panier_Click);
			// 
			// NUD_ChoixMois
			// 
			this->NUD_ChoixMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_ChoixMois->Location = System::Drawing::Point(200, 89);
			this->NUD_ChoixMois->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_ChoixMois->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_ChoixMois->Name = L"NUD_ChoixMois";
			this->NUD_ChoixMois->Size = System::Drawing::Size(97, 22);
			this->NUD_ChoixMois->TabIndex = 10;
			this->NUD_ChoixMois->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_ChoixMois->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_ChoixMois_ValueChanged);
			// 
			// L_ChoixMois
			// 
			this->L_ChoixMois->AutoSize = true;
			this->L_ChoixMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ChoixMois->Location = System::Drawing::Point(123, 91);
			this->L_ChoixMois->Name = L"L_ChoixMois";
			this->L_ChoixMois->Size = System::Drawing::Size(71, 16);
			this->L_ChoixMois->TabIndex = 5;
			this->L_ChoixMois->Text = L"N° du mois";
			this->L_ChoixMois->Click += gcnew System::EventHandler(this, &GestionStatForm::L_ChoixMois_Click);
			// 
			// GestionStatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(922, 386);
			this->Controls->Add(this->GB_stat);
			this->Controls->Add(this->DGV_BDD);
			this->Name = L"GestionStatForm";
			this->Text = L"GestionStatForm";
			this->Load += gcnew System::EventHandler(this, &GestionStatForm::GestionStatForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->EndInit();
			this->GB_stat->ResumeLayout(false);
			this->GB_stat->PerformLayout();
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
	}
	private: System::Void GestionStatForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_Panier_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_Chiffre_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_ChoixMois_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_ChoixMois_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_MontantTotalAchat_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_IdclientMontant_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_IdClientMontant_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_T10Plus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_T10Moins_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_seuil_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_VachatStock_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}

