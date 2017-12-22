#pragma once
#include "MyForm.h"
//#include "MyForm1.h"

namespace Music {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  Play_B;
	private: System::Windows::Forms::Button^  Var1;
	private: System::Windows::Forms::Button^  Var2;
	private: System::Windows::Forms::Button^  Var3;
	private: System::Windows::Forms::Button^  Var4;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Play_B = (gcnew System::Windows::Forms::Button());
			this->Var1 = (gcnew System::Windows::Forms::Button());
			this->Var2 = (gcnew System::Windows::Forms::Button());
			this->Var3 = (gcnew System::Windows::Forms::Button());
			this->Var4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(139, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Что это за мелодия\?";
			// 
			// Play_B
			// 
			this->Play_B->BackColor = System::Drawing::Color::Lime;
			this->Play_B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Play_B->ForeColor = System::Drawing::Color::Black;
			this->Play_B->Location = System::Drawing::Point(218, 97);
			this->Play_B->Name = L"Play_B";
			this->Play_B->Size = System::Drawing::Size(114, 39);
			this->Play_B->TabIndex = 1;
			this->Play_B->Text = L"Play";
			this->Play_B->UseVisualStyleBackColor = false;
			this->Play_B->Click += gcnew System::EventHandler(this, &MyForm2::Play_B_Click);
			// 
			// Var1
			// 
			this->Var1->BackColor = System::Drawing::Color::Aqua;
			this->Var1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Var1->ForeColor = System::Drawing::Color::Black;
			this->Var1->Location = System::Drawing::Point(127, 142);
			this->Var1->Name = L"Var1";
			this->Var1->Size = System::Drawing::Size(152, 47);
			this->Var1->TabIndex = 2;
			this->Var1->Text = L"Мелодия 1";
			this->Var1->UseVisualStyleBackColor = false;
			// 
			// Var2
			// 
			this->Var2->BackColor = System::Drawing::Color::Aqua;
			this->Var2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Var2->ForeColor = System::Drawing::Color::Black;
			this->Var2->Location = System::Drawing::Point(285, 142);
			this->Var2->Name = L"Var2";
			this->Var2->Size = System::Drawing::Size(152, 47);
			this->Var2->TabIndex = 3;
			this->Var2->Text = L"Мелодия 2";
			this->Var2->UseVisualStyleBackColor = false;
			// 
			// Var3
			// 
			this->Var3->BackColor = System::Drawing::Color::Aqua;
			this->Var3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Var3->ForeColor = System::Drawing::Color::Black;
			this->Var3->Location = System::Drawing::Point(127, 195);
			this->Var3->Name = L"Var3";
			this->Var3->Size = System::Drawing::Size(152, 47);
			this->Var3->TabIndex = 4;
			this->Var3->Text = L"Мелодия 3";
			this->Var3->UseVisualStyleBackColor = false;
			// 
			// Var4
			// 
			this->Var4->BackColor = System::Drawing::Color::Aqua;
			this->Var4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Var4->ForeColor = System::Drawing::Color::Black;
			this->Var4->Location = System::Drawing::Point(285, 195);
			this->Var4->Name = L"Var4";
			this->Var4->Size = System::Drawing::Size(152, 47);
			this->Var4->TabIndex = 5;
			this->Var4->Text = L"Мелодия 4";
			this->Var4->UseVisualStyleBackColor = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(602, 309);
			this->Controls->Add(this->Var4);
			this->Controls->Add(this->Var3);
			this->Controls->Add(this->Var2);
			this->Controls->Add(this->Var1);
			this->Controls->Add(this->Play_B);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Form^ TF;
		MySound* fs;
		track* f_track;
	private: System::Void Play_B_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}


private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
	 
}
};
}
