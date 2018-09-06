#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"
namespace DBMSproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(389, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Holiday";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Age";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Sex";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Start Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"End Date";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Hotel";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(39, 265);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Guide";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(498, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(498, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(498, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(150, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(498, 161);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(150, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(498, 190);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(150, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(498, 231);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(150, 20);
			this->textBox9->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(498, 265);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(150, 20);
			this->textBox10->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(286, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(498, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(717, 124);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 21;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(690, 292);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Fetch All";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(877, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Fetch pirticular";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(717, 13);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Guide";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(877, 13);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Flight";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(717, 66);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"Hotel";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(877, 66);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 27;
			this->button9->Text = L"Income";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1041, 322);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Inserted");
	String^ conn="Server=127.0.0.1;Uid=root;Pwd=;Database=mydb";
	MySqlConnection^ con= gcnew MySqlConnection(conn);
	String^ name=textBox1->Text;
	int age=Int32::Parse(textBox2->Text);
	String^ sex=textBox3->Text;
	String^ from=textBox4->Text;
	String^ to=textBox5->Text;
	String^ ho=textBox9->Text;
	String^ gu=textBox10->Text;
	MySqlCommand^ cmd=gcnew MySqlCommand("insert into holiday values('"+name+"',"+age+",'"+sex+"','"+from+"','"+to+"','"+ho+"','"+gu+"')",con);
	MySqlDataReader^ dr;
	con->Open();
	dr=cmd->ExecuteReader();		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ conn="Server=127.0.0.1;Uid=root;Pwd=;Database=mydb";
				 MySqlConnection^ con= gcnew MySqlConnection(conn);
				 String^ name=textBox1->Text;
				 int age=Int32::Parse(textBox2->Text);
				 String^ sex=textBox3->Text;
				 String^ from=textBox4->Text;
				 String^ to=textBox5->Text;
				 String^ ho=textBox9->Text;
				 String^ gu=textBox10->Text;
				 MySqlCommand^ cmd=gcnew MySqlCommand("update holiday set Name='"+name+"',Sex='"+sex+"',Start Date='"+from+"',End Date='"+to+"',Hotel='"+ho+"',Guide='"+gu+"' WHERE Age="+age+"",con);
				 con->Open();
				 MySqlDataReader^ dr=cmd->ExecuteReader();
				 con->Close();
			 }catch(Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ conn="Server=127.0.0.1;Uid=root;Pwd=;Database=mydb";
	MySqlConnection^ con= gcnew MySqlConnection(conn);
	int age=Int32::Parse(textBox2->Text);
	MySqlCommand^ cmd=gcnew MySqlCommand("delete from holiday WHERE Age="+age+"",con);
	con->Open();
	MySqlDataReader^ dr=cmd->ExecuteReader();
	con->Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ conn="Server=127.0.0.1;Uid=root;Pwd=;Database=mydb";
	MySqlConnection^ con= gcnew MySqlConnection(conn);
	MySqlDataAdapter^ sda= gcnew MySqlDataAdapter("select * from holiday",con);
	DataTable^ dt=gcnew DataTable();
	sda->Fill(dt);
	bindingSource1->DataSource= dt;
	dataGridView1->DataSource=bindingSource1;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  try{
			 String^ conn="Server=127.0.0.1;Uid=root;Pwd=;Database=mydb";
			MySqlConnection^ con= gcnew MySqlConnection(conn);
			int age=Int32::Parse(textBox2->Text);
			MySqlCommand^ cmd=gcnew MySqlCommand("select * from holiday WHERE Age="+age+"",con);
			MySqlDataReader^ dr;
			con->Open();
			dr=cmd->ExecuteReader();
			while(dr->Read())
			{
				textBox1->Text=dr->GetString(0);
				textBox3->Text=dr->GetString(2);
				textBox4->Text=dr->GetString(3);
				textBox5->Text=dr->GetString(4);
				textBox9->Text=dr->GetString(5);
				textBox10->Text=dr->GetString(6);
			}
			con->Close();
			 }catch(Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
		 }
		 private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
					  this->Hide();
					  Form2^ f2=gcnew Form2();
					  f2->ShowDialog();
					  
				  }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form3^ f3=gcnew Form3();
			 f3->ShowDialog();
			 
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form4^ f4=gcnew Form4();
			 f4->ShowDialog();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form5^ f5=gcnew Form5();
			 f5->ShowDialog();
		 }
}
;}


