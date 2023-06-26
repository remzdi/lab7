#pragma once

#include "Products.h"
#include <sstream>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>

using std::getline;

namespace OP2Laba7Nastya {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(30, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(350, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Text from file";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(30, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(30, 138);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(241, 333);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(160, 496);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 41);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Read File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(171, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Filename";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(168, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Date";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(351, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 19);
			this->label4->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(30, 561);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 41);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Create Copy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(160, 562);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 41);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Read Copy";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 678);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Products";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filename = textBox1->Text;
		String^ content = textBox2->Text;

		string filenameStr = msclr::interop::marshal_as<std::string>(filename);
		string contentStr = msclr::interop::marshal_as<std::string>(content);

		string line;
		std::istringstream issOuter(contentStr);

		Products products;

		try 
		{
			while (getline(issOuter, line))
			{
				string productName;
				string date;

				int day, month, year;

				std::istringstream issInner(line);
				if (std::getline(issInner, productName, ',') && std::getline(issInner, date)) {
					// Remove leading/trailing whitespace from the extracted values
					productName = productName.substr(productName.find_first_not_of(" \t"));
					date = date.substr(date.find_first_not_of(" \t"));

					// Extract the day, month, and year values from the date string
					std::istringstream dateStream(date);
					char delimiter;
					dateStream >> day >> delimiter >> month >> delimiter >> year;

					// Validate the parsing result
					if (dateStream.fail() || delimiter != '.') {
						throw std::runtime_error("Invalid date format in product text: " + line);
					}

				}
				products.addProduct(productName, day, month, year);
			}

			products.writeIntoFile(filenameStr);
			MessageBox::Show("File successfully created: " + filename);
		}
		catch (DateFormatException& ex)
		{
			MessageBox::Show(gcnew String(ex.what()));
		}
		catch (DateValidationException& ex)
		{
			MessageBox::Show(gcnew String(ex.what()));
		}
		catch (exception& ex)
		{
			MessageBox::Show("Error occured: " + gcnew String(ex.what()));
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filename = textBox1->Text;
		string filenameStr = msclr::interop::marshal_as<std::string>(filename);

		try {
			string copyFilename = filenameStr;
			std::string extension = ".txt";
	
			if (copyFilename.length() >= extension.length())
			{
				std::string endOfStr = copyFilename.substr(copyFilename.length() - extension.length());
	
				if (endOfStr != extension)
					throw std::runtime_error("Invalid filename. Only .txt files allowed.");
			}
			else
				throw std::runtime_error("Invalid filename. Name of file is too short.");

			std::ifstream file(filenameStr);
			if (!file.is_open())
				throw std::runtime_error("Can't open file to read.");

			string text;
			string line;
			while (std::getline(file, line))
			{
				text += line + "\n";
			}

			label4->Text = gcnew String(text.c_str());
		}
		catch (exception& ex) {
			MessageBox::Show("Error occured: " + gcnew String(ex.what()));
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filename = textBox1->Text;
		string filenameStr = msclr::interop::marshal_as<std::string>(filename);

		try {
			string copyFilename = filenameStr;
			std::string extension = ".txt";

			if (copyFilename.length() >= extension.length())
			{
				std::string endOfStr = copyFilename.substr(copyFilename.length() - extension.length());

				if (endOfStr != extension)
					throw std::runtime_error("Invalid filename. Only .txt files allowed.");
			}
			else
				throw std::runtime_error("Invalid filename. Name of file is too short.");

			std::ifstream file(filenameStr);
			if (!file.is_open())
				throw std::runtime_error("Can't open file to read.");

			Products products;
			string line;

			while (std::getline(file, line))
			{
				string productName;
				string date;

				int day, month, year;

				std::istringstream issInner(line);
				if (std::getline(issInner, productName, ',') && std::getline(issInner, date)) {
					// Remove leading/trailing whitespace from the extracted values
					productName = productName.substr(productName.find_first_not_of(" \t"));
					date = date.substr(date.find_first_not_of(" \t"));

					// Extract the day, month, and year values from the date string
					std::istringstream dateStream(date);
					char delimiter;
					dateStream >> day >> delimiter >> month >> delimiter >> year;

					// Validate the parsing result
					if (dateStream.fail() || delimiter != '.') {
						throw std::runtime_error("Invalid date format in product text: " + line);
					}

				}
				products.addProduct(productName, day, month, year);
			}

			string date = msclr::interop::marshal_as<std::string>(textBox3->Text);
			date = date.substr(date.find_first_not_of(" \t"));

			int day, month, year;

			std::istringstream dateStream(date);
			char delimiter;
			dateStream >> day >> delimiter >> month >> delimiter >> year;

			// Validate the parsing result
			if (dateStream.fail() || delimiter != '.') {
				throw std::runtime_error("Invalid date format in product text: " + line);
			}

			products.writeExpiredIntoFile(filenameStr, day, month, year);
			MessageBox::Show("File successfully created: " + filename);
		}
		catch (DateFormatException& ex)
		{
			MessageBox::Show(gcnew String(ex.what()));
		}
		catch (DateValidationException& ex)
		{
			MessageBox::Show(gcnew String(ex.what()));
		}
		catch (exception& ex)
		{
			MessageBox::Show("Error occured: " + gcnew String(ex.what()));
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filename = textBox1->Text;
		string filenameStr = "copy_" + msclr::interop::marshal_as<std::string>(filename);

		try {
			string copyFilename = filenameStr;
			std::string extension = ".txt";

			if (copyFilename.length() >= extension.length())
			{
				std::string endOfStr = copyFilename.substr(copyFilename.length() - extension.length());

				if (endOfStr != extension)
					throw std::runtime_error("Invalid filename. Only .txt files allowed.");
			}
			else
				throw std::runtime_error("Invalid filename. Name of file is too short.");

			std::ifstream file(filenameStr);
			if (!file.is_open())
				throw std::runtime_error("Can't open file to read.");

			string text;
			string line;
			while (std::getline(file, line))
			{
				text += line + "\n";
			}

			label4->Text = gcnew String(text.c_str());
		}
		catch (exception& ex) {
			MessageBox::Show("Error occured: " + gcnew String(ex.what()));
		}
	}
};
}
