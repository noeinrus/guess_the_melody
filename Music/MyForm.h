#pragma once

#include <Windows.h>
#include <mmsystem.h>
#include <string.h>
#include <vcclr.h>
#include "MyMus.h"
#include <string>
//#include"MyForm1.h"
#pragma comment(lib, "winmm.lib")

using namespace System::Runtime::InteropServices;
using namespace System::Xml;

namespace CppWinForm4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Security::Permissions;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Play_edit;
	protected:

	private: System::Windows::Forms::Button^  save_button;
	private: System::Windows::Forms::Button^  Del_las;
	protected:


	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::DomainUpDown^  Dur_selector;




	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListView^  MelodyList;

	private: System::Windows::Forms::Button^  Del_track;

	private: System::Windows::Forms::Button^  Del_but;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  open_button;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"Название мелодии"));
			this->Play_edit = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->Del_las = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->Dur_selector = (gcnew System::Windows::Forms::DomainUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->MelodyList = (gcnew System::Windows::Forms::ListView());
			this->Del_track = (gcnew System::Windows::Forms::Button());
			this->Del_but = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->open_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Play_edit
			// 
			this->Play_edit->BackColor = System::Drawing::Color::Lime;
			this->Play_edit->Location = System::Drawing::Point(160, 121);
			this->Play_edit->Name = L"Play_edit";
			this->Play_edit->Size = System::Drawing::Size(75, 23);
			this->Play_edit->TabIndex = 0;
			this->Play_edit->Text = L"Play";
			this->Play_edit->UseVisualStyleBackColor = false;
			this->Play_edit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// save_button
			// 
			this->save_button->BackColor = System::Drawing::Color::Aqua;
			this->save_button->Enabled = false;
			this->save_button->Location = System::Drawing::Point(226, 199);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(75, 23);
			this->save_button->TabIndex = 1;
			this->save_button->Text = L"Save";
			this->save_button->UseVisualStyleBackColor = false;
			this->save_button->Click += gcnew System::EventHandler(this, &MyForm::save_button_Click);
			// 
			// Del_las
			// 
			this->Del_las->BackColor = System::Drawing::Color::Red;
			this->Del_las->Location = System::Drawing::Point(256, 121);
			this->Del_las->Name = L"Del_las";
			this->Del_las->Size = System::Drawing::Size(75, 23);
			this->Del_las->TabIndex = 2;
			this->Del_las->Text = L"Delete last";
			this->Del_las->UseVisualStyleBackColor = false;
			this->Del_las->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(43, 22);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(18, 72);
			this->button7->TabIndex = 8;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Aqua;
			this->button8->Enabled = false;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Location = System::Drawing::Point(52, 22);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(26, 96);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Aqua;
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(27, 22);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(26, 96);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(68, 22);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(18, 72);
			this->button10->TabIndex = 10;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Aqua;
			this->button11->Enabled = false;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button11->Location = System::Drawing::Point(77, 22);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(26, 96);
			this->button11->TabIndex = 9;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Enabled = false;
			this->button12->Location = System::Drawing::Point(142, 22);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(18, 72);
			this->button12->TabIndex = 15;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Aqua;
			this->button13->Enabled = false;
			this->button13->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->Location = System::Drawing::Point(151, 22);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(26, 96);
			this->button13->TabIndex = 14;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Enabled = false;
			this->button14->Location = System::Drawing::Point(117, 22);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(18, 72);
			this->button14->TabIndex = 13;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Aqua;
			this->button15->Enabled = false;
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(126, 22);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(26, 96);
			this->button15->TabIndex = 12;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Aqua;
			this->button16->Enabled = false;
			this->button16->Location = System::Drawing::Point(101, 22);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(26, 96);
			this->button16->TabIndex = 11;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Enabled = false;
			this->button17->Location = System::Drawing::Point(167, 22);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(18, 72);
			this->button17->TabIndex = 17;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Aqua;
			this->button18->Enabled = false;
			this->button18->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button18->Location = System::Drawing::Point(176, 22);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(26, 96);
			this->button18->TabIndex = 16;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// Dur_selector
			// 
			this->Dur_selector->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Dur_selector->Items->Add(L"Целая");
			this->Dur_selector->Items->Add(L"3/4");
			this->Dur_selector->Items->Add(L"Половинка");
			this->Dur_selector->Items->Add(L"Четвертушка");
			this->Dur_selector->Items->Add(L"Восьмая");
			this->Dur_selector->Items->Add(L"Шестнадцатая");
			this->Dur_selector->Location = System::Drawing::Point(27, 124);
			this->Dur_selector->Name = L"Dur_selector";
			this->Dur_selector->ReadOnly = true;
			this->Dur_selector->Size = System::Drawing::Size(114, 20);
			this->Dur_selector->TabIndex = 20;
			this->Dur_selector->Text = L"Длительность";
			this->Dur_selector->SelectedItemChanged += gcnew System::EventHandler(this, &MyForm::Dur_selector_SelectedItemChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Aqua;
			this->button4->Enabled = false;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(566, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(26, 96);
			this->button4->TabIndex = 21;
			this->button4->Text = L"E";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MelodyList
			// 
			this->MelodyList->BackColor = System::Drawing::Color::Black;
			this->MelodyList->ForeColor = System::Drawing::Color::Aqua;
			this->MelodyList->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->MelodyList->Location = System::Drawing::Point(631, 1);
			this->MelodyList->MultiSelect = false;
			this->MelodyList->Name = L"MelodyList";
			this->MelodyList->Size = System::Drawing::Size(194, 329);
			this->MelodyList->TabIndex = 22;
			this->MelodyList->UseCompatibleStateImageBehavior = false;
			this->MelodyList->View = System::Windows::Forms::View::List;
			this->MelodyList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::MelodyList_SelectedIndexChanged);
			// 
			// Del_track
			// 
			this->Del_track->BackColor = System::Drawing::Color::Red;
			this->Del_track->Location = System::Drawing::Point(350, 121);
			this->Del_track->Name = L"Del_track";
			this->Del_track->Size = System::Drawing::Size(75, 23);
			this->Del_track->TabIndex = 23;
			this->Del_track->Text = L"Delete";
			this->Del_track->UseVisualStyleBackColor = false;
			this->Del_track->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Del_but
			// 
			this->Del_but->BackColor = System::Drawing::Color::Aqua;
			this->Del_but->Location = System::Drawing::Point(309, 199);
			this->Del_but->Name = L"Del_but";
			this->Del_but->Size = System::Drawing::Size(75, 23);
			this->Del_but->TabIndex = 24;
			this->Del_but->Text = L"Delete";
			this->Del_but->UseVisualStyleBackColor = false;
			this->Del_but->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(226, 230);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 25;
			this->textBox1->Tag = L"";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->Enabled = false;
			this->button19->Location = System::Drawing::Point(341, 22);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(18, 72);
			this->button19->TabIndex = 37;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Aqua;
			this->button20->Enabled = false;
			this->button20->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button20->Location = System::Drawing::Point(350, 22);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(26, 96);
			this->button20->TabIndex = 36;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button21->Enabled = false;
			this->button21->Location = System::Drawing::Point(316, 22);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(18, 72);
			this->button21->TabIndex = 35;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Aqua;
			this->button22->Enabled = false;
			this->button22->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button22->Location = System::Drawing::Point(325, 22);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(26, 96);
			this->button22->TabIndex = 34;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button23->Enabled = false;
			this->button23->Location = System::Drawing::Point(291, 22);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(18, 72);
			this->button23->TabIndex = 33;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Aqua;
			this->button24->Enabled = false;
			this->button24->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button24->Location = System::Drawing::Point(300, 22);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(26, 96);
			this->button24->TabIndex = 32;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Aqua;
			this->button25->Enabled = false;
			this->button25->Location = System::Drawing::Point(275, 22);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(26, 96);
			this->button25->TabIndex = 31;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button26->Enabled = false;
			this->button26->Location = System::Drawing::Point(242, 22);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(18, 72);
			this->button26->TabIndex = 30;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Aqua;
			this->button27->Enabled = false;
			this->button27->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button27->Location = System::Drawing::Point(251, 22);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(26, 96);
			this->button27->TabIndex = 29;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button28->Enabled = false;
			this->button28->Location = System::Drawing::Point(217, 22);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(18, 72);
			this->button28->TabIndex = 28;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Aqua;
			this->button29->Enabled = false;
			this->button29->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button29->Location = System::Drawing::Point(226, 22);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(26, 96);
			this->button29->TabIndex = 27;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Aqua;
			this->button30->Enabled = false;
			this->button30->Location = System::Drawing::Point(201, 22);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(26, 96);
			this->button30->TabIndex = 26;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button31->Enabled = false;
			this->button31->Location = System::Drawing::Point(514, 22);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(18, 72);
			this->button31->TabIndex = 49;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Aqua;
			this->button32->Enabled = false;
			this->button32->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button32->Location = System::Drawing::Point(523, 22);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(26, 96);
			this->button32->TabIndex = 48;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button33->Enabled = false;
			this->button33->Location = System::Drawing::Point(489, 22);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(18, 72);
			this->button33->TabIndex = 47;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Aqua;
			this->button34->Enabled = false;
			this->button34->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button34->Location = System::Drawing::Point(498, 22);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(26, 96);
			this->button34->TabIndex = 46;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button35->Enabled = false;
			this->button35->Location = System::Drawing::Point(464, 22);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(18, 72);
			this->button35->TabIndex = 45;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Aqua;
			this->button36->Enabled = false;
			this->button36->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button36->Location = System::Drawing::Point(473, 22);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(26, 96);
			this->button36->TabIndex = 44;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Aqua;
			this->button37->Enabled = false;
			this->button37->Location = System::Drawing::Point(448, 22);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(26, 96);
			this->button37->TabIndex = 43;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button38->Enabled = false;
			this->button38->Location = System::Drawing::Point(415, 22);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(18, 72);
			this->button38->TabIndex = 42;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Aqua;
			this->button39->Enabled = false;
			this->button39->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button39->Location = System::Drawing::Point(424, 22);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(26, 96);
			this->button39->TabIndex = 41;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button40->Enabled = false;
			this->button40->Location = System::Drawing::Point(390, 22);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(18, 72);
			this->button40->TabIndex = 40;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Aqua;
			this->button41->Enabled = false;
			this->button41->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button41->Location = System::Drawing::Point(399, 22);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(26, 96);
			this->button41->TabIndex = 39;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Aqua;
			this->button42->Enabled = false;
			this->button42->Location = System::Drawing::Point(374, 22);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(26, 96);
			this->button42->TabIndex = 38;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(461, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 50;
			this->label1->Text = L"label1";
			// 
			// open_button
			// 
			this->open_button->Location = System::Drawing::Point(429, 214);
			this->open_button->Name = L"open_button";
			this->open_button->Size = System::Drawing::Size(75, 23);
			this->open_button->TabIndex = 51;
			this->open_button->Text = L"Open";
			this->open_button->UseVisualStyleBackColor = true;
			this->open_button->Click += gcnew System::EventHandler(this, &MyForm::open_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(823, 331);
			this->Controls->Add(this->open_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Del_but);
			this->Controls->Add(this->Del_track);
			this->Controls->Add(this->MelodyList);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Dur_selector);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->Del_las);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->Play_edit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		
		DomainUpDown^ d1;
		Button^ b1; Button^ b2;Button^ b3; Button^ b4; Button^ b5; Button^ b6; Button^ b7; Button^ b8; Button^ b9; Button^ b10;
		Button^ b11; Button^ b12; Button^ b13; Button^ b14; Button^ b15; Button^ b16;Button^ b18;Button^ b17;DomainUpDown^ d2;
		Button^ b; MySound* m;
		int dur;int size;int count;
		MySound* ms; MySound* fs;
		public: track* trax; track* nt;public: track* f_Trax; MyMus MyM;

				/// void poi() - метод, присваивающий указателям кнопки

	private: void poi() {
		b1 = Del_but;
		b2 = save_button;
		b3 = open_button;
		b4 = button4;
		b7 = button7;
		b8 = button8;
		b9 = button9;
		b10 = button10;
		b11 = button11;
		b12 = button12;
		b13 = button13;
		b14 = button14;
		b15 = button15;
		b16 = button16;
		b17 = button17;
		b18 = button18;
	}


	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 char* buffer;
			 //HWAVEOUT hWaveOut;
			 //			 WAVEHDR header;

			

			 /// add(int so, int du) - метод, добавляющий в конец мелодии ноту
			 /// @int SO – параметр, хранящий частоту ноты
			 /// @int dur – параметр, хранящий длительность ноты			

void add(int so, int du) {
				if (fs == NULL) {
					ms = new MySound;
					ms->l = NULL;
					fs = ms;
				}
				else {
					ms->n = new MySound;
					ms->n->l = ms;
					ms = ms->n;
				}
				ms->s = so;
				ms->d = du;
				ms->n = NULL;
				size = size + ms->d;
				count++;
			}

/// del() - метод, удаляющий из конца мелодии ноту

void del() {
				if (ms != NULL) {
					MySound* d;
					d = ms;
					if (ms->l != NULL) {
						ms = ms->l;
						ms->n = NULL;
					}
					else {
						ms = NULL;
						fs = NULL;
					}			
					delete d;
				}
			}

void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				//Do
					poi();
					int Sound = 130;
					MyM.buttonM(Sound, dur);
					add(Sound, dur);
			}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			//Re
			poi();
			int Sound = 146;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			//Mi
			poi();
			int Sound = 164;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			//Fa
			poi();
			int Sound = 174;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);

	};

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			//Sol
			poi();
			int Sound = 196;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}

private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			//Si
			poi();
			int Sound = 246;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			//Lya
			poi();
			int Sound = 220;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}

private: System::Void Dur_selector_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {

		poi();
		d2 = Dur_selector;
		if (d2->Text == "Целая") {
			dur = 48000;
		}
		if (d2->Text == "3/4") {
			dur = 48000 * 3 / 4;
		}
		if (d2->Text == "Половинка") {
			dur = 48000 / 2;
		}
		if (d2->Text == "Четвертушка") {
			dur = 48000 / 4;
		}
		if (d2->Text == "Восьмая") {
			dur = 48000 / 8;
		}
		if (d2->Text == "Шестнадцатая") {
			dur = 48000 / 16;
		}
		if (d2->Text != "Длительность") {

			b1->Enabled = true;
			b2->Enabled = true;
			b3->Enabled = true;
			b4->Enabled = true;
			b7->Enabled = true;
			b8->Enabled = true;
			b9->Enabled = true;
			b10->Enabled = true;
			b11->Enabled = true;
			b12->Enabled = true;
			b13->Enabled = true;
			b14->Enabled = true;
			b15->Enabled = true;
			b16->Enabled = true;
			b17->Enabled = true;
			b18->Enabled = true;

			Button^ bt1; Button^ bt2;Button^ bt3; Button^ bt4; Button^ bt5; Button^ bt6; Button^ bt7; Button^ bt8; Button^ bt9; Button^ bt10;
			Button^ bt11; Button^ bt12; Button^ bt13; Button^ bt14; Button^ bt15;

			bt1 = button19;
			bt2 = button20;
			bt3 = button21;
			bt4 = button22;
			bt7 = button23;
			bt8 = button24;
			bt9 = button25;
			bt10 = button26;
			bt11 = button27;
			bt12 = button28;
			bt13 = button29;
			bt14 = button30;

			bt1->Enabled = true;
			bt2->Enabled = true;
			bt3->Enabled = true;
			bt4->Enabled = true;
			bt7->Enabled = true;
			bt8->Enabled = true;
			bt9->Enabled = true;
			bt10->Enabled = true;
			bt11->Enabled = true;
			bt12->Enabled = true;
			bt13->Enabled = true;
			bt14->Enabled = true;

			bt1 = button31;
			bt2 = button32;
			bt3 = button33;
			bt4 = button34;
			bt7 = button35;
			bt8 = button36;
			bt9 = button37;
			bt10 = button38;
			bt11 = button39;
			bt12 = button40;
			bt13 = button41;
			bt14 = button42;

			bt1->Enabled = true;
			bt2->Enabled = true;
			bt3->Enabled = true;
			bt4->Enabled = true;
			bt7->Enabled = true;
			bt8->Enabled = true;
			bt9->Enabled = true;
			bt10->Enabled = true;
			bt11->Enabled = true;
			bt12->Enabled = true;
			bt13->Enabled = true;
			bt14->Enabled = true;
		}
	}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		poi();
		Label ^l = label1;
		l->Text = MyM.scan_dir(_T("C:\\Users\\mssi\\desktop\\music_app\\")).ToString();
	}

const int paus = 4800;

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MyM.Play_Trac(fs, ms, size, count);
	}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			//Empty
			poi();
			int Sound;
			Sound = 0;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		del();
	}

	
private: System::Void save_button_Click(System::Object^  sender, System::EventArgs^  e) {
		TextBox^ t;
		t = textBox1;
		nt = new track;
		nt->t = fs;
		nt->name = (char*)(void*)Marshal::StringToHGlobalAnsi(t->Text);
		String^ s = gcnew String(nt->name);
		//XML_saveT(nt->t, nt->name);
		MyM.SaveToFile(fs, textBox1->Text);
		track* se;
		se = f_Trax;
		bool i = 1;
		while (se != NULL) {
			if (!strcmp(se->name,(char*)(void*)Marshal::StringToHGlobalAnsi(t->Text))) {
				while (se->t != NULL) {
					if (se->t != NULL) {
						MySound* d;
						d = se->t;
						if (se->t->l != NULL) {
							se->t = se->t->l;
							se->t->n = NULL;
						}
						else {
							se->t = NULL;
						}
					}
				}
				se->t = nt->t;
				i = 0;
			}
			se = se->n;
		}
		if (i) {
			if (f_Trax == NULL) {
				trax = nt;
				trax->l = NULL;
				trax->n = NULL;
				f_Trax = trax;
				//trax->name;
			}
			else {
				trax->n = nt;
				trax->n->l = trax;
				trax = trax->n;
				trax->n = NULL;
			}
			ListView^ l; l = MelodyList;
			l->Items->Add(gcnew String(nt->name));
		}
		t->Text = "";
		fs = NULL;
	}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		//Do sharp
			poi();
			int Sound = 138;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		//Re sharp
			poi();
			int Sound = 155;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		//Sol sharp
			poi();
			int Sound = 207;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		//Fa sharp
			poi();
			int Sound = 185;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		//Si bi mol
			poi();
			int Sound = 233;
			MyM.buttonM(Sound, dur);
			add(Sound, dur);
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		TextBox^ t;
		t = textBox1;
		Button^ b;
		b = save_button;
		if (t->Text != "")
			b->Enabled = 1;
		else
			b->Enabled = 0;
	}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	//Do
		poi();
		int Sound = 261;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	//Do sharp
		poi();
		int Sound = 277;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
		//Re
		poi();
		int Sound = 293;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 311;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
		//Mi
		poi();
		int Sound = 329;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
		//Fa
		poi();
		int Sound = 349;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
		//Sol
		poi();
		int Sound = 392;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	//Fa sharp
		poi();
		int Sound = 369;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	//Sol sharp
		poi();
		int Sound = 415;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		//Lya
		poi();
		int Sound = 440;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button19_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//Si bi mol
		poi();
		int Sound = 466;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		//Si
		poi();
		int Sound = 493;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 523;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 554;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 587;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 622;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 659;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 698;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 784;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 739;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 830;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 880;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		int Sound = 932;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	//Re sharp
		poi();
		int Sound = 987;
		MyM.buttonM(Sound, dur);
		add(Sound, dur);
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	while (fs!=NULL){
		del();
	}
}


private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	track* pointer = nt->n;
	nt->l->n = nt->n;
	nt->n->l = nt->l;
	delete nt;
	nt = pointer;
	ListView^ l; l = MelodyList;
	l->SelectedItems[0]->Remove();
	fs = nt->t;
	ms = fs;
}

private: System::Void open_button_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^opener = openFileDialog1;
	opener->Filter = "(*.unm)|*.unm";
	opener->ShowDialog();
	if (opener->FileName != "") {
		fs = MyM.ReadFromFile(opener->FileName,count,size,ms);
		ms = fs;
		count = 0; size = 0;
		while (ms->n != NULL) {
			count++;
			size = size + ms->d;
			ms = ms->n;
		}
		count++;
		size = size + ms->d;
	}
}


private: System::Void MelodyList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	while (fs != NULL) {
		del();
	}
	ListView^ l; l = MelodyList;
	nt = f_Trax;
	while ((nt != NULL) && (strcmp(nt->name, ((char*)(void*)Marshal::StringToHGlobalAnsi(l->SelectedItems[0]->Text)))))
	{
		nt = nt->n;
	}
	if (!strcmp(nt->name, ((char*)(void*)Marshal::StringToHGlobalAnsi(l->SelectedItems[0]->Text)))) {
		fs = nt->t;
		ms = fs;
		TextBox^ ns; ns = textBox1;
		ns->Text = gcnew String(nt->name);
	}
}
};
};