#pragma once
#include "MyForm.h"
#include "MyForm2.h"



namespace Music {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Mus_list;
	protected:

	private: System::Windows::Forms::Button^  button_Play;
	protected:

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
			this->Mus_list = (gcnew System::Windows::Forms::Button());
			this->button_Play = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Mus_list
			// 
			this->Mus_list->BackColor = System::Drawing::Color::Aqua;
			this->Mus_list->Location = System::Drawing::Point(61, 48);
			this->Mus_list->Name = L"Mus_list";
			this->Mus_list->Size = System::Drawing::Size(153, 23);
			this->Mus_list->TabIndex = 0;
			this->Mus_list->Text = L"Список мелодий";
			this->Mus_list->UseVisualStyleBackColor = false;
			this->Mus_list->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button_Play
			// 
			this->button_Play->BackColor = System::Drawing::Color::Aqua;
			this->button_Play->Location = System::Drawing::Point(61, 77);
			this->button_Play->Name = L"button_Play";
			this->button_Play->Size = System::Drawing::Size(153, 23);
			this->button_Play->TabIndex = 1;
			this->button_Play->Text = L"Играть";
			this->button_Play->UseVisualStyleBackColor = false;
			this->button_Play->Click += gcnew System::EventHandler(this, &MyForm1::button_Play_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button_Play);
			this->Controls->Add(this->Mus_list);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
		Form^ f;
	

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		f = gcnew CppWinForm4::MyForm;
		f->Visible = 1;
	}

			

	private: System::Void button_Play_Click(System::Object^  sender, System::EventArgs^  e) {
		f = gcnew Music::MyForm2;
		f->Visible = 1;
	}
	};
};
