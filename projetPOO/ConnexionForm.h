#include "PersonnelForm.h"
#include "AdminForm.h"


namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ConnexionForm
	/// </summary>
	public ref class ConnexionForm : public System::Windows::Forms::Form
	{
	public:
		ConnexionForm(void)
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
		~ConnexionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_connexion;
	private: System::Windows::Forms::TextBox^ TB_mdp;

	private: System::Windows::Forms::TextBox^ TB_id;
	private: System::Windows::Forms::Label^ L_mdp;


	private: System::Windows::Forms::Label^ L_id;
	private: System::Windows::Forms::Button^ B_connexion;

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
			this->GB_connexion = (gcnew System::Windows::Forms::GroupBox());
			this->B_connexion = (gcnew System::Windows::Forms::Button());
			this->TB_mdp = (gcnew System::Windows::Forms::TextBox());
			this->TB_id = (gcnew System::Windows::Forms::TextBox());
			this->L_mdp = (gcnew System::Windows::Forms::Label());
			this->L_id = (gcnew System::Windows::Forms::Label());
			this->GB_connexion->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_connexion
			// 
			this->GB_connexion->BackColor = System::Drawing::SystemColors::ControlLight;
			this->GB_connexion->Controls->Add(this->B_connexion);
			this->GB_connexion->Controls->Add(this->TB_mdp);
			this->GB_connexion->Controls->Add(this->TB_id);
			this->GB_connexion->Controls->Add(this->L_mdp);
			this->GB_connexion->Controls->Add(this->L_id);
			this->GB_connexion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_connexion->Location = System::Drawing::Point(28, 22);
			this->GB_connexion->Name = L"GB_connexion";
			this->GB_connexion->Size = System::Drawing::Size(224, 227);
			this->GB_connexion->TabIndex = 0;
			this->GB_connexion->TabStop = false;
			this->GB_connexion->Text = L"Veuillez-vous connecter :";
			this->GB_connexion->Enter += gcnew System::EventHandler(this, &ConnexionForm::GB_connexion_Enter);
			// 
			// B_connexion
			// 
			this->B_connexion->BackColor = System::Drawing::SystemColors::ControlDark;
			this->B_connexion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_connexion->Location = System::Drawing::Point(59, 168);
			this->B_connexion->Name = L"B_connexion";
			this->B_connexion->Size = System::Drawing::Size(100, 36);
			this->B_connexion->TabIndex = 4;
			this->B_connexion->Text = L"Connexion";
			this->B_connexion->UseVisualStyleBackColor = false;
			this->B_connexion->Click += gcnew System::EventHandler(this, &ConnexionForm::B_connexion_Click);
			// 
			// TB_mdp
			// 
			this->TB_mdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_mdp->Location = System::Drawing::Point(48, 124);
			this->TB_mdp->Name = L"TB_mdp";
			this->TB_mdp->PasswordChar = '*';
			this->TB_mdp->Size = System::Drawing::Size(121, 22);
			this->TB_mdp->TabIndex = 3;
			this->TB_mdp->TextChanged += gcnew System::EventHandler(this, &ConnexionForm::TB_mdp_TextChanged);
			// 
			// TB_id
			// 
			this->TB_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_id->Location = System::Drawing::Point(48, 63);
			this->TB_id->Name = L"TB_id";
			this->TB_id->Size = System::Drawing::Size(121, 22);
			this->TB_id->TabIndex = 2;
			this->TB_id->TextChanged += gcnew System::EventHandler(this, &ConnexionForm::TB_id_TextChanged);
			// 
			// L_mdp
			// 
			this->L_mdp->AutoSize = true;
			this->L_mdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_mdp->Location = System::Drawing::Point(61, 103);
			this->L_mdp->Name = L"L_mdp";
			this->L_mdp->Size = System::Drawing::Size(98, 18);
			this->L_mdp->TabIndex = 1;
			this->L_mdp->Text = L"Mot de passe";
			this->L_mdp->Click += gcnew System::EventHandler(this, &ConnexionForm::L_mdp_Click);
			// 
			// L_id
			// 
			this->L_id->AutoSize = true;
			this->L_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L_id->Location = System::Drawing::Point(74, 42);
			this->L_id->Name = L"L_id";
			this->L_id->Size = System::Drawing::Size(69, 18);
			this->L_id->TabIndex = 0;
			this->L_id->Text = L"Identifiant";
			this->L_id->Click += gcnew System::EventHandler(this, &ConnexionForm::L_id_Click);
			// 
			// ConnexionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->GB_connexion);
			this->Name = L"ConnexionForm";
			this->Text = L"ConnexionForm";
			this->Load += gcnew System::EventHandler(this, &ConnexionForm::ConnexionForm_Load);
			this->GB_connexion->ResumeLayout(false);
			this->GB_connexion->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ConnexionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_connexion_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_id_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void L_mdp_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_mdp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_connexion_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Identifiant = this->TB_id->Text;
		String^ Motdepasse = this->TB_mdp->Text;

		if (Identifiant->Length == 0 || Motdepasse->Length == 0) {
			MessageBox::Show("Veuillez entrer votre identifiant et/ou votre mot de passe",
				"Identifiant ou mot de passe manquant", MessageBoxButtons::OK);
			return;
		}

		else if (Identifiant == "Personnel" && Motdepasse == "00") {
			PersonnelForm^ maPersonnelForm = gcnew PersonnelForm();
			maPersonnelForm->Show();
		}

		else if (Identifiant == "Admin" && Motdepasse == "00") {
			AdminForm^ maAdminForm = gcnew AdminForm();
			maAdminForm->Show();
		}

		else {
			MessageBox::Show("Identifiant ou mot de passe incorrect",
				"Echec de l'authentification", MessageBoxButtons::OK);
		}

	}
	};
}
