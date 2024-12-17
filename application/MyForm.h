#pragma once

namespace application {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			panelTerms->Hide();
			panelMedia->Hide();
			
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panelTerms;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panelMedia;

	private:




	private: System::Windows::Forms::Button^ Stop;

	private: System::Windows::Forms::Button^ Play;


	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ Browsebtn;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panelTerms = (gcnew System::Windows::Forms::Panel());
			this->panelMedia = (gcnew System::Windows::Forms::Panel());
			this->Browsebtn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Stop = (gcnew System::Windows::Forms::Button());
			this->Play = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panelTerms->SuspendLayout();
			this->panelMedia->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Desktop;
			this->label1->Font = (gcnew System::Drawing::Font(L"A760-Roman-Smc", 16.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 439);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zaikos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Desktop;
			this->label2->Font = (gcnew System::Drawing::Font(L"A760-Roman-Smc", 16.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"registration form";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Desktop;
			this->label3->Font = (gcnew System::Drawing::Font(L"A760-Roman-Smc", 9.800001F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(55, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Desktop;
			this->label4->Font = (gcnew System::Drawing::Font(L"A760-Roman-Smc", 9.800001F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(58, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 21);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(59, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 19);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(59, 153);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 2);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(59, 235);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(213, 2);
			this->panel2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(59, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 19);
			this->textBox3->TabIndex = 8;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox3_KeyDown);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox2->Location = System::Drawing::Point(59, 265);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(85, 20);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"I agree to";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(59, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 35);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->button2->ForeColor = System::Drawing::Color::DimGray;
			this->button2->Location = System::Drawing::Point(162, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 35);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DimGray;
			this->label5->Location = System::Drawing::Point(138, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Terms and Conditions";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// panelTerms
			// 
			this->panelTerms->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelTerms.BackgroundImage")));
			this->panelTerms->Controls->Add(this->panelMedia);
			this->panelTerms->Controls->Add(this->button3);
			this->panelTerms->Controls->Add(this->textBox2);
			this->panelTerms->Controls->Add(this->label6);
			this->panelTerms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTerms->Location = System::Drawing::Point(0, 0);
			this->panelTerms->Name = L"panelTerms";
			this->panelTerms->Size = System::Drawing::Size(856, 483);
			this->panelTerms->TabIndex = 17;
			this->panelTerms->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelTerms_Paint);
			this->panelTerms->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->panelTerms->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panelTerms->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// panelMedia
			// 
			this->panelMedia->BackColor = System::Drawing::Color::Black;
			this->panelMedia->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMedia.BackgroundImage")));
			this->panelMedia->Controls->Add(this->Browsebtn);
			this->panelMedia->Controls->Add(this->button4);
			this->panelMedia->Controls->Add(this->label8);
			this->panelMedia->Controls->Add(this->label7);
			this->panelMedia->Controls->Add(this->Stop);
			this->panelMedia->Controls->Add(this->Play);
			this->panelMedia->Controls->Add(this->axWindowsMediaPlayer1);
			this->panelMedia->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMedia->Location = System::Drawing::Point(0, 0);
			this->panelMedia->Name = L"panelMedia";
			this->panelMedia->Size = System::Drawing::Size(856, 483);
			this->panelMedia->TabIndex = 18;
			this->panelMedia->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint_1);
			this->panelMedia->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->panelMedia->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panelMedia->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// Browsebtn
			// 
			this->Browsebtn->BackColor = System::Drawing::Color::DimGray;
			this->Browsebtn->FlatAppearance->BorderSize = 0;
			this->Browsebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Browsebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Browsebtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Browsebtn->Location = System::Drawing::Point(300, 389);
			this->Browsebtn->Name = L"Browsebtn";
			this->Browsebtn->Size = System::Drawing::Size(93, 30);
			this->Browsebtn->TabIndex = 9;
			this->Browsebtn->Text = L"Browse";
			this->Browsebtn->UseVisualStyleBackColor = false;
			this->Browsebtn->Click += gcnew System::EventHandler(this, &MyForm::Browsebtn_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->button4->ForeColor = System::Drawing::Color::DimGray;
			this->button4->Location = System::Drawing::Point(758, 437);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 33);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(14, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(379, 22);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Enter valide path file URL (Video,Audio,Image).";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"A760-Roman-Smc", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(13, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(360, 25);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Welcom To The ZaikOSMediaPlayer";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// Stop
			// 
			this->Stop->BackColor = System::Drawing::Color::DimGray;
			this->Stop->FlatAppearance->BorderSize = 0;
			this->Stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Stop->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Stop->Location = System::Drawing::Point(179, 389);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(93, 30);
			this->Stop->TabIndex = 2;
			this->Stop->Text = L"Stop";
			this->Stop->UseVisualStyleBackColor = false;
			this->Stop->Click += gcnew System::EventHandler(this, &MyForm::Stop_Click);
			// 
			// Play
			// 
			this->Play->BackColor = System::Drawing::Color::DimGray;
			this->Play->FlatAppearance->BorderSize = 0;
			this->Play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Play->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Play->Location = System::Drawing::Point(59, 389);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(93, 30);
			this->Play->TabIndex = 1;
			this->Play->Text = L"Play";
			this->Play->UseVisualStyleBackColor = false;
			this->Play->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(18, 36);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(829, 347);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &MyForm::axWindowsMediaPlayer1_Enter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(37, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 35);
			this->button3->TabIndex = 14;
			this->button3->Text = L"OK!";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(37, 105);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(793, 247);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = resources->GetString(L"textBox2.Text");
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"A760-Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(29, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(402, 48);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Terms and Conditions";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(856, 483);
			this->Controls->Add(this->panelTerms);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ZaikosMediaPlayer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panelTerms->ResumeLayout(false);
			this->panelTerms->PerformLayout();
			this->panelMedia->ResumeLayout(false);
			this->panelMedia->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked)
		{
			button1->Enabled = true;
		}
		else
		{
			button1->Enabled = false;
		}


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "zaikos")
		{
			if (textBox3->Text == "zaikos")
			{
				MessageBox::Show("Login Successful!");
				panelMedia->Parent = this;
				panelMedia->Visible = true;
				panelMedia->Show();
				panelMedia->BringToFront();  // Ensure it's on top
				
				// Optional: Force repaint of the form to ensure visibility
				//this->Invalidate();

			}
			else
			{
				MessageBox::Show("Incorrect Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		else
		{
			MessageBox::Show("Incorrect Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panelTerms->Hide();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	panelTerms->Show();
	//panelMedia->Hide();
}
	   //Dragging the form
	   bool dragging;
	   Point offset;
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Enabel dragging and mouse position
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//check if it move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Disabel dragging
	dragging = false;
}
	   //username
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox3->Focus();
	}
}
	   //password
private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button1->PerformClick();
	}
}
private: System::Void panelTerms_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->URL == nullptr || axWindowsMediaPlayer1->URL->Length == 0) {
		MessageBox::Show("No media loaded. Please load a file first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;  // Exit if no media is loaded
	}
	axWindowsMediaPlayer1->Ctlcontrols->play();
}
private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->stop(); // Stop the music
}
private: System::Void textBoxLoad_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Browsebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Configurer le filtre pour les fichiers multimédia
	openFileDialog1->Filter = "Fichiers multimédia (*.mp3;*.mp4;*.wav)|*.mp3;*.mp4;*.wav|Tous les fichiers (*.*)|*.*";

	// Afficher la boîte de dialogue pour choisir un fichier
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Récupérer le chemin du fichier sélectionné
		String^ filePath = openFileDialog1->FileName;

		// Charger le fichier sélectionné dans le lecteur multimédia
		axWindowsMediaPlayer1->URL = filePath;

		// Message pour confirmer que le fichier a été chargé
		MessageBox::Show("Fichier chargé avec succès : " + filePath, "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}