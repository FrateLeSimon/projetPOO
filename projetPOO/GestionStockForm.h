#pragma once
#include "GestionCommandeForm.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStockForm
	/// </summary>
	public ref class GestionStockForm : public System::Windows::Forms::Form
	{
	public:
		GestionStockForm(void)
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
		~GestionStockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ GB_article;
	private: System::Windows::Forms::Label^ L_idArticle;
	private: System::Windows::Forms::NumericUpDown^ NUD_idArticle;
	private: System::Windows::Forms::TextBox^ TB_NomArticle;
	private: System::Windows::Forms::NumericUpDown^ NUD_Qarticle;

	private: System::Windows::Forms::Label^ L_Qarticle;
	private: System::Windows::Forms::TextBox^ TB_PrixArticle;
	private: System::Windows::Forms::Label^ L_SeuilA;
	private: System::Windows::Forms::NumericUpDown^ NUD_SeuilA;
	private: System::Windows::Forms::Label^ L_CouleurA;
	private: System::Windows::Forms::ComboBox^ CB_CouleurA;
	private: System::Windows::Forms::Button^ B_load;
	private: System::Windows::Forms::Button^ B_insert;
	private: System::Windows::Forms::Button^ B_update;
	private: System::Windows::Forms::Button^ B_delete;
	private: System::Windows::Forms::PictureBox^ Logo;

	private: articleServices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::ComboBox^ CB_TVA;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionStockForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->GB_article = (gcnew System::Windows::Forms::GroupBox());
			this->CB_TVA = (gcnew System::Windows::Forms::ComboBox());
			this->CB_CouleurA = (gcnew System::Windows::Forms::ComboBox());
			this->L_CouleurA = (gcnew System::Windows::Forms::Label());
			this->NUD_SeuilA = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_SeuilA = (gcnew System::Windows::Forms::Label());
			this->TB_PrixArticle = (gcnew System::Windows::Forms::TextBox());
			this->L_Qarticle = (gcnew System::Windows::Forms::Label());
			this->NUD_Qarticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->TB_NomArticle = (gcnew System::Windows::Forms::TextBox());
			this->NUD_idArticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->L_idArticle = (gcnew System::Windows::Forms::Label());
			this->B_load = (gcnew System::Windows::Forms::Button());
			this->B_insert = (gcnew System::Windows::Forms::Button());
			this->B_update = (gcnew System::Windows::Forms::Button());
			this->B_delete = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->GB_article->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_SeuilA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_Qarticle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idArticle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(767, 204);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionStockForm::DGV_CellContentClick);
			// 
			// GB_article
			// 
			this->GB_article->Controls->Add(this->CB_TVA);
			this->GB_article->Controls->Add(this->CB_CouleurA);
			this->GB_article->Controls->Add(this->L_CouleurA);
			this->GB_article->Controls->Add(this->NUD_SeuilA);
			this->GB_article->Controls->Add(this->L_SeuilA);
			this->GB_article->Controls->Add(this->TB_PrixArticle);
			this->GB_article->Controls->Add(this->L_Qarticle);
			this->GB_article->Controls->Add(this->NUD_Qarticle);
			this->GB_article->Controls->Add(this->TB_NomArticle);
			this->GB_article->Controls->Add(this->NUD_idArticle);
			this->GB_article->Controls->Add(this->L_idArticle);
			this->GB_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_article->Location = System::Drawing::Point(269, 222);
			this->GB_article->Name = L"GB_article";
			this->GB_article->Size = System::Drawing::Size(208, 204);
			this->GB_article->TabIndex = 1;
			this->GB_article->TabStop = false;
			this->GB_article->Text = L"Article";
			this->GB_article->Enter += gcnew System::EventHandler(this, &GestionStockForm::GB_article_Enter);
			// 
			// CB_TVA
			// 
			this->CB_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_TVA->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->CB_TVA->FormattingEnabled = true;
			this->CB_TVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5.5", L"10", L"20" });
			this->CB_TVA->Location = System::Drawing::Point(120, 110);
			this->CB_TVA->Name = L"CB_TVA";
			this->CB_TVA->Size = System::Drawing::Size(78, 24);
			this->CB_TVA->TabIndex = 22;
			this->CB_TVA->Text = L"TVA";
			this->CB_TVA->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStockForm::CB_TVA_SelectedIndexChanged);
			// 
			// CB_CouleurA
			// 
			this->CB_CouleurA->FormattingEnabled = true;
			this->CB_CouleurA->Location = System::Drawing::Point(105, 166);
			this->CB_CouleurA->Name = L"CB_CouleurA";
			this->CB_CouleurA->Size = System::Drawing::Size(93, 28);
			this->CB_CouleurA->TabIndex = 17;
			this->CB_CouleurA->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStockForm::CB_CouleurA_SelectedIndexChanged);
			// 
			// L_CouleurA
			// 
			this->L_CouleurA->AutoSize = true;
			this->L_CouleurA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_CouleurA->Location = System::Drawing::Point(6, 174);
			this->L_CouleurA->Name = L"L_CouleurA";
			this->L_CouleurA->Size = System::Drawing::Size(93, 16);
			this->L_CouleurA->TabIndex = 16;
			this->L_CouleurA->Text = L"Couleur Article";
			this->L_CouleurA->Click += gcnew System::EventHandler(this, &GestionStockForm::L_CouleurA_Click);
			// 
			// NUD_SeuilA
			// 
			this->NUD_SeuilA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_SeuilA->Location = System::Drawing::Point(89, 138);
			this->NUD_SeuilA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->NUD_SeuilA->Name = L"NUD_SeuilA";
			this->NUD_SeuilA->Size = System::Drawing::Size(109, 22);
			this->NUD_SeuilA->TabIndex = 15;
			this->NUD_SeuilA->ValueChanged += gcnew System::EventHandler(this, &GestionStockForm::NUD_SeuilA_ValueChanged);
			// 
			// L_SeuilA
			// 
			this->L_SeuilA->AutoSize = true;
			this->L_SeuilA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_SeuilA->Location = System::Drawing::Point(6, 141);
			this->L_SeuilA->Name = L"L_SeuilA";
			this->L_SeuilA->Size = System::Drawing::Size(77, 16);
			this->L_SeuilA->TabIndex = 14;
			this->L_SeuilA->Text = L"Seuil Article";
			this->L_SeuilA->Click += gcnew System::EventHandler(this, &GestionStockForm::L_SeuilA_Click);
			// 
			// TB_PrixArticle
			// 
			this->TB_PrixArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_PrixArticle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_PrixArticle->Location = System::Drawing::Point(6, 110);
			this->TB_PrixArticle->Name = L"TB_PrixArticle";
			this->TB_PrixArticle->Size = System::Drawing::Size(96, 22);
			this->TB_PrixArticle->TabIndex = 13;
			this->TB_PrixArticle->Text = L"Prix de l\'article";
			this->TB_PrixArticle->TextChanged += gcnew System::EventHandler(this, &GestionStockForm::TB_PrixArticle_TextChanged);
			// 
			// L_Qarticle
			// 
			this->L_Qarticle->AutoSize = true;
			this->L_Qarticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_Qarticle->Location = System::Drawing::Point(6, 84);
			this->L_Qarticle->Name = L"L_Qarticle";
			this->L_Qarticle->Size = System::Drawing::Size(96, 16);
			this->L_Qarticle->TabIndex = 12;
			this->L_Qarticle->Text = L"Quantité Article";
			this->L_Qarticle->Click += gcnew System::EventHandler(this, &GestionStockForm::L_Qarticle_Click);
			// 
			// NUD_Qarticle
			// 
			this->NUD_Qarticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_Qarticle->Location = System::Drawing::Point(108, 82);
			this->NUD_Qarticle->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->NUD_Qarticle->Name = L"NUD_Qarticle";
			this->NUD_Qarticle->Size = System::Drawing::Size(90, 22);
			this->NUD_Qarticle->TabIndex = 11;
			this->NUD_Qarticle->ValueChanged += gcnew System::EventHandler(this, &GestionStockForm::NUD_Qarticle_ValueChanged);
			// 
			// TB_NomArticle
			// 
			this->TB_NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NomArticle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TB_NomArticle->Location = System::Drawing::Point(6, 54);
			this->TB_NomArticle->Name = L"TB_NomArticle";
			this->TB_NomArticle->Size = System::Drawing::Size(192, 22);
			this->TB_NomArticle->TabIndex = 3;
			this->TB_NomArticle->Text = L"Nom de l\'article";
			this->TB_NomArticle->TextChanged += gcnew System::EventHandler(this, &GestionStockForm::TB_NomArticle_TextChanged);
			// 
			// NUD_idArticle
			// 
			this->NUD_idArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_idArticle->Location = System::Drawing::Point(79, 26);
			this->NUD_idArticle->Name = L"NUD_idArticle";
			this->NUD_idArticle->Size = System::Drawing::Size(119, 22);
			this->NUD_idArticle->TabIndex = 11;
			this->NUD_idArticle->ValueChanged += gcnew System::EventHandler(this, &GestionStockForm::NUD_idArticle_ValueChanged);
			// 
			// L_idArticle
			// 
			this->L_idArticle->AutoSize = true;
			this->L_idArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_idArticle->Location = System::Drawing::Point(6, 28);
			this->L_idArticle->Name = L"L_idArticle";
			this->L_idArticle->Size = System::Drawing::Size(58, 16);
			this->L_idArticle->TabIndex = 6;
			this->L_idArticle->Text = L"Id Article";
			this->L_idArticle->Click += gcnew System::EventHandler(this, &GestionStockForm::L_idArticle_Click);
			// 
			// B_load
			// 
			this->B_load->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_load->Location = System::Drawing::Point(12, 222);
			this->B_load->Name = L"B_load";
			this->B_load->Size = System::Drawing::Size(112, 204);
			this->B_load->TabIndex = 8;
			this->B_load->Text = L"Charger";
			this->B_load->UseVisualStyleBackColor = true;
			this->B_load->Click += gcnew System::EventHandler(this, &GestionStockForm::B_load_Click);
			// 
			// B_insert
			// 
			this->B_insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_insert->Location = System::Drawing::Point(130, 222);
			this->B_insert->Name = L"B_insert";
			this->B_insert->Size = System::Drawing::Size(133, 61);
			this->B_insert->TabIndex = 9;
			this->B_insert->Text = L"Insérer";
			this->B_insert->UseVisualStyleBackColor = true;
			this->B_insert->Click += gcnew System::EventHandler(this, &GestionStockForm::B_insert_Click);
			// 
			// B_update
			// 
			this->B_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_update->Location = System::Drawing::Point(130, 291);
			this->B_update->Name = L"B_update";
			this->B_update->Size = System::Drawing::Size(133, 61);
			this->B_update->TabIndex = 10;
			this->B_update->Text = L"Modifier";
			this->B_update->UseVisualStyleBackColor = true;
			this->B_update->Click += gcnew System::EventHandler(this, &GestionStockForm::B_update_Click);
			// 
			// B_delete
			// 
			this->B_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_delete->Location = System::Drawing::Point(130, 362);
			this->B_delete->Name = L"B_delete";
			this->B_delete->Size = System::Drawing::Size(133, 64);
			this->B_delete->TabIndex = 11;
			this->B_delete->Text = L"Supprimer";
			this->B_delete->UseVisualStyleBackColor = true;
			this->B_delete->Click += gcnew System::EventHandler(this, &GestionStockForm::B_delete_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(493, 222);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(286, 204);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 23;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &GestionStockForm::Logo_Click);
			// 
			// GestionStockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(792, 436);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->B_delete);
			this->Controls->Add(this->B_update);
			this->Controls->Add(this->B_insert);
			this->Controls->Add(this->B_load);
			this->Controls->Add(this->GB_article);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"GestionStockForm";
			this->Text = L"GestionStockForm";
			this->Load += gcnew System::EventHandler(this, &GestionStockForm::GestionStockForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->GB_article->ResumeLayout(false);
			this->GB_article->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_SeuilA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_Qarticle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_idArticle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionStockForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DGV_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void GB_article_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_idArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_idArticle_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_Qarticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_PrixArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_SeuilA_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_SeuilA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_CouleurA_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CB_CouleurA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_insert_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew articleServices();
		this->oSvc->ajouterUnArticle(System::Convert::ToString(this->NUD_idArticle->Value), this->TB_NomArticle->Text, this->NUD_Qarticle->Text, this->TB_PrixArticle->Text, this->NUD_SeuilA->Text, this->CB_CouleurA->Text, this->CB_TVA->Text);
	}
	private: System::Void B_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew articleServices();
		this->oSvc->modifierUnArticle(System::Convert::ToString(this->NUD_idArticle->Value), this->TB_NomArticle->Text, this->NUD_Qarticle->Text, this->TB_PrixArticle->Text, this->NUD_SeuilA->Text, this->CB_CouleurA->Text, this->CB_TVA->Text);
	}
	private: System::Void B_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew articleServices();
		this->oSvc->supprimerUnArticle(this->NUD_idArticle->Text);
	}
	private: System::Void B_load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oSvc = gcnew articleServices();
		this->oDs = this->oSvc->selectionnerTousLesArticles("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void TB_NomArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NUD_Qarticle_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CB_TVA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
