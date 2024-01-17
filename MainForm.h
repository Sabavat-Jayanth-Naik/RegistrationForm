#pragma once

namespace FirstCppApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textname;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textMobile;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBOXSearch;
	private: System::Windows::Forms::Button^ btnsearch;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textMobile = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBOXSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(36, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FULLNAME:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(60, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"EmailId:";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(36, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Mobile No:";
			// 
			// textname
			// 
			this->textname->Location = System::Drawing::Point(164, 16);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(204, 26);
			this->textname->TabIndex = 3;
			// 
			// textEmail
			// 
			this->textEmail->Location = System::Drawing::Point(164, 76);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(204, 26);
			this->textEmail->TabIndex = 4;
			// 
			// textMobile
			// 
			this->textMobile->Location = System::Drawing::Point(164, 125);
			this->textMobile->Name = L"textMobile";
			this->textMobile->Size = System::Drawing::Size(204, 26);
			this->textMobile->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(264, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 52);
			this->button1->TabIndex = 6;
			this->button1->Text = L"RESET";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(154, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 52);
			this->button2->TabIndex = 7;
			this->button2->Text = L"SUBMIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gold;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(467, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(381, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Enter The Name To Search";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// textBOXSearch
			// 
			this->textBOXSearch->Location = System::Drawing::Point(525, 76);
			this->textBOXSearch->Name = L"textBOXSearch";
			this->textBOXSearch->Size = System::Drawing::Size(267, 26);
			this->textBOXSearch->TabIndex = 9;
			this->textBOXSearch->TextChanged += gcnew System::EventHandler(this, &MainForm::textBOXSearch_TextChanged);
			// 
			// btnsearch
			// 
			this->btnsearch->BackColor = System::Drawing::Color::Gold;
			this->btnsearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsearch->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnsearch->Location = System::Drawing::Point(571, 136);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(159, 63);
			this->btnsearch->TabIndex = 10;
			this->btnsearch->Text = L"SEARCH";
			this->btnsearch->UseVisualStyleBackColor = false;
			this->btnsearch->Click += gcnew System::EventHandler(this, &MainForm::btnsearch_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(896, 404);
			this->Controls->Add(this->btnsearch);
			this->Controls->Add(this->textBOXSearch);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textMobile);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->textname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		this->textname->Text = "";
		this->textEmail->Text = "";
		this->textMobile->Text = "";


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->textname->Text->Trim() == "")
		MessageBox::Show("Please Enter Name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (this->textEmail->Text->Trim() == "")
		MessageBox::Show("Please Enter Email", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (this->textMobile->Text->Trim() == "")
		MessageBox::Show("Please Enter MobileNo", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else {
		try
		{
			String^ connectionstring = "Data Source=localhost\\SQLEXPRESS;Integrated Security=True;";
			SqlConnection con(connectionstring);

			con.Open();
			String^ sqlquery = "Insert into UserRecord values ('" + this->textname->Text + "','" + this->textEmail->Text + "','" + this->textMobile->Text + "')";
			SqlCommand cmd(sqlquery, % con);
			cmd.ExecuteNonQuery();
			con.Close();

			MessageBox::Show("Data submitted Succesfully", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->textname->Text = "";
			this->textEmail->Text = "";
			this->textMobile->Text = "";

		}
		catch (Exception^ exception)
		{
			throw exception;
		}
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBOXSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnsearch_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ connectionstring = "Data Source=localhost\\SQLEXPRESS;Integrated Security=True;";
		SqlConnection con(connectionstring);

		String^ sqlquery = "select * from UserRecord where FullName like '%"+this->textBOXSearch->Text+"%'";
		SqlCommand cmd(sqlquery, % con);
		con.Open();
		SqlDataReader^ dr = cmd.ExecuteReader();
		if (dr->Read())
		{
			String^ result = "Full Name :" + dr["FullName"]->ToString() + ", Email : " + dr["EmailId"]->ToString() + ",Mobile No: " + dr["MobileNo"]->ToString();
			MessageBox::Show(result, "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			dr->Close();

		}
		else
		{
			dr->Close();
			MessageBox::Show("Data not Found:( ", "no data exist!", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		con.Close();
		this->textBOXSearch->Text = "";
	}
	catch (Exception^ ex)
	{
		throw ex;
	}
}
};
}
