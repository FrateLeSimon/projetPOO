
#include "GestionStatForm1.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	public:
		PersonnelForm(void)
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
		~PersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Gestionclient;
	private: System::Windows::Forms::Button^ B_Gestioncommande;
	private: System::Windows::Forms::Button^ B_gestionstock;
	protected:

	protected:


	private: System::Windows::Forms::GroupBox^ GB_Personnel;






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
			this->B_Gestionclient = (gcnew System::Windows::Forms::Button());
			this->B_Gestioncommande = (gcnew System::Windows::Forms::Button());
			this->B_gestionstock = (gcnew System::Windows::Forms::Button());
			this->GB_Personnel = (gcnew System::Windows::Forms::GroupBox());
			this->GB_Personnel->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Gestionclient
			// 
			this->B_Gestionclient->BackColor = System::Drawing::SystemColors::ControlDark;
			this->B_Gestionclient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Gestionclient->Location = System::Drawing::Point(64, 42);
			this->B_Gestionclient->Name = L"B_GestionClient";
			this->B_Gestionclient->Size = System::Drawing::Size(122, 46);
			this->B_Gestionclient->TabIndex = 0;
			this->B_Gestionclient->Text = L"Gestion client";
			this->B_Gestionclient->UseVisualStyleBackColor = false;
			this->B_Gestionclient->Click += gcnew System::EventHandler(this, &PersonnelForm::B_GestionClient_Click);
			// 
			// B_Gestioncommande
			// 
			this->B_Gestioncommande->BackColor = System::Drawing::SystemColors::ControlDark;
			this->B_Gestioncommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Gestioncommande->Location = System::Drawing::Point(64, 109);
			this->B_Gestioncommande->Name = L"B_Gestioncommande";
			this->B_Gestioncommande->Size = System::Drawing::Size(122, 52);
			this->B_Gestioncommande->TabIndex = 1;
			this->B_Gestioncommande->Text = L"Gestion commande";
			this->B_Gestioncommande->UseVisualStyleBackColor = false;
			this->B_Gestioncommande->Click += gcnew System::EventHandler(this, &PersonnelForm::B_GestionCommande_Click);
			// 
			// B_gestionstock
			// 
			this->B_gestionstock->BackColor = System::Drawing::SystemColors::ControlDark;
			this->B_gestionstock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_gestionstock->Location = System::Drawing::Point(64, 180);
			this->B_gestionstock->Name = L"B_GestionStock";
			this->B_gestionstock->Size = System::Drawing::Size(122, 47);
			this->B_gestionstock->TabIndex = 2;
			this->B_gestionstock->Text = L"Gestion stock";
			this->B_gestionstock->UseVisualStyleBackColor = false;
			this->B_gestionstock->Click += gcnew System::EventHandler(this, &PersonnelForm::B_GestionStock_Click);
			// 
			// GB_Personnel
			// 
			this->GB_Personnel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->GB_Personnel->Controls->Add(this->B_Gestionclient);
			this->GB_Personnel->Controls->Add(this->B_gestionstock);
			this->GB_Personnel->Controls->Add(this->B_Gestioncommande);
			this->GB_Personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Personnel->Location = System::Drawing::Point(85, 36);
			this->GB_Personnel->Name = L"GB_Personnel";
			this->GB_Personnel->Size = System::Drawing::Size(254, 247);
			this->GB_Personnel->TabIndex = 3;
			this->GB_Personnel->TabStop = false;
			this->GB_Personnel->Text = L"Choix du systeme de gestion";
			this->GB_Personnel->Enter += gcnew System::EventHandler(this, &PersonnelForm::GB_personnel_Enter);
			// 
			// PersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(430, 315);
			this->Controls->Add(this->GB_Personnel);
			this->Name = L"PersonnelForm";
			this->Text = L"PersonnelForm";
			this->Load += gcnew System::EventHandler(this, &PersonnelForm::PersonnelForm_Load);
			this->GB_Personnel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_GestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionClientForm^ maGestionClientForm = gcnew GestionClientForm();
		maGestionClientForm->Show();
	}
	private: System::Void B_GestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionStockForm^ maGestionStockForm = gcnew GestionStockForm();
		maGestionStockForm->Show();
	}
	private: System::Void B_GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionCommandeForm^ maGestionCommandeForm = gcnew GestionCommandeForm();
		maGestionCommandeForm->Show();
	}
	private: System::Void GB_personnel_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
