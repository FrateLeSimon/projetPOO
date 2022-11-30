#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_connect;
	protected:

	private: System::Windows::Forms::GroupBox^ GB_connect;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ L_id;
	private: System::Windows::Forms::TextBox^ TB_id;
	private: System::Windows::Forms::TextBox^ TB_mdp;




	private: System::Windows::Forms::Label^ L_mdp;

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
			this->Btn_connect = (gcnew System::Windows::Forms::Button());
			this->GB_connect = (gcnew System::Windows::Forms::GroupBox());
			this->TB_mdp = (gcnew System::Windows::Forms::TextBox());
			this->L_mdp = (gcnew System::Windows::Forms::Label());
			this->TB_id = (gcnew System::Windows::Forms::TextBox());
			this->L_id = (gcnew System::Windows::Forms::Label());
			this->GB_connect->SuspendLayout();
			this->SuspendLayout();
			// 
			// Btn_connect
			// 
			this->Btn_connect->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Btn_connect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_connect->Location = System::Drawing::Point(54, 157);
			this->Btn_connect->Name = L"Btn_connect";
			this->Btn_connect->Size = System::Drawing::Size(101, 44);
			this->Btn_connect->TabIndex = 0;
			this->Btn_connect->Text = L"Connexion";
			this->Btn_connect->UseVisualStyleBackColor = false;
			this->Btn_connect->Click += gcnew System::EventHandler(this, &MyForm::button_connexion);
			// 
			// GB_connect
			// 
			this->GB_connect->BackColor = System::Drawing::SystemColors::ControlLight;
			this->GB_connect->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->GB_connect->Controls->Add(this->TB_mdp);
			this->GB_connect->Controls->Add(this->L_mdp);
			this->GB_connect->Controls->Add(this->TB_id);
			this->GB_connect->Controls->Add(this->L_id);
			this->GB_connect->Controls->Add(this->Btn_connect);
			this->GB_connect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_connect->Location = System::Drawing::Point(310, 49);
			this->GB_connect->Name = L"GB_connect";
			this->GB_connect->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->GB_connect->Size = System::Drawing::Size(214, 231);
			this->GB_connect->TabIndex = 2;
			this->GB_connect->TabStop = false;
			this->GB_connect->Text = L"Veuillez-vous connecter";
			this->GB_connect->Enter += gcnew System::EventHandler(this, &MyForm::groupBox_connexion);
			// 
			// TB_mdp
			// 
			this->TB_mdp->Location = System::Drawing::Point(54, 106);
			this->TB_mdp->Name = L"TB_mdp";
			this->TB_mdp->PasswordChar = '*';
			this->TB_mdp->Size = System::Drawing::Size(100, 26);
			this->TB_mdp->TabIndex = 5;
			this->TB_mdp->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_mdp);
			// 
			// L_mdp
			// 
			this->L_mdp->AutoSize = true;
			this->L_mdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_mdp->Location = System::Drawing::Point(55, 85);
			this->L_mdp->Name = L"L_mdp";
			this->L_mdp->Size = System::Drawing::Size(98, 18);
			this->L_mdp->TabIndex = 4;
			this->L_mdp->Text = L"Mot de passe";
			this->L_mdp->Click += gcnew System::EventHandler(this, &MyForm::label_mdp);
			// 
			// TB_id
			// 
			this->TB_id->Location = System::Drawing::Point(54, 52);
			this->TB_id->Name = L"TB_id";
			this->TB_id->Size = System::Drawing::Size(100, 26);
			this->TB_id->TabIndex = 3;
			this->TB_id->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_identifiant);
			// 
			// L_id
			// 
			this->L_id->AutoSize = true;
			this->L_id->BackColor = System::Drawing::SystemColors::ControlLight;
			this->L_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_id->Location = System::Drawing::Point(69, 31);
			this->L_id->Name = L"L_id";
			this->L_id->Size = System::Drawing::Size(69, 18);
			this->L_id->TabIndex = 2;
			this->L_id->Text = L"Identifiant";
			this->L_id->Click += gcnew System::EventHandler(this, &MyForm::label_identifiant);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(832, 330);
			this->Controls->Add(this->GB_connect);
			this->Name = L"MyForm";
			this->Text = L"Page_de_connexion";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->GB_connect->ResumeLayout(false);
			this->GB_connect->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_connexion(System::Object^ sender, System::EventArgs^ e) {
		String^ Identifiant = this->TB_id->Text;
		String^ Motdepasse = this->TB_mdp->Text;

		if (Identifiant->Length == 0 || Motdepasse->Length == 0) {
			MessageBox::Show("Veuillez entrer votre identifiant et/ou votre mot de passe",
				"Identifiant ou mot de passe manquant", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "foutre le lien de la BDD ici";

		}
		catch (Exception^ e) {
			MessageBox::Show("Echec de la connexion à la base de donnée",
				"Erreur de connexion à la base de donnée", MessageBoxButtons::OK);
		}

	}
	private: System::Void groupBox_connexion(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_identifiant(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_identifiant(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_mdp(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_mdp(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
