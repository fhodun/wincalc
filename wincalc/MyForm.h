#pragma once

namespace wincalc {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToFileToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ enabledToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ locationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ overwriteToolStripMenuItem;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->saveToFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToFileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enabledToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overwriteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->locationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(78, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(78, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(144, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(78, 125);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(144, 125);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 79);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 40);
			this->button8->TabIndex = 7;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(78, 79);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 40);
			this->button9->TabIndex = 8;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(144, 79);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 40);
			this->button10->TabIndex = 9;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(12, 217);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 40);
			this->button11->TabIndex = 10;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(144, 217);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 40);
			this->button12->TabIndex = 11;
			this->button12->Text = L",";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(210, 217);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 40);
			this->button13->TabIndex = 12;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(210, 171);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 40);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(210, 125);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 40);
			this->button15->TabIndex = 14;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(210, 79);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 40);
			this->button16->TabIndex = 15;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(258, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(258, 20);
			this->textBox2->TabIndex = 17;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(12, 263);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(258, 40);
			this->button17->TabIndex = 18;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToFileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(283, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// saveToFileToolStripMenuItem
			// 
			this->saveToFileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToFileToolStripMenuItem1 });
			this->saveToFileToolStripMenuItem->Name = L"saveToFileToolStripMenuItem";
			this->saveToFileToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->saveToFileToolStripMenuItem->Text = L"Options";
			this->saveToFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToFileToolStripMenuItem_Click);
			// 
			// saveToFileToolStripMenuItem1
			// 
			this->saveToFileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->enabledToolStripMenuItem,
					this->overwriteToolStripMenuItem, this->locationToolStripMenuItem
			});
			this->saveToFileToolStripMenuItem1->Name = L"saveToFileToolStripMenuItem1";
			this->saveToFileToolStripMenuItem1->Size = System::Drawing::Size(134, 22);
			this->saveToFileToolStripMenuItem1->Text = L"Save To File";
			// 
			// enabledToolStripMenuItem
			// 
			this->enabledToolStripMenuItem->CheckOnClick = true;
			this->enabledToolStripMenuItem->Name = L"enabledToolStripMenuItem";
			this->enabledToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->enabledToolStripMenuItem->Text = L"Enabled";
			// 
			// overwriteToolStripMenuItem
			// 
			this->overwriteToolStripMenuItem->CheckOnClick = true;
			this->overwriteToolStripMenuItem->Name = L"overwriteToolStripMenuItem";
			this->overwriteToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->overwriteToolStripMenuItem->Text = L"Overwrite";
			// 
			// locationToolStripMenuItem
			// 
			this->locationToolStripMenuItem->Name = L"locationToolStripMenuItem";
			this->locationToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->locationToolStripMenuItem->Text = L"Location";
			this->locationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::locationToolStripMenuItem_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 314);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"WinCalc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double sum = 0;
		char last_operation = 's';
		bool operation(char type)
		{
			double value = 0;
			try
			{
				value = System::Convert::ToDouble(textBox1->Text);
			}
			catch (...)
			{
				return false;
			}
			if (last_operation != '=')
			textBox2->AppendText(System::Convert::ToString(value));
			textBox1->Clear();
			switch (last_operation)
			{
			case '+':
				sum += value;
				break;
			case '-':
				sum -= value;
				break;
			case '*':
				sum *= value;
				break;
			case '/':
				sum /= value;
				break;
			case 'C':	
				break;
			case '=':
				sum = value;
				break;
			case 's':
				sum = value;
				break;
			default:
				MessageBox::Show("An error ocurred");
				break;
			};
			last_operation = type;	
			return true;
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("0");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("1");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("2");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("3");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("4");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("5");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("6");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("7");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("8");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("9");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	sum = 0;
	last_operation = 's';
	textBox1->Clear();
	textBox2->Clear();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText(".");
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation('+'))
	textBox2->AppendText(" + ");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation('-'))
	textBox2->AppendText(" - ");
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation('*'))
	textBox2->AppendText(" * ");
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation('/'))
	textBox2->AppendText(" / ");
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation('='))
	textBox2->AppendText(" = ");
	textBox1->Text = System::Convert::ToString(sum);
	textBox2->AppendText(System::Convert::ToString(sum));
}
private: System::Void saveToFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void locationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void locationToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::IO::Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			//TODO: saving stream path to variable
			myStream->Close();
		}
	}
}
};
}
