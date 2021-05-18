#pragma once
#include <cstdlib>
#include <algorithm>
#include<time.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>


namespace masfilefinal {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;
	//using namespace System::msdn;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnGer;
	private: System::Windows::Forms::Button^ btnVyp;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::RadioButton^ rdSum;
	private: System::Windows::Forms::RadioButton^ rdUbiv;

	private: System::Windows::Forms::RadioButton^ rdVozr;
	private: System::Windows::Forms::RadioButton^ rdNch;
	private: System::Windows::Forms::RadioButton^ rdChet;
	private: System::Windows::Forms::RadioButton^ rdMax;
	private: System::Windows::Forms::RadioButton^ rdMin;
	private: System::Windows::Forms::RadioButton^ rdSr;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::TextBox^ txtSave;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtIn;

	private: System::Windows::Forms::Button^ btnIn;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnGer = (gcnew System::Windows::Forms::Button());
			this->btnVyp = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->rdSum = (gcnew System::Windows::Forms::RadioButton());
			this->rdUbiv = (gcnew System::Windows::Forms::RadioButton());
			this->rdVozr = (gcnew System::Windows::Forms::RadioButton());
			this->rdNch = (gcnew System::Windows::Forms::RadioButton());
			this->rdChet = (gcnew System::Windows::Forms::RadioButton());
			this->rdMax = (gcnew System::Windows::Forms::RadioButton());
			this->rdMin = (gcnew System::Windows::Forms::RadioButton());
			this->rdSr = (gcnew System::Windows::Forms::RadioButton());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->txtSave = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtIn = (gcnew System::Windows::Forms::TextBox());
			this->btnIn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(55, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элемментов массива:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минимальное значение диапазона:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Максимальное значение диапазона: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label4->Location = System::Drawing::Point(37, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Исходные данные ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Исходный массив:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Результат операции:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(37, 241);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Операции с массивом:";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(320, 68);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(189, 22);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(320, 110);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(189, 22);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt2_KeyPress);
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(320, 146);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(189, 22);
			this->txt3->TabIndex = 9;
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt3_KeyPress);
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(31, 209);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(478, 22);
			this->txt->TabIndex = 10;
			this->txt->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_TextChanged);
			this->txt->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::txt_KeyDown);
			this->txt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_KeyPress_1);
			this->txt->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::txt_KeyUp);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(19, 401);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(490, 22);
			this->txtResult->TabIndex = 11;
			// 
			// btnGer
			// 
			this->btnGer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGer->Location = System::Drawing::Point(529, 50);
			this->btnGer->Name = L"btnGer";
			this->btnGer->Size = System::Drawing::Size(151, 33);
			this->btnGer->TabIndex = 12;
			this->btnGer->Text = L"Генерация массива";
			this->btnGer->UseVisualStyleBackColor = true;
			this->btnGer->Click += gcnew System::EventHandler(this, &MyForm::btnGer_Click);
			// 
			// btnVyp
			// 
			this->btnVyp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVyp->Location = System::Drawing::Point(533, 199);
			this->btnVyp->Name = L"btnVyp";
			this->btnVyp->Size = System::Drawing::Size(151, 33);
			this->btnVyp->TabIndex = 13;
			this->btnVyp->Text = L"Выполнить";
			this->btnVyp->UseVisualStyleBackColor = true;
			this->btnVyp->Click += gcnew System::EventHandler(this, &MyForm::btnVyp_Click);
			// 
			// btnClose
			// 
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Location = System::Drawing::Point(534, 362);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(151, 37);
			this->btnClose->TabIndex = 14;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// rdSum
			// 
			this->rdSum->AutoSize = true;
			this->rdSum->Checked = true;
			this->rdSum->Location = System::Drawing::Point(31, 269);
			this->rdSum->Name = L"rdSum";
			this->rdSum->Size = System::Drawing::Size(145, 21);
			this->rdSum->TabIndex = 15;
			this->rdSum->TabStop = true;
			this->rdSum->Text = L"Cумма элементов";
			this->rdSum->UseVisualStyleBackColor = true;
			this->rdSum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rdSum_CheckedChanged);
			// 
			// rdUbiv
			// 
			this->rdUbiv->AutoSize = true;
			this->rdUbiv->Location = System::Drawing::Point(293, 350);
			this->rdUbiv->Name = L"rdUbiv";
			this->rdUbiv->Size = System::Drawing::Size(197, 21);
			this->rdUbiv->TabIndex = 16;
			this->rdUbiv->Text = L"Сортировка по убыванию";
			this->rdUbiv->UseVisualStyleBackColor = true;
			// 
			// rdVozr
			// 
			this->rdVozr->AutoSize = true;
			this->rdVozr->Location = System::Drawing::Point(293, 323);
			this->rdVozr->Name = L"rdVozr";
			this->rdVozr->Size = System::Drawing::Size(217, 21);
			this->rdVozr->TabIndex = 17;
			this->rdVozr->Text = L"Cортировка по возрастанию";
			this->rdVozr->UseVisualStyleBackColor = true;
			// 
			// rdNch
			// 
			this->rdNch->AutoSize = true;
			this->rdNch->Location = System::Drawing::Point(293, 296);
			this->rdNch->Name = L"rdNch";
			this->rdNch->Size = System::Drawing::Size(165, 21);
			this->rdNch->TabIndex = 18;
			this->rdNch->Text = L"Нечетные элементы";
			this->rdNch->UseVisualStyleBackColor = true;
			// 
			// rdChet
			// 
			this->rdChet->AutoSize = true;
			this->rdChet->Location = System::Drawing::Point(293, 269);
			this->rdChet->Name = L"rdChet";
			this->rdChet->Size = System::Drawing::Size(149, 21);
			this->rdChet->TabIndex = 19;
			this->rdChet->Text = L"Четные элементы";
			this->rdChet->UseVisualStyleBackColor = true;
			// 
			// rdMax
			// 
			this->rdMax->AutoSize = true;
			this->rdMax->Location = System::Drawing::Point(31, 348);
			this->rdMax->Name = L"rdMax";
			this->rdMax->Size = System::Drawing::Size(187, 21);
			this->rdMax->TabIndex = 20;
			this->rdMax->Text = L"Максимальный элемент";
			this->rdMax->UseVisualStyleBackColor = true;
			// 
			// rdMin
			// 
			this->rdMin->AutoSize = true;
			this->rdMin->Location = System::Drawing::Point(31, 323);
			this->rdMin->Name = L"rdMin";
			this->rdMin->Size = System::Drawing::Size(181, 21);
			this->rdMin->TabIndex = 21;
			this->rdMin->Text = L"Минимальный элемент";
			this->rdMin->UseVisualStyleBackColor = true;
			// 
			// rdSr
			// 
			this->rdSr->AutoSize = true;
			this->rdSr->Location = System::Drawing::Point(31, 296);
			this->rdSr->Name = L"rdSr";
			this->rdSr->Size = System::Drawing::Size(153, 21);
			this->rdSr->TabIndex = 22;
			this->rdSr->Text = L"Среднее значение";
			this->rdSr->UseVisualStyleBackColor = true;
			// 
			// btnSave
			// 
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Location = System::Drawing::Point(534, 256);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(150, 34);
			this->btnSave->TabIndex = 23;
			this->btnSave->Text = L"Cохранить в файл";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// txtSave
			// 
			this->txtSave->Location = System::Drawing::Point(516, 322);
			this->txtSave->Name = L"txtSave";
			this->txtSave->ReadOnly = true;
			this->txtSave->Size = System::Drawing::Size(175, 22);
			this->txtSave->TabIndex = 24;
			this->txtSave->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			this->txtSave->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSave_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(537, 299);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 17);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Имя файла вывода:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(536, 99);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Имя файла ввода:";
			// 
			// txtIn
			// 
			this->txtIn->Location = System::Drawing::Point(532, 123);
			this->txtIn->Name = L"txtIn";
			this->txtIn->Size = System::Drawing::Size(158, 22);
			this->txtIn->TabIndex = 27;
			this->txtIn->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// btnIn
			// 
			this->btnIn->Location = System::Drawing::Point(534, 151);
			this->btnIn->Name = L"btnIn";
			this->btnIn->Size = System::Drawing::Size(157, 36);
			this->btnIn->TabIndex = 28;
			this->btnIn->Text = L"Вывод из файла";
			this->btnIn->UseVisualStyleBackColor = true;
			this->btnIn->Click += gcnew System::EventHandler(this, &MyForm::btnIn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(696, 435);
			this->Controls->Add(this->btnIn);
			this->Controls->Add(this->txtIn);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtSave);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->rdSr);
			this->Controls->Add(this->rdMin);
			this->Controls->Add(this->rdMax);
			this->Controls->Add(this->rdChet);
			this->Controls->Add(this->rdNch);
			this->Controls->Add(this->rdVozr);
			this->Controls->Add(this->rdUbiv);
			this->Controls->Add(this->rdSum);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnVyp);
			this->Controls->Add(this->btnGer);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Обработка массива";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   int a, b, c;
	private: System::Void btnGer_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			a = Convert::ToInt32(txt1->Text);
			vector <int> v(a);
			b = Convert::ToInt32(txt2->Text);
			c = Convert::ToInt32(txt3->Text);
			this->txt->Text = "";
			for (int i = 0; i <= a - 1; i++)
			{
				v[i] = rand() % (c - b + 1) + b;

				this->txt->Text += Convert::ToString(v[i]) + " ";

			}
		}
		catch (...) { System::Windows::Forms::DialogResult result = MessageBox::Show("Заполинте строку ", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	} const int MAXARRAYSIZE = 20, MAXN = 50;
		   double min_value, max_value, array_size, input_array_size, summa;
		   int min_number, max_number, chet_count, nechet_count;
		   String^ array_str;
		   bool is_array_input, is_ready_to_work;

		   String^ saveRd(String^ s) {
			   if (rdSum->Checked)
				   s = "- Cумма элементов ";
			   if (rdSr->Checked)
				   s = "- Cреднее значение ";
			   if (rdMin->Checked)
				   s = "- Минимальное значение";
			   if (rdMax->Checked)
				   s = "- Максимальное значение ";
			   if (rdChet->Checked)
				   s = "- Четные элементы";
			   if (rdNch->Checked)
				   s = "- Нечетные элементы";
			   if (rdVozr->Checked)
				   s = "- Сортировка по возрастанию";
			   if (rdUbiv->Checked)
				   s = "- Сортировка по убывванию";
			   return s;

		   }
		   bool IsArrayInput1() {
			   bool check;
			   if (txt->Text->Length > 0) {
				   check = true;
				   array_str = txt->Text + " ";
				   // определение размера введенного массива
				   input_array_size = 0;
				   for (int i = 0; i < array_str->Length; i++) {
					   if (array_str[i] == ' ' || array_str[i] == ';') {
						   input_array_size += 1;
					   }
				   }
				   array_size = input_array_size;
			   }
			   else {
				   check = false;
			   }
			   return check;
		   }

		   String^ chet_numbers_str = "";
		   String^ nechet_numbers_str;
		   String^ prefRez;
		   String^ prefText = "";
	private: System::Void btnVyp_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ text_message = "";
		// проверка на наличие массива
		is_array_input = IsArrayInput1();
		// чтение массива из textbox
		if (is_array_input) {
			array_str = txt->Text;

			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;
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
							is_ready_to_work = false;
							break;
						}
						start_i = i + 1;
						end_i = start_i;
					}


				}
			}
			// массив успешно прочитан
			if (is_ready_to_work) {

				prefText = txt->Text;

				String^ s = "";
				for (int i = 0; i < count_numbers; i++) {
					s += Convert::ToString(arr[i]) + " ";
				}
				if (s != prefText) {
					txt->Text = "";
					for (int i = 0; i < count_numbers; i++) {
						txt->Text += Convert::ToString(arr[i]) + " ";
					}
				}
				summa = 0;
				chet_count = 0;
				nechet_count = 0;
				min_number = c;
				max_number = b;
				chet_numbers_str = "";
				nechet_numbers_str = "";

				for (int i = 0; i < count_numbers; i++) {
					summa += arr[i];
					if (arr[i] > max_number)
						max_number = arr[i];
					if (arr[i] < min_number)
						min_number = arr[i];
					if (arr[i] % 2 == 0) {
						chet_count += 1;
						chet_numbers_str += Convert::ToString(arr[i]) + " ";
					}
					else {
						nechet_count += 1;
						nechet_numbers_str += Convert::ToString(arr[i]) + " ";
					}

				}
				if (rdSum->Checked)
					txtResult->Text = summa.ToString();
				if (rdSr->Checked)
					txtResult->Text = (summa / (chet_count + nechet_count)).ToString();
				if (rdMax->Checked)
					txtResult->Text = max_number.ToString();
				if (rdMin->Checked)
					txtResult->Text = min_number.ToString();
				// подстановка характеристик, если массив введен пользователем
				txt1->Text = Convert::ToString(count_numbers);
				txt3->Text = Convert::ToString(max_number);
				txt2->Text = Convert::ToString(min_number);

				if (rdChet->Checked) {
					txtResult->Text = chet_numbers_str;

				}
				if (rdNch->Checked) {

					txtResult->Text = nechet_numbers_str;

				}
				if (rdVozr->Checked) {
					txtResult->Text = "";
					int temp;
					for (int i = 0; i < count_numbers - 1; i++)		// Cортировка по возрастанию
					{
						for (int j = 0; j < count_numbers - i - 1; j++) {
							if (arr[j] > arr[j + 1]) {
								temp = arr[j];
								arr[j] = arr[j + 1];
								arr[j + 1] = temp;
							}
						}
					}
					for (int i = 0; i < count_numbers; i++)		// Cортировка по возрастанию
					{
						this->txtResult->Text += Convert::ToString(arr[i]) + " ";
					}
				}
				if (rdUbiv->Checked) {

					this->txtResult->Text = "";
					for (int i = 0; i < count_numbers; i++)		// Cортировка по возрастанию
					{
						for (int r = 0; r < count_numbers - i; r++)
						{
							if (arr[r] < arr[r + 1])
							{
								int temp = arr[r];
								arr[r] = arr[r + 1];
								arr[r + 1] = temp;
							}
						}


					}
					for (int i = 0; i < count_numbers; i++)		// Cортировка по возрастанию
					{
						this->txtResult->Text += Convert::ToString(arr[i]) + " ";
					}

				}
			}
			// ошибки при чтении массива
			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод массива" + text_message, \
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}



			delete[] arr;
		}






	}
		   boolean changeRadio = true;
	private: System::Void rdSum_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		changeRadio = true;


	}


		   boolean change;
		   int l = 0;
	private: System::Void txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		change = true;

		txtResult->Text = "";


	}

	private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8)
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 45 || e->KeyChar == 32) {
			e->Handled = false;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}


	}

	private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8)
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (txt1->Text->IndexOf("-") == -1 && e->KeyChar == 45 && txt2->Text == "") {
			e->Handled = false;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}
	}
	private: System::Void txt3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8)
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (txt1->Text->IndexOf("-") == -1 && e->KeyChar == 45 && txt3->Text == "") {
			e->Handled = false;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}
	}
		   int k = 0;

		   String^ str;
	private: System::Void txt_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		txt1->Text = "";
		txt2->Text = "";
		txt3->Text = "";

	}
	private: System::Void txt_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8)
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 32 || e->KeyChar == 45) {
			e->Handled = false;//если минусов нет и клавиша минуса нажата в начале строки, то ввод разрешен
		}
	}
	private: System::Void txt_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (txt->Text->Length > 0 && txt->SelectionStart < txt->Text->Length && (Convert::ToString(e->KeyCode)) == (Convert::ToString(Keys::Space))) {

			if (Convert::ToString(txt->Text[txt->SelectionStart - 1]) != " " && Convert::ToString(txt->Text[txt->SelectionStart]) != " ")
				e->SuppressKeyPress = false;
			if (Convert::ToString(txt->Text[txt->SelectionStart - 1]) == " " || Convert::ToString(txt->Text[txt->SelectionStart]) == " ")
				e->SuppressKeyPress = true;
		}//Запрет на ввод двух пробелов подряд внутри строки
		if (txt->Text->Length > 0 && txt->SelectionStart == txt->Text->Length && (Convert::ToString(e->KeyCode)) == (Convert::ToString(Keys::Space)))
			if (Convert::ToString(txt->Text[txt->Text->Length - 1]) == " ")
				e->SuppressKeyPress = true;
			else e->SuppressKeyPress = false;
		//запрет на ввод двух подрелов подряд вконце строки
	}

		   int schet = 0;
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		//path = "c:\\Users\\Данил\\Desktop\\massivy.txt";
		try {
			String^ path;
			if (txtSave->Text == "")
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
					txtSave->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave->Text = "";
				return;
			}

			path = txtSave->Text;

			// Создание файла для записи, если он не существовал.
			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				if (prefRez != txtResult->Text && txtResult->Text != "") {
					String^ s = saveRd(s);
					sw->WriteLine(txtResult->Text + " " + s); // Запись в файл

				}
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);
			if (change && txt->Text != "") {

				sa->WriteLine(" ");

				sa->WriteLine("- Исходный массив " + txt->Text);
				change = false;
			}
			if (prefRez != txtResult->Text && txtResult->Text != "") {
				String^ s = saveRd(s);

				sa->WriteLine(s + " " + txtResult->Text); // Запись в файл
				changeRadio = false;
			}
			prefRez = this->txtResult->Text;
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void btnIn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn->Text == "")
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
				txtIn->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn->Text = "";

		}
		String^ path = txtIn->Text;
		String^ line;



		// Файловые операции в выбранной папке


		txt->Text = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			txt->Text += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла
		is_array_input = IsArrayInput1();
		if (is_array_input) {
			array_str = txt->Text;

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
			txt->Text = array_str;
			array_str = txt->Text;

			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;

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
							is_ready_to_work = false;
							break;
						}
						start_i = i + 1;
						end_i = start_i;
					}


				}
			}
			// массив успешно прочитан
			if (is_ready_to_work) {


				txt->Text = "";

				for (int i = 0; i < count_numbers; i++) {
					txt->Text += Convert::ToString(arr[i]) + " ";
				}








			}
			// ошибки при чтении массива
			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод массива", \
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}



			delete[] arr;
		}







	}
	private: System::Void txtSave_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание объекта диалогового окна FolderBrowserDialog
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
				txtSave->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtSave->Text = "";
			return;
		}


	}
	private: System::Void txtSave_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtIn_Click(System::Object^ sender, System::EventArgs^ e) {
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
			txtIn->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtIn->Text = "";
	}
	};
}