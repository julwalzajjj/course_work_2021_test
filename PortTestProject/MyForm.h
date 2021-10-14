#pragma once
#include "MyForm_Gr.h"
namespace PortTestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	String^ dataOUT;
	public: delegate void AddDataDelegate(String^ myString);
	public: AddDataDelegate^ RxDelegate;
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  CP2102;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button5;
	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->CP2102 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CP2102
			// 
			this->CP2102->PortName = L"COM6";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"COM6" });
			this->comboBox1->Location = System::Drawing::Point(93, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(187, 24);
			this->comboBox1->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"COM-Ports";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"115200" });
			this->comboBox2->Location = System::Drawing::Point(93, 95);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(187, 24);
			this->comboBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Baud Rate";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(321, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Init Port";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GrayText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(321, 81);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 38);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(553, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(278, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Recerved";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Location = System::Drawing::Point(553, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(278, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Enter Here Command";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(553, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Sent";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(713, 131);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Read";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(553, 212);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(260, 23);
			this->progressBar1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(550, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Port Status";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(18, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(405, 22);
			this->textBox3->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(18, 198);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(405, 47);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Open graphics window";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1011, 605);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ indata;

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	this->RxDelegate = gcnew AddDataDelegate(AddDataMethod);
}

public: System::Void AddDataMethod(String^ myString) {
	textBox1->AppendText(myString);
}

private: void CP2102_Rx_IRQ(System::Object^ sender, SerialDataReceivedEventArgs^ e)
{
	SerialPort^ CP2102 = (SerialPort^)sender;
	String^ indata = CP2102->ReadExisting();
	textBox1->Invoke(this->RxDelegate, gcnew cli::array< System::Object^  >(1) { indata });
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CP2102->IsOpen) {
		dataOUT = textBox2->Text;
		CP2102->WriteLine(dataOUT);
	}
}
//-----------------------------------ѕашин код, доделать прием------------------------
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = Convert::ToString(CP2102->ReadChar());
}


private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { 
	MyForm_Gr ^graph = gcnew MyForm_Gr(); //graph - name of extemplyar form
	graph->Show();
}
		 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = String::Empty;
	if (this->comboBox1->Text == String::Empty || (this->comboBox2->Text == String::Empty))
		this->textBox3->Text = "Please Select Port Settings";
	else {
		try {
			if (!this->CP2102->IsOpen) {
				this->CP2102->PortName = this->comboBox1->Text;
				this->CP2102->BaudRate = Int32::Parse(this->comboBox2->Text);
				this->textBox2->Text = "Enter message here";
				//CP2102->DataReceived += gcnew SerialDataReceivedEventHandler(CP2102_Rx_IRQ);
				CP2102->WriteTimeout = 50;
				CP2102->ReadTimeout = 50;
				this->CP2102->Open();
				this->progressBar1->Value = 100;
			}
			else
				this->textBox3->Text = "Port isn't opened";
		}
		catch (Exception^ err)
		{
			MessageBox::Show("COM-port not found", "MessageBox Test", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
};
}
