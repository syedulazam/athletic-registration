#pragma once
//add reference of header file created
#include "User.h"

namespace Registration {
	//Namespaces are used to organize code into logical groups
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ ptbox;
	protected:
	private: System::Windows::Forms::RadioButton^ pt4;
	private: System::Windows::Forms::RadioButton^ pt3;
	private: System::Windows::Forms::RadioButton^ pt2;
	private: System::Windows::Forms::RadioButton^ pt1;
	private: System::Windows::Forms::GroupBox^ cebox;
	private: System::Windows::Forms::RadioButton^ ce3;
	private: System::Windows::Forms::RadioButton^ ce2;
	private: System::Windows::Forms::RadioButton^ ce1;
	private: System::Windows::Forms::GroupBox^ tpbox;
	private: System::Windows::Forms::RadioButton^ tp3;
	private: System::Windows::Forms::RadioButton^ tp2;
	private: System::Windows::Forms::RadioButton^ tp1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ lstoutput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtname;
	private: System::Windows::Forms::TextBox^ txtweight;
	private: System::Windows::Forms::Button^ btnupdate;
	private: System::Windows::Forms::Button^ btnclear;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::ComboBox^ cbage;
	private: System::Windows::Forms::Button^ btntotal;
	private: System::Windows::Forms::TextBox^ ltotal;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtage;
	private: System::Windows::Forms::Label^ lblTime;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::ComponentModel::IContainer^ components;





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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ptbox = (gcnew System::Windows::Forms::GroupBox());
			this->pt4 = (gcnew System::Windows::Forms::RadioButton());
			this->pt3 = (gcnew System::Windows::Forms::RadioButton());
			this->pt2 = (gcnew System::Windows::Forms::RadioButton());
			this->pt1 = (gcnew System::Windows::Forms::RadioButton());
			this->ltotal = (gcnew System::Windows::Forms::TextBox());
			this->cebox = (gcnew System::Windows::Forms::GroupBox());
			this->ce3 = (gcnew System::Windows::Forms::RadioButton());
			this->ce2 = (gcnew System::Windows::Forms::RadioButton());
			this->ce1 = (gcnew System::Windows::Forms::RadioButton());
			this->btntotal = (gcnew System::Windows::Forms::Button());
			this->tpbox = (gcnew System::Windows::Forms::GroupBox());
			this->tp3 = (gcnew System::Windows::Forms::RadioButton());
			this->tp2 = (gcnew System::Windows::Forms::RadioButton());
			this->tp1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lstoutput = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->txtweight = (gcnew System::Windows::Forms::TextBox());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->cbage = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtage = (gcnew System::Windows::Forms::TextBox());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->ptbox->SuspendLayout();
			this->cebox->SuspendLayout();
			this->tpbox->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->ptbox);
			this->panel1->Controls->Add(this->ltotal);
			this->panel1->Controls->Add(this->cebox);
			this->panel1->Controls->Add(this->btntotal);
			this->panel1->Controls->Add(this->tpbox);
			this->panel1->Location = System::Drawing::Point(644, 222);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(651, 274);
			this->panel1->TabIndex = 0;
			// 
			// ptbox
			// 
			this->ptbox->BackColor = System::Drawing::Color::AliceBlue;
			this->ptbox->Controls->Add(this->pt4);
			this->ptbox->Controls->Add(this->pt3);
			this->ptbox->Controls->Add(this->pt2);
			this->ptbox->Controls->Add(this->pt1);
			this->ptbox->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ptbox->ForeColor = System::Drawing::Color::MidnightBlue;
			this->ptbox->Location = System::Drawing::Point(325, 13);
			this->ptbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptbox->Name = L"ptbox";
			this->ptbox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ptbox->Size = System::Drawing::Size(143, 179);
			this->ptbox->TabIndex = 1;
			this->ptbox->TabStop = false;
			this->ptbox->Text = L"PRIVATE TUITION: 60/-";
			// 
			// pt4
			// 
			this->pt4->AutoSize = true;
			this->pt4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pt4->Location = System::Drawing::Point(15, 132);
			this->pt4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pt4->Name = L"pt4";
			this->pt4->Size = System::Drawing::Size(79, 20);
			this->pt4->TabIndex = 4;
			this->pt4->TabStop = true;
			this->pt4->Text = L"4 hours";
			this->pt4->UseVisualStyleBackColor = true;
			// 
			// pt3
			// 
			this->pt3->AutoSize = true;
			this->pt3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pt3->Location = System::Drawing::Point(15, 109);
			this->pt3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pt3->Name = L"pt3";
			this->pt3->Size = System::Drawing::Size(79, 20);
			this->pt3->TabIndex = 3;
			this->pt3->TabStop = true;
			this->pt3->Text = L"3 hours";
			this->pt3->UseVisualStyleBackColor = true;
			// 
			// pt2
			// 
			this->pt2->AutoSize = true;
			this->pt2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pt2->Location = System::Drawing::Point(15, 85);
			this->pt2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pt2->Name = L"pt2";
			this->pt2->Size = System::Drawing::Size(79, 20);
			this->pt2->TabIndex = 2;
			this->pt2->TabStop = true;
			this->pt2->Text = L"2 hours";
			this->pt2->UseVisualStyleBackColor = true;
			// 
			// pt1
			// 
			this->pt1->AutoSize = true;
			this->pt1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pt1->Location = System::Drawing::Point(15, 61);
			this->pt1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pt1->Name = L"pt1";
			this->pt1->Size = System::Drawing::Size(72, 20);
			this->pt1->TabIndex = 1;
			this->pt1->TabStop = true;
			this->pt1->Text = L"1 hour";
			this->pt1->UseVisualStyleBackColor = true;
			// 
			// ltotal
			// 
			this->ltotal->BackColor = System::Drawing::Color::AliceBlue;
			this->ltotal->Font = (gcnew System::Drawing::Font(L"Bell MT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltotal->ForeColor = System::Drawing::Color::Navy;
			this->ltotal->Location = System::Drawing::Point(340, 215);
			this->ltotal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ltotal->Name = L"ltotal";
			this->ltotal->Size = System::Drawing::Size(182, 37);
			this->ltotal->TabIndex = 14;
			// 
			// cebox
			// 
			this->cebox->BackColor = System::Drawing::Color::AliceBlue;
			this->cebox->Controls->Add(this->ce3);
			this->cebox->Controls->Add(this->ce2);
			this->cebox->Controls->Add(this->ce1);
			this->cebox->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cebox->ForeColor = System::Drawing::Color::MidnightBlue;
			this->cebox->Location = System::Drawing::Point(474, 13);
			this->cebox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cebox->Name = L"cebox";
			this->cebox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cebox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->cebox->Size = System::Drawing::Size(169, 179);
			this->cebox->TabIndex = 1;
			this->cebox->TabStop = false;
			this->cebox->Text = L"COMPETITIONS ENTERED: 150/-";
			// 
			// ce3
			// 
			this->ce3->AutoSize = true;
			this->ce3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ce3->Location = System::Drawing::Point(11, 132);
			this->ce3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ce3->Name = L"ce3";
			this->ce3->Size = System::Drawing::Size(124, 20);
			this->ce3->TabIndex = 7;
			this->ce3->TabStop = true;
			this->ce3->Text = L"3 competitions";
			this->ce3->UseVisualStyleBackColor = true;
			// 
			// ce2
			// 
			this->ce2->AutoSize = true;
			this->ce2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ce2->Location = System::Drawing::Point(11, 97);
			this->ce2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ce2->Name = L"ce2";
			this->ce2->Size = System::Drawing::Size(124, 20);
			this->ce2->TabIndex = 6;
			this->ce2->TabStop = true;
			this->ce2->Text = L"2 competitions";
			this->ce2->UseVisualStyleBackColor = true;
			// 
			// ce1
			// 
			this->ce1->AutoSize = true;
			this->ce1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ce1->Location = System::Drawing::Point(11, 61);
			this->ce1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ce1->Name = L"ce1";
			this->ce1->Size = System::Drawing::Size(117, 20);
			this->ce1->TabIndex = 5;
			this->ce1->TabStop = true;
			this->ce1->Text = L"1 competition";
			this->ce1->UseVisualStyleBackColor = true;
			// 
			// btntotal
			// 
			this->btntotal->BackColor = System::Drawing::Color::AliceBlue;
			this->btntotal->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btntotal->ForeColor = System::Drawing::Color::Navy;
			this->btntotal->Location = System::Drawing::Point(152, 204);
			this->btntotal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btntotal->Name = L"btntotal";
			this->btntotal->Size = System::Drawing::Size(156, 55);
			this->btntotal->TabIndex = 13;
			this->btntotal->Text = L"TOTAL";
			this->btntotal->UseVisualStyleBackColor = false;
			this->btntotal->Click += gcnew System::EventHandler(this, &MainForm::btntotal_Click);
			// 
			// tpbox
			// 
			this->tpbox->BackColor = System::Drawing::Color::AliceBlue;
			this->tpbox->Controls->Add(this->tp3);
			this->tpbox->Controls->Add(this->tp2);
			this->tpbox->Controls->Add(this->tp1);
			this->tpbox->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tpbox->ForeColor = System::Drawing::Color::MidnightBlue;
			this->tpbox->Location = System::Drawing::Point(10, 13);
			this->tpbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tpbox->Name = L"tpbox";
			this->tpbox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tpbox->Size = System::Drawing::Size(309, 179);
			this->tpbox->TabIndex = 0;
			this->tpbox->TabStop = false;
			this->tpbox->Text = L"TRAINING PLAN";
			// 
			// tp3
			// 
			this->tp3->AutoSize = true;
			this->tp3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tp3->Location = System::Drawing::Point(5, 129);
			this->tp3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tp3->Name = L"tp3";
			this->tp3->Size = System::Drawing::Size(215, 20);
			this->tp3->TabIndex = 2;
			this->tp3->TabStop = true;
			this->tp3->Text = L"Elite[5sessions/week]:225/-";
			this->tp3->UseVisualStyleBackColor = true;
			// 
			// tp2
			// 
			this->tp2->AutoSize = true;
			this->tp2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tp2->Location = System::Drawing::Point(5, 88);
			this->tp2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tp2->Name = L"tp2";
			this->tp2->Size = System::Drawing::Size(269, 20);
			this->tp2->TabIndex = 1;
			this->tp2->TabStop = true;
			this->tp2->Text = L"Intermediate[3sessions/week]:200/-";
			this->tp2->UseVisualStyleBackColor = true;
			// 
			// tp1
			// 
			this->tp1->AutoSize = true;
			this->tp1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tp1->Location = System::Drawing::Point(5, 49);
			this->tp1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tp1->Name = L"tp1";
			this->tp1->Size = System::Drawing::Size(244, 20);
			this->tp1->TabIndex = 0;
			this->tp1->TabStop = true;
			this->tp1->Text = L"Beginner[2sessions/week]:175/-";
			this->tp1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->lstoutput);
			this->panel2->Location = System::Drawing::Point(199, 522);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(878, 166);
			this->panel2->TabIndex = 1;
			// 
			// lstoutput
			// 
			this->lstoutput->BackColor = System::Drawing::Color::AliceBlue;
			this->lstoutput->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstoutput->ForeColor = System::Drawing::Color::Navy;
			this->lstoutput->FormattingEnabled = true;
			this->lstoutput->ItemHeight = 24;
			this->lstoutput->Location = System::Drawing::Point(11, 10);
			this->lstoutput->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lstoutput->Name = L"lstoutput";
			this->lstoutput->Size = System::Drawing::Size(855, 124);
			this->lstoutput->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::AliceBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(59, 228);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 49);
			this->label1->TabIndex = 2;
			this->label1->Text = L"NAME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::AliceBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(59, 358);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 56);
			this->label2->TabIndex = 3;
			this->label2->Text = L"AGE CATEGORY";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::AliceBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(55, 429);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 51);
			this->label3->TabIndex = 4;
			this->label3->Text = L"WEIGHT (kg)";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtname
			// 
			this->txtname->BackColor = System::Drawing::Color::AliceBlue;
			this->txtname->Font = (gcnew System::Drawing::Font(L"Bell MT", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtname->ForeColor = System::Drawing::Color::Navy;
			this->txtname->Location = System::Drawing::Point(250, 239);
			this->txtname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(367, 32);
			this->txtname->TabIndex = 5;
			// 
			// txtweight
			// 
			this->txtweight->BackColor = System::Drawing::Color::AliceBlue;
			this->txtweight->Font = (gcnew System::Drawing::Font(L"Bell MT", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtweight->ForeColor = System::Drawing::Color::Navy;
			this->txtweight->Location = System::Drawing::Point(254, 444);
			this->txtweight->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtweight->Name = L"txtweight";
			this->txtweight->Size = System::Drawing::Size(363, 32);
			this->txtweight->TabIndex = 7;
			// 
			// btnupdate
			// 
			this->btnupdate->BackColor = System::Drawing::Color::AliceBlue;
			this->btnupdate->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnupdate->ForeColor = System::Drawing::Color::Navy;
			this->btnupdate->Location = System::Drawing::Point(344, 701);
			this->btnupdate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(213, 57);
			this->btnupdate->TabIndex = 8;
			this->btnupdate->Text = L"SHOW DATA";
			this->btnupdate->UseVisualStyleBackColor = false;
			this->btnupdate->Click += gcnew System::EventHandler(this, &MainForm::btnupdate_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::Color::AliceBlue;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->ForeColor = System::Drawing::Color::Navy;
			this->btnclear->Location = System::Drawing::Point(573, 701);
			this->btnclear->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(196, 57);
			this->btnclear->TabIndex = 10;
			this->btnclear->Text = L"CLEAR";
			this->btnclear->UseVisualStyleBackColor = false;
			this->btnclear->Click += gcnew System::EventHandler(this, &MainForm::btnclear_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::AliceBlue;
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->ForeColor = System::Drawing::Color::Navy;
			this->btnexit->Location = System::Drawing::Point(783, 701);
			this->btnexit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(196, 57);
			this->btnexit->TabIndex = 11;
			this->btnexit->Text = L"EXIT";
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &MainForm::btnexit_Click);
			// 
			// cbage
			// 
			this->cbage->BackColor = System::Drawing::Color::AliceBlue;
			this->cbage->Font = (gcnew System::Drawing::Font(L"Bell MT", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbage->ForeColor = System::Drawing::Color::Navy;
			this->cbage->FormattingEnabled = true;
			this->cbage->Location = System::Drawing::Point(258, 372);
			this->cbage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cbage->Name = L"cbage";
			this->cbage->Size = System::Drawing::Size(359, 33);
			this->cbage->TabIndex = 12;
			this->cbage->Text = L"SELECT AGE CATEGORY";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Location = System::Drawing::Point(40, 8);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1261, 145);
			this->panel3->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::AliceBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label4->Location = System::Drawing::Point(61, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 51);
			this->label4->TabIndex = 16;
			this->label4->Text = L"AGE";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtage
			// 
			this->txtage->BackColor = System::Drawing::Color::AliceBlue;
			this->txtage->Font = (gcnew System::Drawing::Font(L"Bell MT", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtage->ForeColor = System::Drawing::Color::Navy;
			this->txtage->Location = System::Drawing::Point(258, 304);
			this->txtage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtage->Name = L"txtage";
			this->txtage->Size = System::Drawing::Size(363, 32);
			this->txtage->TabIndex = 17;
			// 
			// lblTime
			// 
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->ForeColor = System::Drawing::Color::White;
			this->lblTime->Location = System::Drawing::Point(24, 0);
			this->lblTime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(229, 36);
			this->lblTime->TabIndex = 18;
			this->lblTime->Text = L"label5";
			// 
			// lblDate
			// 
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->ForeColor = System::Drawing::Color::White;
			this->lblDate->Location = System::Drawing::Point(267, 0);
			this->lblDate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(266, 36);
			this->lblDate->TabIndex = 19;
			this->lblDate->Text = L"label5";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->lblDate);
			this->panel4->Controls->Add(this->lblTime);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(442, 182);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(543, 36);
			this->panel4->TabIndex = 20;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1577, 760);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->txtage);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->cbage);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btnupdate);
			this->Controls->Add(this->txtweight);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ptbox->ResumeLayout(false);
			this->ptbox->PerformLayout();
			this->cebox->ResumeLayout(false);
			this->cebox->PerformLayout();
			this->tpbox->ResumeLayout(false);
			this->tpbox->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//formatting text 	
		String^ stdDetails = "{0,-10}{1,-13}{2,-13}{3,-15}";


	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//headings for lstoutput

		lstoutput->Items->Add(String::Format(stdDetails,
			"|Name                       |",
			"|Age                     |",
			"|Age_Category                        |",
			"|Weight                |"));

		//Entering Age categories 
		cbage->Items->Add("Super Champions: Over 50 years");
		cbage->Items->Add("Champions: 35-50 years");
		cbage->Items->Add("Regulars: 21-35 years");
		cbage->Items->Add("Clubbers: 16-20 years");
		cbage->Items->Add("Combat Fit: 8-15 years");
		cbage->Items->Add("Fliers: Under 7 years");
	}

		   //Functioinig of update button
	private: System::Void btnupdate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Name;
		String^ Age;
		String^ Age_Category;
		String^ Weight;

		Name = txtname->Text + "\t\t";
		Age = txtage->Text + "\t";
		Age_Category = cbage->Text + "\t\t";
		Weight = txtweight->Text + "\t";


		lstoutput->Items->Add(String::Format(stdDetails,
			Name, Age, Age_Category, Weight));

	}

		   //functioning button add
	private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) {
		txtname->Text = "";
		txtage->Text = "";
		cbage->Text = "SELECT AGE CATEGORY";
		txtweight->Text = "";
		ltotal->Text = "";

	}

		   //functioning button clear
	private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtname->Text = "";
		txtage->Text = "";
		cbage->Text = "SELECT AGE CATEGORY";
		txtweight->Text = "";
		ltotal->Text = "";
		tp1->Checked = false;
		tp2->Checked = false;
		tp3->Checked = false;
		pt1->Checked = false;
		pt2->Checked = false;
		pt3->Checked = false;
		pt4->Checked = false;
		ce1->Checked = false;
		ce2->Checked = false;
		ce3->Checked = false;


		lstoutput->Items->Clear();
		lstoutput->Items->Add(String::Format(stdDetails,
			"|Name                |",
			"|Age                 |",
			"|Age_Category                |",
			"|Weight                |"));

	}

		   //functioning button exit
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult iExit;
			iExit = MessageBox::Show("Please Confirm if you want to exit",
				"Tabular", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

		   //functioning button total 

	private: System::Void btntotal_Click(System::Object^ sender, System::EventArgs^ e) {
		int BgPrice = 700;
		int InterPrice = 800;
		int EliPrice = 900;

		System::String^ Price;

		//---------------------------------------------------------------------------------

		if (tp1->Checked == true && pt1->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (60 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt1->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (60 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt1->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (60 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp1->Checked == true && pt2->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (120 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt2->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (120 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt2->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (120 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp1->Checked == true && pt3->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (180 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt3->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (180 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt3->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (180 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp1->Checked == true && pt4->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (240 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt4->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (240 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp1->Checked == true && pt4->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (BgPrice + (240 + 450)));
			ltotal->AppendText(Price);
		}
		//---------------------------------------------------------------------------------------------
		if (tp2->Checked == true && pt1->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (60 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt1->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (60 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt1->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (60 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp2->Checked == true && pt2->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (120 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt2->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (120 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt2->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (120 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp2->Checked == true && pt3->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (180 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt3->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (180 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt3->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (180 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp2->Checked == true && pt4->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (240 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt4->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (240 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp2->Checked == true && pt4->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (InterPrice + (240 + 450)));
			ltotal->AppendText(Price);
		}
		//------------------------------------------------------------------------------------------
		if (tp3->Checked == true && pt1->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (60 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt1->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (60 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt1->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (60 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp3->Checked == true && pt2->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (120 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt2->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (120 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt2->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (120 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp3->Checked == true && pt3->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (180 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt3->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (180 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt3->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (180 + 450)));
			ltotal->AppendText(Price);
		}



		if (tp3->Checked == true && pt4->Checked == true && ce1->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (240 + 150)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt4->Checked == true && ce2->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (240 + 300)));
			ltotal->AppendText(Price);
		}
		else if (tp3->Checked == true && pt4->Checked == true && ce3->Checked == true)
		{
			Price = String::Format("{0:C}", (EliPrice + (240 + 450)));
			ltotal->AppendText(Price);
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime dt = DateTime::Now;
		DateTime da = DateTime::Now;

		lblTime->Text = dt.Now.ToLongTimeString();
		lblDate->Text = dt.Now.ToLongDateString();
	}
	};
}

