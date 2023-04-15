#pragma once
#include "Animal.h"
namespace Project2 {

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
	private: System::Windows::Forms::Button^ AdditionButton;
	protected:


	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ SubButton;
	private: System::Windows::Forms::Button^ MultButton;
	private: System::Windows::Forms::Button^ DivButon;
	private: System::Windows::Forms::Button^ PowButton;











	protected:

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
			this->AdditionButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SubButton = (gcnew System::Windows::Forms::Button());
			this->MultButton = (gcnew System::Windows::Forms::Button());
			this->DivButon = (gcnew System::Windows::Forms::Button());
			this->PowButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AdditionButton
			// 
			this->AdditionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdditionButton->Location = System::Drawing::Point(86, 210);
			this->AdditionButton->Name = L"AdditionButton";
			this->AdditionButton->Size = System::Drawing::Size(78, 73);
			this->AdditionButton->TabIndex = 0;
			this->AdditionButton->Text = L"+";
			this->AdditionButton->UseVisualStyleBackColor = true;
			this->AdditionButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(456, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(321, 562);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(99, 344);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(565, 238);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(321, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Operate";
			// 
			// SubButton
			// 
			this->SubButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubButton->Location = System::Drawing::Point(214, 210);
			this->SubButton->Name = L"SubButton";
			this->SubButton->Size = System::Drawing::Size(77, 73);
			this->SubButton->TabIndex = 6;
			this->SubButton->Text = L"-";
			this->SubButton->UseVisualStyleBackColor = true;
			this->SubButton->Click += gcnew System::EventHandler(this, &MyForm::SubButton_Click);
			// 
			// MultButton
			// 
			this->MultButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MultButton->Location = System::Drawing::Point(334, 210);
			this->MultButton->Name = L"MultButton";
			this->MultButton->Size = System::Drawing::Size(76, 73);
			this->MultButton->TabIndex = 7;
			this->MultButton->Text = L"*";
			this->MultButton->UseVisualStyleBackColor = true;
			this->MultButton->Click += gcnew System::EventHandler(this, &MyForm::MultButton_Click);
			// 
			// DivButon
			// 
			this->DivButon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivButon->Location = System::Drawing::Point(456, 210);
			this->DivButon->Name = L"DivButon";
			this->DivButon->Size = System::Drawing::Size(75, 73);
			this->DivButon->TabIndex = 8;
			this->DivButon->Text = L"/";
			this->DivButon->UseVisualStyleBackColor = true;
			this->DivButon->Click += gcnew System::EventHandler(this, &MyForm::DivButon_Click);
			// 
			// PowButton
			// 
			this->PowButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PowButton->Location = System::Drawing::Point(587, 210);
			this->PowButton->Name = L"PowButton";
			this->PowButton->Size = System::Drawing::Size(77, 73);
			this->PowButton->TabIndex = 9;
			this->PowButton->Text = L"^";
			this->PowButton->UseVisualStyleBackColor = true;
			this->PowButton->Click += gcnew System::EventHandler(this, &MyForm::PowButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 702);
			this->Controls->Add(this->PowButton);
			this->Controls->Add(this->DivButon);
			this->Controls->Add(this->MultButton);
			this->Controls->Add(this->SubButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->AdditionButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int value1, value2, result;
		
		value1 = System::Convert::ToInt16(textBox1->Text);
		value2 = System::Convert::ToInt16(textBox2->Text);

		result = value1 + value2;

		richTextBox1->Text = System::Convert::ToString(result);

		Animal a1 = Animal(13);

		MessageBox::Show(System::Convert::ToString(a1.getAge()));

		if (result == 24) {
			MessageBox::Show("Nice job you got the exact result");
		}
		

	}
		   


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void SubButton_Click(System::Object^ sender, System::EventArgs^ e) {

	int v1, v2, result;

	v1 = System::Convert::ToInt16(textBox1->Text);
	v2 = System::Convert::ToInt16(textBox2->Text);

	result = v1 - v2;

	richTextBox1->Text = System::Convert::ToString(result);



}
private: System::Void MultButton_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void DivButon_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PowButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
