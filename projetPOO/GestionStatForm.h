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
	private: System::Windows::Forms::GroupBox^ GB_Stat;

	private: System::Windows::Forms::Button^ B_CpanierMoy;

	private: System::Windows::Forms::Button^ B_Caffaire;
	private: System::Windows::Forms::Label^ L_ChoixMois;
	private: System::Windows::Forms::Button^ B_seuil;



	private: System::Windows::Forms::NumericUpDown^ NUD_ChoixMois;
	private: System::Windows::Forms::Button^ B_ComS;
	private: System::Windows::Forms::Button^ B_T10moins;
	private: System::Windows::Forms::Button^ B_T10plus;
	private: System::Windows::Forms::NumericUpDown^ NUD_idClient;





	private: System::Windows::Forms::Label^ L_choixClient;

	private: System::Windows::Forms::Button^ B_Montantachat;

	private: System::Windows::Forms::ComboBox^ CB_remise;
	private: System::Windows::Forms::ComboBox^ CB_démarque;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ CB_TVA;

	private: System::Windows::Forms::Label^ L_TVA;
	private: System::Windows::Forms::Label^ L_démarque;

	private: System::Windows::Forms::Label^ L_remise;

	private: System::Windows::Forms::Label^ CB_margeCo;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ B_achatS;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionStatForm::typeid));
			this->DGV_BDD = (gcnew System::Windows::Forms::DataGridView());
			this->GB_Stat = (gcnew System::Windows::Forms::GroupBox());
			this->L_démarque = (gcnew System::Windows::Forms::Label());
			this->L_remise = (gcnew System::Windows::Forms::Label());
			this->CB_margeCo = (gcnew System::Windows::Forms::Label());
			this->L_TVA = (gcnew System::Windows::Forms::Label());
			this->CB_remise = (gcnew System::Windows::Forms::ComboBox());
			this->CB_démarque = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->CB_TVA = (gcnew System::Windows::Forms::ComboBox());
			this->B_ComS = (gcnew System::Windows::Forms::Button());
			this->B_T10moins = (gcnew System::Windows::Forms::Button());
			this->B_T10plus = (gcnew System::Windows::Forms::Button());
			this->NUD_idClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_choixClient = (gcnew System::Windows::Forms::Label());
			this->B_Montantachat = (gcnew System::Windows::Forms::Button());
			this->B_seuil = (gcnew System::Windows::Forms::Button());
			this->NUD_ChoixMois = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_ChoixMois = (gcnew System::Windows::Forms::Label());
			this->B_Caffaire = (gcnew System::Windows::Forms::Button());
			this->B_CpanierMoy = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->B_achatS = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->BeginInit();
			this->GB_Stat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixMois))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_BDD
			// 
			this->DGV_BDD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_BDD->Location = System::Drawing::Point(12, 12);
			this->DGV_BDD->Name = L"DGV_BDD";
			this->DGV_BDD->Size = System::Drawing::Size(369, 179);
			this->DGV_BDD->TabIndex = 7;
			this->DGV_BDD->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionStatForm::DGV_BDD_CellContentClick);
			// 
			// GB_Stat
			// 
			this->GB_Stat->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->GB_Stat->Controls->Add(this->B_achatS);
			this->GB_Stat->Controls->Add(this->L_démarque);
			this->GB_Stat->Controls->Add(this->L_remise);
			this->GB_Stat->Controls->Add(this->CB_margeCo);
			this->GB_Stat->Controls->Add(this->L_TVA);
			this->GB_Stat->Controls->Add(this->CB_remise);
			this->GB_Stat->Controls->Add(this->CB_démarque);
			this->GB_Stat->Controls->Add(this->comboBox1);
			this->GB_Stat->Controls->Add(this->CB_TVA);
			this->GB_Stat->Controls->Add(this->B_ComS);
			this->GB_Stat->Controls->Add(this->B_T10moins);
			this->GB_Stat->Controls->Add(this->B_T10plus);
			this->GB_Stat->Controls->Add(this->NUD_idClient);
			this->GB_Stat->Controls->Add(this->L_choixClient);
			this->GB_Stat->Controls->Add(this->B_Montantachat);
			this->GB_Stat->Controls->Add(this->B_seuil);
			this->GB_Stat->Controls->Add(this->NUD_ChoixMois);
			this->GB_Stat->Controls->Add(this->L_ChoixMois);
			this->GB_Stat->Controls->Add(this->B_Caffaire);
			this->GB_Stat->Controls->Add(this->B_CpanierMoy);
			this->GB_Stat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Stat->Location = System::Drawing::Point(395, 12);
			this->GB_Stat->Name = L"GB_Stat";
			this->GB_Stat->Size = System::Drawing::Size(554, 359);
			this->GB_Stat->TabIndex = 8;
			this->GB_Stat->TabStop = false;
			this->GB_Stat->Text = L"Statistique";
			this->GB_Stat->Enter += gcnew System::EventHandler(this, &GestionStatForm::GB_Stat_Enter);
			// 
			// L_démarque
			// 
			this->L_démarque->AutoSize = true;
			this->L_démarque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_démarque->Location = System::Drawing::Point(405, 306);
			this->L_démarque->Name = L"L_démarque";
			this->L_démarque->Size = System::Drawing::Size(71, 16);
			this->L_démarque->TabIndex = 42;
			this->L_démarque->Text = L"Démarque";
			this->L_démarque->Click += gcnew System::EventHandler(this, &GestionStatForm::L_démarque_Click);
			// 
			// L_remise
			// 
			this->L_remise->AutoSize = true;
			this->L_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_remise->Location = System::Drawing::Point(405, 253);
			this->L_remise->Name = L"L_remise";
			this->L_remise->Size = System::Drawing::Size(54, 16);
			this->L_remise->TabIndex = 41;
			this->L_remise->Text = L"Remise";
			this->L_remise->Click += gcnew System::EventHandler(this, &GestionStatForm::L_remise_Click);
			// 
			// CB_margeCo
			// 
			this->CB_margeCo->AutoSize = true;
			this->CB_margeCo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_margeCo->Location = System::Drawing::Point(206, 306);
			this->CB_margeCo->Name = L"CB_margeCo";
			this->CB_margeCo->Size = System::Drawing::Size(127, 16);
			this->CB_margeCo->TabIndex = 40;
			this->CB_margeCo->Text = L"Marge commerciale";
			this->CB_margeCo->Click += gcnew System::EventHandler(this, &GestionStatForm::CB_margeCo_Click);
			// 
			// L_TVA
			// 
			this->L_TVA->AutoSize = true;
			this->L_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_TVA->Location = System::Drawing::Point(206, 253);
			this->L_TVA->Name = L"L_TVA";
			this->L_TVA->Size = System::Drawing::Size(34, 16);
			this->L_TVA->TabIndex = 39;
			this->L_TVA->Text = L"TVA";
			this->L_TVA->Click += gcnew System::EventHandler(this, &GestionStatForm::L_TVA_Click);
			// 
			// CB_remise
			// 
			this->CB_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_remise->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_remise->FormattingEnabled = true;
			this->CB_remise->Location = System::Drawing::Point(402, 272);
			this->CB_remise->Name = L"CB_remise";
			this->CB_remise->Size = System::Drawing::Size(134, 24);
			this->CB_remise->TabIndex = 38;
			this->CB_remise->Text = L"Remise";
			this->CB_remise->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_remise_SelectedIndexChanged);
			// 
			// CB_démarque
			// 
			this->CB_démarque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_démarque->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_démarque->FormattingEnabled = true;
			this->CB_démarque->Location = System::Drawing::Point(402, 325);
			this->CB_démarque->Name = L"CB_démarque";
			this->CB_démarque->Size = System::Drawing::Size(134, 24);
			this->CB_démarque->TabIndex = 37;
			this->CB_démarque->Text = L"Démarque";
			this->CB_démarque->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_démarque_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(203, 325);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 24);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->Text = L"Marge";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::comboBox1_SelectedIndexChanged);
			// 
			// CB_TVA
			// 
			this->CB_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_TVA->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_TVA->FormattingEnabled = true;
			this->CB_TVA->Location = System::Drawing::Point(203, 272);
			this->CB_TVA->Name = L"CB_TVA";
			this->CB_TVA->Size = System::Drawing::Size(138, 24);
			this->CB_TVA->TabIndex = 35;
			this->CB_TVA->Text = L"TVA";
			this->CB_TVA->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStatForm::CB_TVA_SelectedIndexChanged);
			// 
			// B_ComS
			// 
			this->B_ComS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_ComS->Location = System::Drawing::Point(373, 173);
			this->B_ComS->Name = L"B_ComS";
			this->B_ComS->Size = System::Drawing::Size(149, 47);
			this->B_ComS->TabIndex = 33;
			this->B_ComS->Text = L"Valeur commerciale du stock";
			this->B_ComS->UseVisualStyleBackColor = true;
			this->B_ComS->Click += gcnew System::EventHandler(this, &GestionStatForm::B_ComS_Click);
			// 
			// B_T10moins
			// 
			this->B_T10moins->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_T10moins->Location = System::Drawing::Point(351, 79);
			this->B_T10moins->Name = L"B_T10moins";
			this->B_T10moins->Size = System::Drawing::Size(185, 47);
			this->B_T10moins->TabIndex = 32;
			this->B_T10moins->Text = L"Top 10 articles les - vendu";
			this->B_T10moins->UseVisualStyleBackColor = true;
			this->B_T10moins->Click += gcnew System::EventHandler(this, &GestionStatForm::B_T10moins_Click);
			// 
			// B_T10plus
			// 
			this->B_T10plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_T10plus->Location = System::Drawing::Point(351, 26);
			this->B_T10plus->Name = L"B_T10plus";
			this->B_T10plus->Size = System::Drawing::Size(185, 47);
			this->B_T10plus->TabIndex = 31;
			this->B_T10plus->Text = L"Top 10 articles les + vendu";
			this->B_T10plus->UseVisualStyleBackColor = true;
			this->B_T10plus->Click += gcnew System::EventHandler(this, &GestionStatForm::B_T10plus_Click);
			// 
			// NUD_idClient
			// 
			this->NUD_idClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_idClient->Location = System::Drawing::Point(274, 198);
			this->NUD_idClient->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_idClient->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_idClient->Name = L"NUD_idClient";
			this->NUD_idClient->Size = System::Drawing::Size(46, 22);
			this->NUD_idClient->TabIndex = 30;
			this->NUD_idClient->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_idClient->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_idClient_ValueChanged);
			// 
			// L_choixClient
			// 
			this->L_choixClient->AutoSize = true;
			this->L_choixClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_choixClient->Location = System::Drawing::Point(176, 200);
			this->L_choixClient->Name = L"L_choixClient";
			this->L_choixClient->Size = System::Drawing::Size(92, 16);
			this->L_choixClient->TabIndex = 29;
			this->L_choixClient->Text = L"Choix du client";
			this->L_choixClient->Click += gcnew System::EventHandler(this, &GestionStatForm::L_choixClient_Click);
			// 
			// B_Montantachat
			// 
			this->B_Montantachat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Montantachat->Location = System::Drawing::Point(7, 185);
			this->B_Montantachat->Name = L"B_Montantachat";
			this->B_Montantachat->Size = System::Drawing::Size(163, 47);
			this->B_Montantachat->TabIndex = 28;
			this->B_Montantachat->Text = L"Montant total des achats";
			this->B_Montantachat->UseVisualStyleBackColor = true;
			this->B_Montantachat->Click += gcnew System::EventHandler(this, &GestionStatForm::B_Montantachat_Click);
			// 
			// B_seuil
			// 
			this->B_seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_seuil->Location = System::Drawing::Point(7, 132);
			this->B_seuil->Name = L"B_seuil";
			this->B_seuil->Size = System::Drawing::Size(313, 47);
			this->B_seuil->TabIndex = 27;
			this->B_seuil->Text = L"Produits sous le seuil de réapprovisionement";
			this->B_seuil->UseVisualStyleBackColor = true;
			this->B_seuil->Click += gcnew System::EventHandler(this, &GestionStatForm::B_seuil_Click);
			// 
			// NUD_ChoixMois
			// 
			this->NUD_ChoixMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_ChoixMois->Location = System::Drawing::Point(258, 92);
			this->NUD_ChoixMois->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->NUD_ChoixMois->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_ChoixMois->Name = L"NUD_ChoixMois";
			this->NUD_ChoixMois->Size = System::Drawing::Size(62, 22);
			this->NUD_ChoixMois->TabIndex = 26;
			this->NUD_ChoixMois->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_ChoixMois->ValueChanged += gcnew System::EventHandler(this, &GestionStatForm::NUD_ChoixMois_ValueChanged);
			// 
			// L_ChoixMois
			// 
			this->L_ChoixMois->AutoSize = true;
			this->L_ChoixMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_ChoixMois->Location = System::Drawing::Point(162, 94);
			this->L_ChoixMois->Name = L"L_ChoixMois";
			this->L_ChoixMois->Size = System::Drawing::Size(90, 16);
			this->L_ChoixMois->TabIndex = 25;
			this->L_ChoixMois->Text = L"Choix du mois";
			this->L_ChoixMois->Click += gcnew System::EventHandler(this, &GestionStatForm::L_ChoixMois_Click);
			// 
			// B_Caffaire
			// 
			this->B_Caffaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Caffaire->Location = System::Drawing::Point(7, 79);
			this->B_Caffaire->Name = L"B_Caffaire";
			this->B_Caffaire->Size = System::Drawing::Size(149, 47);
			this->B_Caffaire->TabIndex = 24;
			this->B_Caffaire->Text = L"Chiffre d\'affaires";
			this->B_Caffaire->UseVisualStyleBackColor = true;
			this->B_Caffaire->Click += gcnew System::EventHandler(this, &GestionStatForm::B_Caffaire_Click);
			// 
			// B_CpanierMoy
			// 
			this->B_CpanierMoy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_CpanierMoy->Location = System::Drawing::Point(7, 26);
			this->B_CpanierMoy->Name = L"B_CpanierMoy";
			this->B_CpanierMoy->Size = System::Drawing::Size(313, 47);
			this->B_CpanierMoy->TabIndex = 23;
			this->B_CpanierMoy->Text = L"Panier moyen (aprés remise)";
			this->B_CpanierMoy->UseVisualStyleBackColor = true;
			this->B_CpanierMoy->Click += gcnew System::EventHandler(this, &GestionStatForm::B_CpanierMoy_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(87, 197);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(217, 174);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 23;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &GestionStatForm::Logo_Click_1);
			// 
			// B_achatS
			// 
			this->B_achatS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_achatS->Location = System::Drawing::Point(21, 272);
			this->B_achatS->Name = L"B_achatS";
			this->B_achatS->Size = System::Drawing::Size(149, 47);
			this->B_achatS->TabIndex = 43;
			this->B_achatS->Text = L"Valeur d\'achat du stock";
			this->B_achatS->UseVisualStyleBackColor = true;
			this->B_achatS->Click += gcnew System::EventHandler(this, &GestionStatForm::B_achatS_Click);
			// 
			// GestionStatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(961, 383);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->GB_Stat);
			this->Controls->Add(this->DGV_BDD);
			this->Name = L"GestionStatForm";
			this->Text = L"GestionStatForm";
			this->Load += gcnew System::EventHandler(this, &GestionStatForm::GestionStatForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_BDD))->EndInit();
			this->GB_Stat->ResumeLayout(false);
			this->GB_Stat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idClient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_ChoixMois))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionStatForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DGV_BDD_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void Logo_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_Stat_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_CpanierMoy_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_Caffaire_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_ChoixMois_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_ChoixMois_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_seuil_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_Montantachat_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_choixClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_idClient_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_achatS_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_TVA_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_TVA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_margeCo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_remise_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_remise_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_démarque_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_démarque_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_T10plus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_T10moins_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_ComS_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
