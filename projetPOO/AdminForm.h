
#include "GestionPersonnelForm.h"
#include "GestionStatForm1.h"

#pragma once

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GB_Admin;
	private: System::Windows::Forms::Button^ B_Gestionpersonnel;
	private: System::Windows::Forms::Button^ B_GestionStat;
	protected:

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
			this->GB_Admin = (gcnew System::Windows::Forms::GroupBox());
			this->B_Gestionpersonnel = (gcnew System::Windows::Forms::Button());
			this->B_GestionStat = (gcnew System::Windows::Forms::Button());
			this->GB_Admin->SuspendLayout();
			this->SuspendLayout();
			// 
			// GB_Admin
			// 
			this->GB_Admin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->GB_Admin->Controls->Add(this->B_Gestionpersonnel);
			this->GB_Admin->Controls->Add(this->B_GestionStat);
			this->GB_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GB_Admin->Location = System::Drawing::Point(66, 30);
			this->GB_Admin->Name = L"GB_Admin";
			this->GB_Admin->Size = System::Drawing::Size(254, 187);
			this->GB_Admin->TabIndex = 4;
			this->GB_Admin->TabStop = false;
			this->GB_Admin->Text = L"Choix du systeme de gestion";
			this->GB_Admin->Enter += gcnew System::EventHandler(this, &AdminForm::GB_Admin_Enter);
			// 
			// B_Gestionpersonnel
			// 
			this->B_Gestionpersonnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->B_Gestionpersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Gestionpersonnel->Location = System::Drawing::Point(64, 42);
			this->B_Gestionpersonnel->Name = L"B_Gestionpersonnel";
			this->B_Gestionpersonnel->Size = System::Drawing::Size(122, 51);
			this->B_Gestionpersonnel->TabIndex = 0;
			this->B_Gestionpersonnel->Text = L"Gestion personnel";
			this->B_Gestionpersonnel->UseVisualStyleBackColor = false;
			this->B_Gestionpersonnel->Click += gcnew System::EventHandler(this, &AdminForm::B_Gestionpersonnel_Click);
			// 
			// B_GestionStat
			// 
			this->B_GestionStat->BackColor = System::Drawing::SystemColors::ControlDark;
			this->B_GestionStat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_GestionStat->Location = System::Drawing::Point(64, 109);
			this->B_GestionStat->Name = L"B_GestionStat";
			this->B_GestionStat->Size = System::Drawing::Size(122, 52);
			this->B_GestionStat->TabIndex = 1;
			this->B_GestionStat->Text = L"Gestion statistique";
			this->B_GestionStat->UseVisualStyleBackColor = false;
			this->B_GestionStat->Click += gcnew System::EventHandler(this, &AdminForm::B_GestionStat_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(394, 247);
			this->Controls->Add(this->GB_Admin);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->GB_Admin->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GB_Admin_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void B_Gestionpersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionPersonnelForm^ maGestionPersonnelForm = gcnew GestionPersonnelForm();
		maGestionPersonnelForm->Show();
	}
	private: System::Void B_GestionStat_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionStatForm^ maGestionStatForm = gcnew GestionStatForm();
		maGestionStatForm->Show();
	}
};
}
