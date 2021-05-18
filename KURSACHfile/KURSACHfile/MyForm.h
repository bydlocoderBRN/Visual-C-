#pragma once

namespace KURSACHfile {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtIn1;
	private: System::Windows::Forms::TextBox^ txtSave1;
	private: System::Windows::Forms::Button^ btnSave1;
	private: System::Windows::Forms::Button^ btnIn1;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::TextBox^ txtSave2;
	private: System::Windows::Forms::Button^ btnSave2;






	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtIn3;
	private: System::Windows::Forms::TextBox^ txtSave3;

	private: System::Windows::Forms::Button^ btnSave3;
	private: System::Windows::Forms::Button^ btnIn3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtIn4;
	private: System::Windows::Forms::TextBox^ txtSave4;
	private: System::Windows::Forms::Button^ btnSave4;
	private: System::Windows::Forms::Button^ btnIn4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->txtIn1 = (gcnew System::Windows::Forms::TextBox());
			this->txtSave1 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave1 = (gcnew System::Windows::Forms::Button());
			this->btnIn1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtSave2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->txtIn3 = (gcnew System::Windows::Forms::TextBox());
			this->txtSave3 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave3 = (gcnew System::Windows::Forms::Button());
			this->btnIn3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->txtIn4 = (gcnew System::Windows::Forms::TextBox());
			this->txtSave4 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave4 = (gcnew System::Windows::Forms::Button());
			this->btnIn4 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(760, 372);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->txtIn1);
			this->tabPage1->Controls->Add(this->txtSave1);
			this->tabPage1->Controls->Add(this->btnSave1);
			this->tabPage1->Controls->Add(this->btnIn1);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(752, 343);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задание 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Enter += gcnew System::EventHandler(this, &MyForm::tabPage1_Enter);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(5, 306);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(732, 22);
			this->textBox9->TabIndex = 17;
			// 
			// txtIn1
			// 
			this->txtIn1->Location = System::Drawing::Point(621, 97);
			this->txtIn1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIn1->Name = L"txtIn1";
			this->txtIn1->ReadOnly = true;
			this->txtIn1->Size = System::Drawing::Size(117, 22);
			this->txtIn1->TabIndex = 16;
			this->txtIn1->Click += gcnew System::EventHandler(this, &MyForm::txtIn1_Click);
			// 
			// txtSave1
			// 
			this->txtSave1->Location = System::Drawing::Point(621, 206);
			this->txtSave1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSave1->Name = L"txtSave1";
			this->txtSave1->ReadOnly = true;
			this->txtSave1->Size = System::Drawing::Size(117, 22);
			this->txtSave1->TabIndex = 15;
			this->txtSave1->Click += gcnew System::EventHandler(this, &MyForm::txtSave1_Click);
			// 
			// btnSave1
			// 
			this->btnSave1->Location = System::Drawing::Point(621, 240);
			this->btnSave1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSave1->Name = L"btnSave1";
			this->btnSave1->Size = System::Drawing::Size(117, 48);
			this->btnSave1->TabIndex = 14;
			this->btnSave1->Text = L"Сохранить в файл";
			this->btnSave1->UseVisualStyleBackColor = true;
			this->btnSave1->Click += gcnew System::EventHandler(this, &MyForm::btnSave1_Click);
			// 
			// btnIn1
			// 
			this->btnIn1->Location = System::Drawing::Point(621, 126);
			this->btnIn1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnIn1->Name = L"btnIn1";
			this->btnIn1->Size = System::Drawing::Size(117, 48);
			this->btnIn1->TabIndex = 13;
			this->btnIn1->Text = L"Ввод из файла";
			this->btnIn1->UseVisualStyleBackColor = true;
			this->btnIn1->Click += gcnew System::EventHandler(this, &MyForm::btnIn1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(619, 68);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 17);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Имя файла ввода";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(619, 176);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(134, 17);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Имя файла вывода";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(305, 249);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 30);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(231, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(237, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Элементы, включенные в отрезок:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(465, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(231, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 26);
			this->label4->TabIndex = 7;
			this->label4->Text = L"[";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(293, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Введите отрезок";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(364, 182);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 182);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(231, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите последовательность чисел";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 212);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 39);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(732, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->txtSave2);
			this->tabPage2->Controls->Add(this->btnSave2);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(748, 335);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задание 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Enter += gcnew System::EventHandler(this, &MyForm::tabPage2_Enter);
			// 
			// txtSave2
			// 
			this->txtSave2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->txtSave2->Location = System::Drawing::Point(548, 128);
			this->txtSave2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSave2->Name = L"txtSave2";
			this->txtSave2->ReadOnly = true;
			this->txtSave2->Size = System::Drawing::Size(121, 22);
			this->txtSave2->TabIndex = 21;
			this->txtSave2->Click += gcnew System::EventHandler(this, &MyForm::textBox9_Click);
			// 
			// btnSave2
			// 
			this->btnSave2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSave2->Location = System::Drawing::Point(548, 159);
			this->btnSave2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSave2->Name = L"btnSave2";
			this->btnSave2->Size = System::Drawing::Size(121, 42);
			this->btnSave2->TabIndex = 20;
			this->btnSave2->Text = L"Сохранить в файл";
			this->btnSave2->UseVisualStyleBackColor = true;
			this->btnSave2->Click += gcnew System::EventHandler(this, &MyForm::btnSave2_Click);
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(545, 98);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(134, 17);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Имя файла вывода";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(481, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Введите порядок матрицы:";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button2->Location = System::Drawing::Point(527, 48);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сформировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(5, 2);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(469, 335);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(675, 20);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(41, 22);
			this->textBox4->TabIndex = 0;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->txtIn3);
			this->tabPage3->Controls->Add(this->txtSave3);
			this->tabPage3->Controls->Add(this->btnSave3);
			this->tabPage3->Controls->Add(this->btnIn3);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(748, 335);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задание 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Enter += gcnew System::EventHandler(this, &MyForm::tabPage3_Enter);
			// 
			// txtIn3
			// 
			this->txtIn3->Location = System::Drawing::Point(621, 96);
			this->txtIn3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIn3->Name = L"txtIn3";
			this->txtIn3->ReadOnly = true;
			this->txtIn3->Size = System::Drawing::Size(121, 22);
			this->txtIn3->TabIndex = 22;
			this->txtIn3->Click += gcnew System::EventHandler(this, &MyForm::txtIn3_Click);
			// 
			// txtSave3
			// 
			this->txtSave3->Location = System::Drawing::Point(621, 208);
			this->txtSave3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSave3->Name = L"txtSave3";
			this->txtSave3->ReadOnly = true;
			this->txtSave3->Size = System::Drawing::Size(121, 22);
			this->txtSave3->TabIndex = 21;
			this->txtSave3->Click += gcnew System::EventHandler(this, &MyForm::txtSave3_Click);
			// 
			// btnSave3
			// 
			this->btnSave3->Location = System::Drawing::Point(621, 239);
			this->btnSave3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSave3->Name = L"btnSave3";
			this->btnSave3->Size = System::Drawing::Size(121, 42);
			this->btnSave3->TabIndex = 20;
			this->btnSave3->Text = L"Сохранить в файл";
			this->btnSave3->UseVisualStyleBackColor = true;
			this->btnSave3->Click += gcnew System::EventHandler(this, &MyForm::btnSave3_Click);
			// 
			// btnIn3
			// 
			this->btnIn3->Location = System::Drawing::Point(621, 124);
			this->btnIn3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnIn3->Name = L"btnIn3";
			this->btnIn3->Size = System::Drawing::Size(121, 30);
			this->btnIn3->TabIndex = 19;
			this->btnIn3->Text = L"Ввод из файла";
			this->btnIn3->UseVisualStyleBackColor = true;
			this->btnIn3->Click += gcnew System::EventHandler(this, &MyForm::btnIn3_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(619, 66);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(124, 17);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Имя файла ввода";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(619, 178);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 17);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Имя файла вывода";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button6->Location = System::Drawing::Point(307, 244);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 37);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(232, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(237, 17);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Большие из рядом стоящих чисел:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(243, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(251, 17);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Введите последовательность чисел:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(293, 208);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Найти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(8, 304);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(735, 22);
			this->textBox6->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(8, 33);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(735, 22);
			this->textBox5->TabIndex = 0;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox5_KeyDown);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->txtIn4);
			this->tabPage4->Controls->Add(this->txtSave4);
			this->tabPage4->Controls->Add(this->btnSave4);
			this->tabPage4->Controls->Add(this->btnIn4);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(748, 335);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задание 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Enter += gcnew System::EventHandler(this, &MyForm::tabPage4_Enter);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 283);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 17);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Строка без скобок:";
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->Location = System::Drawing::Point(3, 303);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(739, 22);
			this->textBox8->TabIndex = 29;
			// 
			// txtIn4
			// 
			this->txtIn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->txtIn4->Location = System::Drawing::Point(621, 89);
			this->txtIn4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIn4->Name = L"txtIn4";
			this->txtIn4->ReadOnly = true;
			this->txtIn4->Size = System::Drawing::Size(121, 22);
			this->txtIn4->TabIndex = 28;
			this->txtIn4->Click += gcnew System::EventHandler(this, &MyForm::txtIn4_Click);
			// 
			// txtSave4
			// 
			this->txtSave4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->txtSave4->Location = System::Drawing::Point(619, 209);
			this->txtSave4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSave4->Name = L"txtSave4";
			this->txtSave4->ReadOnly = true;
			this->txtSave4->Size = System::Drawing::Size(121, 22);
			this->txtSave4->TabIndex = 27;
			this->txtSave4->Click += gcnew System::EventHandler(this, &MyForm::txtSave4_Click);
			// 
			// btnSave4
			// 
			this->btnSave4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSave4->Location = System::Drawing::Point(619, 240);
			this->btnSave4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSave4->Name = L"btnSave4";
			this->btnSave4->Size = System::Drawing::Size(121, 42);
			this->btnSave4->TabIndex = 26;
			this->btnSave4->Text = L"Сохранить в файл";
			this->btnSave4->UseVisualStyleBackColor = true;
			this->btnSave4->Click += gcnew System::EventHandler(this, &MyForm::btnSave4_Click);
			// 
			// btnIn4
			// 
			this->btnIn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnIn4->Location = System::Drawing::Point(621, 121);
			this->btnIn4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnIn4->Name = L"btnIn4";
			this->btnIn4->Size = System::Drawing::Size(121, 30);
			this->btnIn4->TabIndex = 25;
			this->btnIn4->Text = L"Ввод из файла";
			this->btnIn4->UseVisualStyleBackColor = true;
			this->btnIn4->Click += gcnew System::EventHandler(this, &MyForm::btnIn4_Click);
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(619, 59);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(124, 17);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Имя файла ввода";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(615, 180);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(134, 17);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Имя файла вывода";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Введите строку:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(3, 50);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->MaximumSize = System::Drawing::Size(116, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 75);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Удалить скобки";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Location = System::Drawing::Point(3, 22);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(739, 22);
			this->textBox7->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 386);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(791, 415);
			this->Name = L"MyForm";
			this->Text = L"Курсовая";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ space;
		String^ otr;
		int count, i = 0;
		String^ pref1 = "";
		String^ pref2 = "";
		String^ pref = "";
		Boolean check = true;
		Boolean checkMas = true;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pref == textBox1->Text) {
			checkMas = false;

		}

		
		
		if (pref1 != textBox2->Text || (pref2 != textBox3->Text) || (pref != textBox1->Text)) {
			textBox9->Text = "";
			otr = "";
			if (textBox1->Text != ""  && textBox2->Text != "" && textBox3->Text != "") {
				array<String^>^ S;
				if (textBox1->Text->IndexOf(" ,") == -1 && textBox1->Text->IndexOf(" - ") == -1 && textBox1->Text[0] != ',' && textBox1->Text[textBox1->Text->Length - 1] != ',' && textBox1->Text[textBox1->Text->Length - 1] != '-') {
					if (textBox1->Text[textBox1->Text->Length - 1] == ' ') {
						textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
					}
					S = textBox1->Text->Split(' ');
					for (i = 0; i <= S->Length - 1; i++) {
						if (Convert::ToSingle(S[i]) >= Convert::ToSingle(textBox2->Text) && Convert::ToSingle(S[i]) <= Convert::ToSingle(textBox3->Text))
							otr += S[i] + " ";
					}

					textBox9->Text = otr;
				}
				else {
					MessageBox::Show("Неверные значения для ввода!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else { MessageBox::Show("Заполнены не все поля для ввода!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); }

		}
		pref1 = textBox2->Text;
		pref2 = textBox3->Text;
		pref = textBox1->Text;

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox9->Text = "";
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";

	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32((e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57))
		{
			if (Convert::ToInt32(e->KeyChar) != 32) {
				e->Handled = true;
			}
			else e->Handled = false;
		}
		//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен (Также разрешен ввод пробела)
		if (e->KeyChar == 8 && textBox1->Text != "")
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 8 && textBox1->Text == "")
		{
			e->Handled = true;
		}//если нажат бэкспейс и строка пустая, то ввод запрещен
		if (e->KeyChar == 44 && textBox1->Text->Length > 0 && textBox1->Text[textBox1->Text->Length - 1] != ',') {
			e->Handled = false;
		}
		else if (e->KeyChar == 44 && textBox1->Text->Length == 0) e->Handled = false;//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
		if (e->KeyChar == 45 && textBox1->Text->Length > 0 && textBox1->Text[textBox1->Text->Length - 1] != '-') {
			e->Handled = false;//Запрет на ввод двух минусов подряд
		}
		else if (e->KeyChar == 45 && textBox1->Text->Length == 0) e->Handled = false;

	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if ((textBox1->Text->Length) == 0 && (Convert::ToString(e->KeyCode) == Convert::ToString(Keys::Space)))
			e->SuppressKeyPress = true;
		if (textBox1->Text->Length > 0 && textBox1->SelectionStart < textBox1->Text->Length && (Convert::ToString(e->KeyCode)) == (Convert::ToString(Keys::Space))) {
			if (Convert::ToString(textBox1->Text[textBox1->SelectionStart - 1]) != " " && Convert::ToString(textBox1->Text[textBox1->SelectionStart]) != " ")
				e->SuppressKeyPress = false;
			if (Convert::ToString(textBox1->Text[textBox1->SelectionStart - 1]) == " " || Convert::ToString(textBox1->Text[textBox1->SelectionStart]) == " ")
				e->SuppressKeyPress = true;
		}//Запрет на ввод двух пробелов подряд внутри строки
		if (textBox1->Text->Length > 0 && textBox1->SelectionStart == textBox1->Text->Length && (Convert::ToString(e->KeyCode)) == (Convert::ToString(Keys::Space)))
			if (Convert::ToString(textBox1->Text[textBox1->Text->Length - 1]) == " ")
				e->SuppressKeyPress = true;
			else e->SuppressKeyPress = false;
		//запрет на ввод двух подрелов подряд вконце строки
	}

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8 && textBox2->Text != "")
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 8 && textBox2->Text == "")
		{
			e->Handled = true;
		}//если нажат бэкспейс и строка пустая, то ввод запрещен
		if (textBox2->Text->IndexOf(",") == -1 && e->KeyChar == 44 && textBox2->Text != "") {
			e->Handled = false;
		}//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
		if (textBox2->Text->IndexOf("-") == -1 && e->KeyChar == 45 && textBox2->Text == "") {
			e->Handled = false;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8 && textBox3->Text != "")
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 8 && textBox3->Text == "")
		{
			e->Handled = true;
		}//если нажат бэкспейс и строка пустая, то ввод запрещен
		if (textBox3->Text->IndexOf(",") == -1 && e->KeyChar == 44 && textBox3->Text != "") {
			e->Handled = false;
		}//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
		if (textBox3->Text->IndexOf("-") == -1 && e->KeyChar == 45 && textBox3->Text == "") {
			e->Handled = false;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}
	}

		   ///////////////////////////////////////////////////////////////////////////////////////////////////

		   int n;
		   String^ mtrx;
		   int changed = 1;
		   String^ prefChis = "dasda";
		   
		   public: String^ fileanswer = "";
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (prefChis == textBox4->Text)
		{

		}
		else
			changed = 1;
		prefChis = textBox4->Text;
		if (textBox4->Text != "") {
			mtrx = "";
			n = Convert::ToInt32(textBox4->Text);
			array<int, 2>^ mat = gcnew array<int, 2>(n, n);
			for (int i = 0; i < n; i++)
			{
				for (int k = 0; k < n; k++)
				{
					if (i != n - k - 1)
						mat[i, k] = 0;
					else mat[i, k] = i + 1;
				}
			}
			String^ answer = "";
			fileanswer = "";
			int spaces;
			int max_number_length = Convert::ToString(n * n)->Length;
			String^ new_number_in_str;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					new_number_in_str = Convert::ToString(mat[i, j]);
					spaces = max_number_length - new_number_in_str->Length;
					for (int i = 0; i <= spaces; i++) {
						answer += "  ";
					}
					answer += new_number_in_str ;
				}
				answer += "\r\n";
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					new_number_in_str = Convert::ToString(mat[i, j]);
					spaces = max_number_length - new_number_in_str->Length;
					for (int i = 0; i <= spaces; i++) {
						fileanswer += " ";
					}
					fileanswer += new_number_in_str;
				}
				fileanswer += "\r\n";
			}
			richTextBox1->Text = answer;



			//	for (int i = 0; i < n; i++)
			//	{
			//		for (int k = 0; k < n; k++)
			//		{
			//			mtrx = mtrx + Convert::ToString(mat[i, k]) + "    ";
			//		}
			//		mtrx = mtrx + "\n";
			//	}
			//	richTextBox1->Text = "";
			//	richTextBox1->Text = mtrx;
			//}
			
		}
		else MessageBox::Show("Введите порядок матрицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8 && textBox4->Text != "")
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 8 && textBox4->Text == "")
		{
			e->Handled = true;
		}//если нажат бэкспейс и строка пустая, то ввод запрещен
		if (textBox4->Text->IndexOf(",") == -1 && e->KeyChar == 44 && textBox4->Text != "") {
			e->Handled = false;
		}//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
		if (e->KeyChar == 45) {
			e->Handled = true;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}

	}
		   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void textBox5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		space = this->textBox5->Text;
		if ((space->Length) > 0) {
			if ((Convert::ToChar(space[(space->Length) - 1]) == ' ') && (Convert::ToString(e->KeyCode) == Convert::ToString(Keys::Space))) {
				e->SuppressKeyPress = true; //если последний символ в текстбоксе это пробел и нажата клавиша пробел то ввод запрещен(запрет ввода больше одного пробела)
			}
		}
		else if ((space->Length) == 0 && (Convert::ToString(e->KeyCode) == Convert::ToString(Keys::Space))) e->SuppressKeyPress = true; // запрет на ввод пробела первым символом в строке

	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32((e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57))
		{
			if (Convert::ToInt32(e->KeyChar) != 32) {
				e->Handled = true;
			}
			else e->Handled = false;
		}
		//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен (Также разрешен ввод пробела)
		if (e->KeyChar == 8 && textBox5->Text != "")
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 8 && textBox5->Text == "")
		{
			e->Handled = true;
		}//если нажат бэкспейс и строка пустая, то ввод запрещен
		if (e->KeyChar == 44 && textBox5->Text->Length > 0 && textBox5->Text[textBox5->Text->Length - 1] != ',') {
			e->Handled = false;
		}
		else if (e->KeyChar == 44 && textBox5->Text->Length == 0) e->Handled = false;//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
		if (e->KeyChar == 45 && textBox5->Text->Length > 0 && textBox5->Text[textBox5->Text->Length - 1] != '-') {
			e->Handled = false;//Запрет на ввод двух минусов подряд
		}
		else if (e->KeyChar == 45 && textBox5->Text->Length == 0) e->Handled = false;



	}
		   String^ deletequals(String^ otr) {
			   array<String^>^ S1 = otr->Split(Convert::ToChar(" "));
			   array<String^>^ S2;
			   for (int i = 0; i <= S1->Length - 1 - 1; i++)
			   {
				   for (int k = i + 1; k <= S1->Length - 1; k++)
					   if (S1[i] == S1[k])
						   S1[k] = "";
			   }
			   otr = "";
			   for (int i = 0; i <= S1->Length - 1; i++)
				   otr += S1[i] + " ";
			   return otr;
		   }
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = "";
		textBox6->Text = "";
	}
		   String^ pred = "eqweq";
		   int sych = 1;
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pred != textBox5->Text)
			sych = 1;
		pred = textBox5->Text;

		if (textBox5->Text != "") {
			array<String^>^ S;
			if (textBox5->Text->IndexOf(" ,") == -1 && textBox5->Text->IndexOf(" - ") == -1 && textBox5->Text[0] != ',' && textBox5->Text[textBox5->Text->Length - 1] != ',' && textBox5->Text[textBox5->Text->Length - 1] != '-') {
				if (textBox5->Text[textBox5->Text->Length - 1] == ' ') {
					textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 1);
				}
				S = textBox5->Text->Split(' ');
				String^ otr = "";
				for (int i = 0; i <= S->Length - 1; i++) {
					if (i - 1 < 0)
					{
						if (Convert::ToSingle(S[i]) > Convert::ToSingle(S[i + 1]))
							otr += S[i] + " ";
						else otr += S[i + 1] + " ";
					}
					if (i - 1 >= 0 && i + 1 <= S->Length - 1)
					{
						if (Convert::ToSingle(S[i - 1]) > Convert::ToSingle(S[i]) && Convert::ToSingle(S[i - 1]) > Convert::ToSingle(S[i + 1]))
							otr += S[i - 1] + " ";
						else if (Convert::ToSingle(S[i]) > Convert::ToSingle(S[i - 1]) && Convert::ToSingle(S[i]) > Convert::ToSingle(S[i + 1]))
							otr += S[i] + " ";
						else if (Convert::ToSingle(S[i + 1]) > Convert::ToSingle(S[i - 1]) && Convert::ToSingle(S[i + 1]) > Convert::ToSingle(S[i]))
							otr += S[i + 1] + " ";
					}
					if (i + 1 > S->Length - 1)
					{
						if (Convert::ToSingle(S[i]) > Convert::ToSingle(S[i - 1]))
							otr += S[i] + " ";
						else otr += S[i - 1] + " ";
					}

				}

				textBox6->Text = deletequals(otr);
			}
			else {
				MessageBox::Show("Неверные значения для ввода!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else { MessageBox::Show("Заполнены не все поля для ввода!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); }
		/*	if (textBox1->Text->IndexOf(" ,") == -1 && textBox1->Text->IndexOf(" -") == -1 && textBox1->Text[0] != ',' && textBox1->Text[0] != '-' && textBox1->Text[textBox1->Text->Length - 1] != ',' && textBox1->Text[textBox1->Text->Length - 1] != '-') {
				if (textBox5->Text != "") {
					array<String^>^ S;
					if (textBox5->Text[textBox5->Text->Length - 1] == ' ') {
						textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 1);
					}
					S = textBox5->Text->Split(' ');
					String^ otr = "";
					for (int i = 0; i <= S->Length - 1; i++) {
						if (i - 1 < 0)
						{
							if (Convert::ToSingle(S[i]) > Convert::ToSingle(S[i + 1]))
								otr += S[i] + " ";
							else otr += S[i + 1] + " ";
						}
						if (i - 1 >= 0 && i + 1 <= S->Length - 1)
						{
							if (Convert::ToSingle(S[i - 1]) > Convert::ToSingle(S[i]) && Convert::ToSingle(S[i - 1]) > Convert::ToSingle(S[i + 1]))
								otr += S[i - 1] + " ";
							else if (Convert::ToSingle(S[i]) > Convert::ToSingle(S[i - 1]) && Convert::ToSingle(S[i]) > Convert::ToSingle(S[i + 1]))
								otr += S[i] + " ";
							else if (Convert::ToSingle(S[i + 1]) > Convert::ToSingle(S[i - 1]) && Convert::ToSingle(S[i + 1]) > Convert::ToSingle(S[i]))
								otr += S[i + 1] + " ";
						}
						if (i + 1 > S->Length - 1)
						{
							if (Convert::ToSingle(S[i]) > Convert::ToSingle(S[i - 1]))
								otr += S[i] + " ";
							else otr += S[i - 1] + " ";
						}

					}

					textBox6->Text = deletequals(otr);
				}
				else MessageBox::Show("Заполните все поля", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				MessageBox::Show("Неверные значения для ввода!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			*/

			/////////////////////////////////////////////////////////////////////////////////////////////////
	}
		   String^ skob(String^ S, String^ S1) {
			   if (S->IndexOf(")") != -1 || S->IndexOf("(") != -1) {
				   for (int i = 0; i < S->IndexOf("("); i++)
					   S1 = S1 + S[i];
				   for (int i = S->IndexOf(")") + 1; i <= S->Length - 1; i++)
					   S1 = S1 + S[i];
				   if (S1->IndexOf(")") != -1 && S1->IndexOf("(") == -1) {
					   S1 = "";
					   for (int i = 0; i < S->IndexOf("("); i++)
						   S1 = S1 + S[i];
					   for (int i = S->LastIndexOf(")") + 1; i <= S->Length - 1; i++)
						   S1 = S1 + S[i];
				   }
				   return S1;
			   }
			   else
				   return S;
		   }
		   String^ vchera = "3213kdkaskdk";
		   int iSeNoChanges = 1;
		   String^ S;
		   String^ S1;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (vchera != textBox7->Text)
		{
			iSeNoChanges = 1;
			S = "";
			S1 = "";

			if (textBox7->Text != "") {

				S = textBox7->Text;
				S1 = skob(S, "");

				while (S1->IndexOf('(') != -1 && S1->IndexOf(')') != -1) {
					S1 = skob(S1, "");
				}
				textBox8->Text = S1;
			}
			else MessageBox::Show("Заполните все поля", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		vchera = textBox7->Text;
	}



	private: System::Void btnIn1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn1->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn1->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn1->Text = "";

		}
		String^ path = txtIn1->Text;
		String^ line;



		// Файловые операции в выбранной папке


		textBox1->Text = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			textBox1->Text += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла


		String^ array_str;
		array_str = textBox1->Text;

		for (int i = 0; i < array_str->Length; i++) {
			if ((array_str[i] != ' ') && (array_str[i] != '0' && array_str[i] != '1' && array_str[i] != '2' && array_str[i] != '3' && array_str[i] != '4' && array_str[i] != '5' && array_str[i] != '6' && array_str[i] != '7' && array_str[i] != '8' && array_str[i] != '9' && array_str[i] != '-'))
			{

				array_str = array_str->Remove(i, 1);

				array_str = array_str->Insert(i, " ");
				if (array_str[0] == ' ') {
					array_str = array_str->Remove(0, 1);
					i--;
				}
				if (i > 0)
					i--;

			}
		}
		for (int i = 0; i < array_str->Length; i++) {
			if (array_str[0] == ' ') {
				array_str = array_str->Remove(0, 1);
				i--;
			}
		}
		textBox1->Text = array_str;
		array_str = textBox1->Text;
		int array_size;
		if (textBox1->Text->Length > 0) {
			array_str = textBox1->Text + " ";
			// определение размера введенного массива
			int input_array_size = 0;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] == ' ' || array_str[i] == ';') {
					input_array_size += 1;
				}
			}
			array_size = input_array_size;
		}
		int* arr = new int[array_size];
		int start_i = 0, end_i = 0, count_numbers = 0;


		for (int i = array_str->Length - 1; i > 0; i--) {
			if (array_str[i] == ' ') {
				array_str = array_str->Substring(0, i);
			}
			else {
				break;
			}
		}
		array_str += " ";
		for (int i = 0; i < array_str->Length; i++) {
			if (array_str[i] != ' ') {
				end_i += 1;
			}
			else {
				if (i > 0 && array_str[i - 1] == ' ') {
					start_i = i + 1;
					end_i = start_i;
				}
				else {
					try {
						arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
						count_numbers += 1;

					}
					catch (...) {

						break;
					}
					start_i = i + 1;
					end_i = start_i;
				}


			}
		}
		textBox1->Text = "";

		for (int i = 0; i < count_numbers; i++) {
			textBox1->Text += Convert::ToString(arr[i]) + " ";
		}
		delete[] arr;
	}
		   int first = 0;
	private: System::Void btnSave1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ path;
			if (txtSave1->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave1->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave1->Text = "";
				return;
			}

			path = txtSave1->Text;

			// Создание файла для записи, если он не существовал.
			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				if (textBox9->Text != "") {

					sw->WriteLine(textBox9->Text + " "); // Запись в файл

				}
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);
			if (textBox1->Text != "" && checkMas == true) {
				if (first == 0)
					first = 1;
				else
					sa->WriteLine("");

				sa->WriteLine("- Исходный массив " + textBox1->Text);
				sa->WriteLine("Промежуток "+ "[" + this->textBox2->Text + ";" + textBox3->Text + "]");
				sa->WriteLine("Элементы, включенные в отрезок:  " + textBox9->Text); // Запись в файл
				check = false;
				checkMas = false;
				sa->Close();
				return;
			}
			if (textBox2->Text != "" && textBox3->Text != "" && check == true) {
				sa->WriteLine("Промежуток " "[" + this->textBox2->Text + "," + textBox3->Text + "]");
				sa->WriteLine("Элементы, включенные в отрезок  " + textBox9->Text); // Запись в файл
				check = false;
			}

			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		check = true;
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		check = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		checkMas = true;
	}
	private: System::Void textBox8_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {





	}
	private: System::Void textBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtSave2->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtSave2->Text = "";

	}
	private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtIn1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtIn1->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtIn1->Text = "";

	}
	private: System::Void txtSave1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtSave1->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtSave1->Text = "";
	}
	private: System::Void btnIn2_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void btnSave2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ path;
			if (txtSave2->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave2->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave2->Text = "";
				return;
			}

			path = txtSave2->Text;

			// Создание файла для записи, если он не существовал.
			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);



			if (changed == 1)
			{
				sa->WriteLine(fileanswer);
				changed = 0;
			}

			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void btnIn3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn3->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn3->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn3->Text = "";

		}
		String^ path = txtIn3->Text;
		String^ line;



		// Файловые операции в выбранной папке


		textBox5->Text = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			textBox5->Text += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла


		String^ array_str;
		array_str = textBox5->Text;

		for (int i = 0; i < array_str->Length; i++) {
			if ((array_str[i] != ' ') && (array_str[i] != '0' && array_str[i] != '1' && array_str[i] != '2' && array_str[i] != '3' && array_str[i] != '4' && array_str[i] != '5' && array_str[i] != '6' && array_str[i] != '7' && array_str[i] != '8' && array_str[i] != '9' && array_str[i] != '-'))
			{

				array_str = array_str->Remove(i, 1);

				array_str = array_str->Insert(i, " ");
				if (array_str[0] == ' ') {
					array_str = array_str->Remove(0, 1);
					i--;
				}
				if (i > 0)
					i--;

			}
		}
		for (int i = 0; i < array_str->Length; i++) {
			if (array_str[0] == ' ') {
				array_str = array_str->Remove(0, 1);
				i--;
			}
		}
		textBox5->Text = array_str;
		array_str = textBox5->Text;
		int array_size;
		if (textBox5->Text->Length > 0) {
			array_str = textBox5->Text + " ";
			// определение размера введенного массива
			int input_array_size = 0;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] == ' ' || array_str[i] == ';') {
					input_array_size += 1;
				}
			}
			array_size = input_array_size;
		}
		int* arr = new int[array_size];
		int start_i = 0, end_i = 0, count_numbers = 0;


		for (int i = array_str->Length - 1; i > 0; i--) {
			if (array_str[i] == ' ') {
				array_str = array_str->Substring(0, i);
			}
			else {
				break;
			}
		}
		array_str += " ";
		for (int i = 0; i < array_str->Length; i++) {
			if (array_str[i] != ' ') {
				end_i += 1;
			}
			else {
				if (i > 0 && array_str[i - 1] == ' ') {
					start_i = i + 1;
					end_i = start_i;
				}
				else {
					try {
						arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
						count_numbers += 1;

					}
					catch (...) {

						break;
					}
					start_i = i + 1;
					end_i = start_i;
				}


			}
		}
		textBox5->Text = "";

		for (int i = 0; i < count_numbers; i++) {
			textBox5->Text += Convert::ToString(arr[i]) + " ";
		}
		delete[] arr;

	}
	private: System::Void btnSave3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ path;
			if (txtSave3->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave3->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave3->Text = "";
				return;
			}

			path = txtSave3->Text;

			// Создание файла для записи, если он не существовал.
			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);
			if (textBox5->Text != "" && textBox6->Text != "" && sych == 1) {
				sa->WriteLine("\n" + " - Исходные данные: " + textBox5->Text );


				sa->WriteLine("- Большие из рядом стоящих чисел: " + textBox6->Text );
				sych = 0;
			}
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void btnIn4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn4->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn4->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn4->Text = "";

		}
		String^ path = txtIn4->Text;
		String^ line;



		// Файловые операции в выбранной папке


		textBox7->Text = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			textBox7->Text += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла


	}
	private: System::Void btnSave4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ path;
			if (txtSave4->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave4->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave4->Text = "";
				return;
			}

			path = txtSave4->Text;

			// Создание файла для записи, если он не существовал.
			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);
			if (textBox7->Text != "" && textBox8->Text != "" && iSeNoChanges == 1) {
				sa->WriteLine("\n" + " - Исходные данные: " + textBox7->Text );


				sa->WriteLine("- Cтрока без скобок: " + textBox8->Text );
				iSeNoChanges = 0;
			}
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtSave3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtSave3->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtSave3->Text = "";

	}

	private: System::Void txtIn3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtIn3->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtIn3->Text = "";

	}
	private: System::Void txtIn4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtIn4->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtIn4->Text = "";

	}
	private: System::Void txtSave4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtSave4->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtSave4->Text = "";

	}
	private: System::Void tabPage1_Enter(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
		MyForm::FormBorderStyle = Windows::Forms::FormBorderStyle::FixedSingle;
		MyForm::Size.Width = 792;
		MyForm::Size.Height = 417;
	}
private: System::Void tabPage2_Enter(System::Object^ sender, System::EventArgs^ e) {
	MaximizeBox = true;
	MyForm::FormBorderStyle = Windows::Forms::FormBorderStyle::Sizable;
}
private: System::Void tabPage3_Enter(System::Object^ sender, System::EventArgs^ e) {
	MaximizeBox = false;
	MyForm::FormBorderStyle = Windows::Forms::FormBorderStyle::FixedSingle;
}
private: System::Void tabPage4_Enter(System::Object^ sender, System::EventArgs^ e) {
	MaximizeBox = true;
	MyForm::FormBorderStyle = Windows::Forms::FormBorderStyle::Sizable;
}
};
}
