#pragma once

namespace Gra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		bool wcisniety = true;
		bool wygral = false;
		int licznikX = 0;
		int licznik0 = 0;
		String^ mistrz = " ";




	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelX;
	private: System::Windows::Forms::Label^  LabelO;
	protected:

	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  lblLicznikX;
	private: System::Windows::Forms::Label^  lblLicznikO;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C1;
	private: System::Windows::Forms::PictureBox^  C2;




	private: System::Windows::Forms::PictureBox^  B2;

	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  C3;


	private: System::Windows::Forms::PictureBox^  B3;

	private: System::Windows::Forms::PictureBox^  A3;

	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->LabelX = (gcnew System::Windows::Forms::Label());
			this->LabelO = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblLicznikX = (gcnew System::Windows::Forms::Label());
			this->lblLicznikO = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			this->SuspendLayout();
			// 
			// LabelX
			// 
			this->LabelX->AutoSize = true;
			this->LabelX->Location = System::Drawing::Point(12, 9);
			this->LabelX->Name = L"LabelX";
			this->LabelX->Size = System::Drawing::Size(83, 13);
			this->LabelX->TabIndex = 0;
			this->LabelX->Text = L"Wygrane dla X :";
			this->LabelX->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// LabelO
			// 
			this->LabelO->AutoSize = true;
			this->LabelO->Location = System::Drawing::Point(175, 9);
			this->LabelO->Name = L"LabelO";
			this->LabelO->Size = System::Drawing::Size(84, 13);
			this->LabelO->TabIndex = 1;
			this->LabelO->Text = L"Wygrane dla O :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Nowa Gra";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lblLicznikX
			// 
			this->lblLicznikX->AutoSize = true;
			this->lblLicznikX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLicznikX->Location = System::Drawing::Point(29, 31);
			this->lblLicznikX->Name = L"lblLicznikX";
			this->lblLicznikX->Size = System::Drawing::Size(19, 20);
			this->lblLicznikX->TabIndex = 4;
			this->lblLicznikX->Text = L"0";
			this->lblLicznikX->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// lblLicznikO
			// 
			this->lblLicznikO->AutoSize = true;
			this->lblLicznikO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLicznikO->Location = System::Drawing::Point(209, 31);
			this->lblLicznikO->Name = L"lblLicznikO";
			this->lblLicznikO->Size = System::Drawing::Size(19, 20);
			this->lblLicznikO->TabIndex = 5;
			this->lblLicznikO->Text = L"0";
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(15, 71);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 60);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(111, 71);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 60);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(211, 71);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 60);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(211, 159);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 60);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C2->TabIndex = 11;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(111, 159);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 60);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B2->TabIndex = 10;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(15, 159);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 60);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A2->TabIndex = 9;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(211, 257);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 60);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C3->TabIndex = 14;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(111, 257);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 60);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B3->TabIndex = 13;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(15, 257);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 60);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A3->TabIndex = 12;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::graj);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 411);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->lblLicznikO);
			this->Controls->Add(this->lblLicznikX);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LabelO);
			this->Controls->Add(this->LabelX);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::graj);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void graj(System::Object^  sender, System::EventArgs^  e) {

		PictureBox^ zdjecie = (PictureBox^)sender;


		if (wcisniety) {
			zdjecie->Image = imageList1->Images[1];
			zdjecie->Tag = "X";

		}
		else
		{
			zdjecie->Image = imageList1->Images[0];
			zdjecie->Tag = "O";
		}

		wcisniety = !wcisniety;
		zdjecie->Enabled = false;
		wygrana();
	}

	private: Void wygrana()
	{
		//wygrana w poziomie
		if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag != "?")) wygral = true;
		if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag != "?")) wygral = true;
		if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag != "?")) wygral = true;

		//wygrana w pionie
		if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag != "?")) wygral = true;
		if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B1->Tag != "?")) wygral = true;
		if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C1->Tag != "?")) wygral = true;

		//wygrana po przekatnej
		if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag != "?")) wygral = true;
		if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag != "?")) wygral = true;


		if (wygral) {
			for each (Control^ element in this ->Controls)
			{
				if (element->GetType() == PictureBox::typeid) element->Enabled = false;
			}
			if (wcisniety) {
				licznik0++;
				lblLicznikO->Text = Convert::ToString(licznik0);
				mistrz = "O";
			}
			else {
				licznikX++;
				lblLicznikX->Text = Convert::ToString(licznikX);
				mistrz = "X";
			}
			
			

			MessageBox::Show("Wygrana" + mistrz , "Kołko i Krzyzyk", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
			 private: Void startowa()

			 {
				 for each (Control^ element in this ->Controls)
				 {
					 try {
						 PictureBox^ zdjecie = (PictureBox^)element;
						 zdjecie->Enabled = true;
						 zdjecie->Tag = "?";
						 zdjecie->Image = imageList1->Images[2];

					 }
					 catch (...)
					 {

					 }
				 }
			 }


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		wygral = false;
		startowa();
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		wygral = false;
		startowa();
		licznik0 = 0;
		licznikX = 0;
		lblLicznikO->Text = "0";
		lblLicznikX->Text = Convert::ToString(licznikX);

	}
};
	}