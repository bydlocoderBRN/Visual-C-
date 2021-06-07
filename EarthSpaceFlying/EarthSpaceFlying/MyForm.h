#pragma once
#include "Global.h"

#include <iostream>
#include <cstdlib> 
namespace EarthSpaceFlying {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			this->InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//


		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Timer^ timer1;


	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(626, 378);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1076, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start engine";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(523, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(912, 282);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(420, 420);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1420, 362);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(170, 170);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->VisibleChanged += gcnew System::EventHandler(this, &MyForm::pictureBox3_VisibleChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1450, 572);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(145, 339);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(60, 60);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(162, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(111, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(49, 67);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(101, 38);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			public:
				const float pi = 3.14;
				float t = 3 * pi / 2;
				float scale = 1;
				int counter = 0;
				int fall = 0;
				Rocket^ rocketSouz = gcnew Rocket;
				Planet^ planetEarth = gcnew Planet;
				float d1;
				float d2;
				int xa, ya, xb, yb;
				delegate void ObjectsTouchedHandler(System::Windows::Forms::PictureBox^ object1, System::Windows::Forms::PictureBox^ object2);
				event ObjectsTouchedHandler^ ObjectsTouched;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (counter == 0) {
			button1->Text = "Stope engine";
			timer2->Enabled = true;
			counter = 1;
		}else
		if (counter == 1) {
			button1->Text = "Stop engine";
			timer1->Enabled = false;
			timer3->Enabled = true;
			counter = 2;
		}
	}

		

	
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Left = Global::GlobalRocket::globalRocket->xPoint(t)+Global::GlobalPlanet::globalPlanet->getCenterX();
	this->pictureBox1->Top = Global::GlobalRocket::globalRocket->yPoint(Global::GlobalRocket::globalRocket->getHeight() + Global::GlobalPlanet::globalPlanet->getPlanetRad(), t)+Global::GlobalPlanet::globalPlanet->getCenterY();
	t = t + pi / 24;
	if (t >= 2 * pi) {
		t = 0;
	}
	label1->Text = Convert::ToString(t);
	isTouched(pictureBox1, pictureBox5);
	/*meteorFlight();*/
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	scale *=1.01;
	Global::GlobalRocket::globalRocket->startFlying(scale);
	pictureBox1 = Global::GlobalRocket::globalRocket->getRocket();
	if (pictureBox1->Top <= Global::GlobalRocket::globalRocket->getStartY() - Global::GlobalRocket::globalRocket->getHeight()) {
		timer2->Enabled = false;
		timer1->Enabled = true;
	};
		
	
}
	   
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Global::GlobalPlanet::globalPlanet->initPlanet(this->pictureBox2);
	Global::GlobalRocket::globalRocket->setStartPosition(Global::GlobalPlanet::globalPlanet->getCenterX(), Global::GlobalPlanet::globalPlanet->getCenterY() - Global::GlobalPlanet::globalPlanet->getPlanetRad());
	Global::GlobalRocket::globalRocket->initRocket(100, this->pictureBox1);
	Global::GlobalRocket::globalRocket->setBoom(pictureBox3);
	Global::GlobalPlanet::globalPlanet->setCrater(pictureBox4);
	pictureBox1 = Global::GlobalRocket::globalRocket->getRocket();
	MyForm::ObjectsTouched += gcnew ObjectsTouchedHandler(this, &MyForm::TouchedHappened);
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1 = Global::GlobalRocket::globalRocket->getRocket();
	this->pictureBox1->Left = Global::GlobalRocket::globalRocket->xPoint(t) + Global::GlobalPlanet::globalPlanet->getCenterX();
	this->pictureBox1->Top = Global::GlobalRocket::globalRocket->yPoint(Global::GlobalRocket::globalRocket->getHeight() + Global::GlobalPlanet::globalPlanet->getPlanetRad(),t) + Global::GlobalPlanet::globalPlanet->getCenterY();
	t = t + pi / 24;
	if (t >= 2*pi)
		t = 0;
	Global::GlobalRocket::globalRocket->setHeight(Global::GlobalRocket::globalRocket->getHeight()-5);
	label1->Text = Convert::ToString(t);
	isTouched(pictureBox1, pictureBox2);
}
	public: Boolean isTouched(System::Windows::Forms::PictureBox^ object1, System::Windows::Forms::PictureBox^ object2) {
		d1 = Math::Sqrt(object1->Width * object1->Width + object1->Height * object1->Height) / 2;
		d2 = Math::Sqrt(object2->Width * object2->Width + object2->Height * object2->Height) / 2;
		xa = object1->Location.X + object1->Height / 2;
		ya = object1->Location.Y + object1->Width / 2;
		xb = object2->Location.X + object2->Height / 2;
		yb = object2->Location.Y + object2->Width / 2;
		if (Math::Sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)) <= (d1 + d2)) {	
			ObjectsTouched(object1, object2);
			if (object1 == pictureBox1 || object2 == pictureBox1) {
				pictureBox3= Global::GlobalRocket::globalRocket->boomStart();
			}
			if (object2 == pictureBox2) {
				pictureBox2->Visible = true;
				pictureBox4 = Global::GlobalPlanet::globalPlanet->crushStarted(object1->Location.X + object1->Height , object1->Location.Y + object1->Width);
			}
			if (object1 == pictureBox2) {
				pictureBox2->Visible = true;
				pictureBox4 = Global::GlobalPlanet::globalPlanet->crushStarted(object2->Location.X + object2->Height, object2->Location.Y + object2->Width);
			}
			return true;
		}
		else return false;
	}
	public:void TouchedHappened(System::Windows::Forms::PictureBox^ object1, System::Windows::Forms::PictureBox^ object2) {
		 object1->Visible = false;
		 object2->Visible = false;
		 timer1->Enabled = false;
		 timer2->Enabled = false;
		 timer3->Enabled = false;
	}
	
	
private: System::Void pictureBox3_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	/*if (pictureBox3->Visible == true) {
		pictureBox3->Visible = false;
	}*/
}
	   void meteorFlight() {
		   /*Boolean znak = getRandomNumber(0,1);*/
		   Boolean znak = 1;
		   if (znak == 1) {
			   pictureBox5->Top = pictureBox1->Top  + getRandomNumber(100 , 200);
			   pictureBox5->Left = pictureBox1->Left  + getRandomNumber(100, 200);
		   }
		  /* if (znak == 0) {
			   pictureBox5->Top = pictureBox1->Top  - getRandomNumber(100, 200);
			   pictureBox5->Left = pictureBox1->Left  - getRandomNumber(100, 200);
		   }*/
	   }

	   int getRandomNumber(int min, int max)
	   {
		   static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		  
		   return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Top -= 10;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Top += 10;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Left += 10;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Left -= 10;
}
};
}
