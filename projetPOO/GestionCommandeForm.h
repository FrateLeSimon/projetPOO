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
	private: System::Windows::Forms::Label^ L_DateLivraison;
	private: System::Windows::Forms::Label^ L_DateEmission;
	private: System::Windows::Forms::MonthCalendar^ MC_DateEmission;
	private: System::Windows::Forms::MonthCalendar^ MC_DateLivraison;
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
			this->MC_DateEmission = (gcnew System::Windows::Forms::MonthCalendar());
			this->MC_DateLivraison = (gcnew System::Windows::Forms::MonthCalendar());
			this->L_DateEmission = (gcnew System::Windows::Forms::Label());
			this->L_DateLivraison = (gcnew System::Windows::Forms::Label());
			this->TB_Référence = (gcnew System::Windows::Forms::TextBox());
			this->NUD_idCommande = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_idCommande = (gcnew System::Windows::Forms::Label());
			this->B_load = (gcnew System::Windows::Forms::Button());
			this->B_insert = (gcnew System::Windows::Forms::Button());
			this->B_update = (gcnew System::Windows::Forms::Button());
			this->B_delete = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Commande))->BeginInit();
			this->GB_Commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_IdClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// DGV_Commande
			// 
			this->DGV_Commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Commande->Location = System::Drawing::Point(13, 13);
			this->DGV_Commande->Name = L"DGV_Commande";
			this->DGV_Commande->Size = System::Drawing::Size(434, 155);
			this->DGV_Commande->TabIndex = 0;
			this->DGV_Commande->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionCommandeForm::dataGridView1_CellContentClick);
			// 
			// GB_Commande
			// 
			this->GB_Commande->Controls->Add(this->NUD_IdClient);
			this->GB_Commande->Controls->Add(this->L_IdClient);
			this->GB_Commande->Controls->Add(this->TB_MontantTTC);
			this->GB_Commande->Controls->Add(this->TB_MontantHT);
			this->GB_Commande->Controls->Add(this->MC_DateEmission);
			this->GB_Commande->Controls->Add(this->MC_DateLivraison);
			this->GB_Commande->Controls->Add(this->L_DateEmission);
			this->GB_Commande->Controls->Add(this->L_DateLivraison);
			this->GB_Commande->Controls->Add(this->TB_Référence);
			this->GB_Commande->Controls->Add(this->NUD_idCommande);
			this->GB_Commande->Controls->Add(this->L_idCommande);
			this->GB_Commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Commande->Location = System::Drawing::Point(453, 12);
			this->GB_Commande->Name = L"GB_Commande";
			this->GB_Commande->Size = System::Drawing::Size(495, 313);
			this->GB_Commande->TabIndex = 1;
			this->GB_Commande->TabStop = false;
			this->GB_Commande->Text = L"Commande";
			this->GB_Commande->Enter += gcnew System::EventHandler(this, &GestionCommandeForm::GB_Commande_Enter);
			// 
			// NUD_IdClient
			// 
			this->NUD_IdClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_IdClient->Location = System::Drawing::Point(66, 81);
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
			this->L_IdClient->Location = System::Drawing::Point(6, 83);
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
			this->TB_MontantTTC->Location = System::Drawing::Point(245, 53);
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
			this->TB_MontantHT->Location = System::Drawing::Point(245, 25);
			this->TB_MontantHT->Name = L"TB_MontantHT";
			this->TB_MontantHT->Size = System::Drawing::Size(199, 22);
			this->TB_MontantHT->TabIndex = 17;
			this->TB_MontantHT->Text = L"Montant hors taxe";
			this->TB_MontantHT->TextChanged += gcnew System::EventHandler(this, &GestionCommandeForm::TB_MontantHT_TextChanged);
			// 
			// MC_DateEmission
			// 
			this->MC_DateEmission->Location = System::Drawing::Point(262, 141);
			this->MC_DateEmission->Name = L"MC_DateEmission";
			this->MC_DateEmission->TabIndex = 16;
			this->MC_DateEmission->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &GestionCommandeForm::MC_DateEmission_DateChanged);
			// 
			// MC_DateLivraison
			// 
			this->MC_DateLivraison->Location = System::Drawing::Point(9, 141);
			this->MC_DateLivraison->Name = L"MC_DateLivraison";
			this->MC_DateLivraison->TabIndex = 15;
			this->MC_DateLivraison->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &GestionCommandeForm::MC_DateLivraison_DateChanged);
			// 
			// L_DateEmission
			// 
			this->L_DateEmission->AutoSize = true;
			this->L_DateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DateEmission->Location = System::Drawing::Point(318, 116);
			this->L_DateEmission->Name = L"L_DateEmission";
			this->L_DateEmission->Size = System::Drawing::Size(104, 16);
			this->L_DateEmission->TabIndex = 14;
			this->L_DateEmission->Text = L"Date d\'émission";
			this->L_DateEmission->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_DateEmission_Click);
			// 
			// L_DateLivraison
			// 
			this->L_DateLivraison->AutoSize = true;
			this->L_DateLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_DateLivraison->Location = System::Drawing::Point(69, 116);
			this->L_DateLivraison->Name = L"L_DateLivraison";
			this->L_DateLivraison->Size = System::Drawing::Size(108, 16);
			this->L_DateLivraison->TabIndex = 13;
			this->L_DateLivraison->Text = L"Date de livraison";
			this->L_DateLivraison->Click += gcnew System::EventHandler(this, &GestionCommandeForm::L_DateLivraison_Click);
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
			this->NUD_idCommande->Location = System::Drawing::Point(103, 25);
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
			this->L_idCommande->Location = System::Drawing::Point(6, 27);
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
			this->B_load->Location = System::Drawing::Point(212, 175);
			this->B_load->Name = L"B_load";
			this->B_load->Size = System::Drawing::Size(95, 150);
			this->B_load->TabIndex = 9;
			this->B_load->Text = L"Charger";
			this->B_load->UseVisualStyleBackColor = true;
			this->B_load->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_load_Click);
			// 
			// B_insert
			// 
			this->B_insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_insert->Location = System::Drawing::Point(313, 174);
			this->B_insert->Name = L"B_insert";
			this->B_insert->Size = System::Drawing::Size(134, 48);
			this->B_insert->TabIndex = 10;
			this->B_insert->Text = L"Insérer";
			this->B_insert->UseVisualStyleBackColor = true;
			this->B_insert->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_insert_Click);
			// 
			// B_update
			// 
			this->B_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_update->Location = System::Drawing::Point(313, 226);
			this->B_update->Name = L"B_update";
			this->B_update->Size = System::Drawing::Size(134, 48);
			this->B_update->TabIndex = 11;
			this->B_update->Text = L"Modifier";
			this->B_update->UseVisualStyleBackColor = true;
			this->B_update->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_update_Click);
			// 
			// B_delete
			// 
			this->B_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_delete->Location = System::Drawing::Point(313, 277);
			this->B_delete->Name = L"B_delete";
			this->B_delete->Size = System::Drawing::Size(134, 48);
			this->B_delete->TabIndex = 12;
			this->B_delete->Text = L"Supprimer";
			this->B_delete->UseVisualStyleBackColor = true;
			this->B_delete->Click += gcnew System::EventHandler(this, &GestionCommandeForm::B_delete_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(12, 174);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(194, 151);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 24;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &GestionCommandeForm::Logo_Click);
			// 
			// GestionCommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(960, 338);
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
};
}
