#pragma once

namespace PortTestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm_Gr
	/// </summary>
	public ref class MyForm_Gr : public System::Windows::Forms::Form
	{
	public:
		MyForm_Gr(void)
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
		~MyForm_Gr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  txtSeconds;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtSeconds = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsVisibleInLegend = false;
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series1->YValuesPerPoint = 3;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(870, 458);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->Name = L"Title1";
			title1->Text = L"Data";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(921, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Run (for, all, sin)";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(921, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(921, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Write to graph";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm_Gr::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm_Gr::timer1_Tick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(921, 475);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Start timer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm_Gr::button3_Click);
			// 
			// txtSeconds
			// 
			this->txtSeconds->Location = System::Drawing::Point(921, 447);
			this->txtSeconds->Name = L"txtSeconds";
			this->txtSeconds->Size = System::Drawing::Size(166, 22);
			this->txtSeconds->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(921, 504);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Stop timer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm_Gr::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(921, 313);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(166, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm_Gr::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(972, 293);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Auto out";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(921, 341);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Start";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm_Gr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1133, 567);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txtSeconds);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm_Gr";
			this->Text = L"MyForm_Gr";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //run
		double y;
		double xmin = -10, xmax = 10, step = 0.5;
		this->chart1->Series[0]->Points->Clear();
		for (double i = xmin; i <= xmax; i += step) {
			y = Math::Sin(i);
			this->chart1->Series[0]->Points->AddXY(i, y);
		}
	}*/

		//------------------------------------VARIABLES-------------------------------------
	double tmp;
	double cur_tmp;
	String^ time_sec_str;

	/*-----------------------------------------TASKS----------------------------------------
	- Сделать функцию для вывода по милисекундам, посмотреть с какой частотой будут считываться данные с порта
	- Разобраться с осями (масштабированием), разметкой
	- Использование textbox из другого окна
	*/
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //write to graph
		if(this->timer1->Enabled == true){
			if (this->textBox1->Text != String::Empty) {
				cur_tmp = tmp; //current tmp
				double y = Convert::ToDouble(this->textBox1->Text);
				int time_min = (int)cur_tmp;
				//? function (?) - эта система под вопросом, точно сделать функцию 
				double time_sec = Convert::ToDouble(time_min) - cur_tmp;
				if (time_sec == Convert::ToDouble(0))
					time_sec_str = "00";
				if (time_sec == Convert::ToDouble(0.5))
					time_sec_str = "30";
				String^ x = Convert::ToString(time_min) + ":" + time_sec_str;
				this->chart1->Series[0]->Points->AddXY(x, y);
			}
			//else {
				//this->textBox1->Text = "Enter value";
			//}
		//else {
			//MessageBox::Show("You must turn on the timer", "MessageBox Test", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//}
		}
	}
	
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) { //timer (omg)
	//int tmp = System::Int32::Parse(this->txtSeconds->Text);
	tmp = Convert::ToDouble(this->txtSeconds->Text);
	tmp += 0.5;
	this->txtSeconds->Text = Convert::ToString(tmp); //tmp.ToString()
	cur_tmp = tmp; //current tmp
	double y = cur_tmp + 1 * cur_tmp;
	textBox2->Text = Convert::ToString(y);
	int time = (int)cur_tmp;
	//? function (?) - эта система под вопросом, точно сделать функцию 
	String^ x = Convert::ToString(time);
	this->chart1->Series[0]->Points->AddXY(x, Convert::ToDouble(textBox2->Text));
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //start timer
	this->txtSeconds->Text = Convert::ToString(0);
	timer1->Start();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop();
}


private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->timer1->Enabled == true) {
		cur_tmp = tmp; //current tmp
		double y = cur_tmp + 1 * cur_tmp;
		textBox2->Text = Convert::ToString(y);
		int time = (int)cur_tmp;
		//? function (?) - эта система под вопросом, точно сделать функцию 
		String^ x = Convert::ToString(time);
		this->chart1->Series[0]->Points->AddXY(x, Convert::ToDouble(textBox2->Text));
	}
}
};
}
