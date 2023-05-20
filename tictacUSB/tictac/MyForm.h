#pragma once

namespace tictac {

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
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Swis721 BlkEx BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(197, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(442, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TIC TAC TOE";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(39, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 103);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(39, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 103);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(39, 322);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 103);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(184, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 103);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(184, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 103);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(184, 322);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(139, 103);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(329, 101);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(139, 103);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(329, 210);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(139, 103);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(329, 322);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(139, 103);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(520, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 28);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Player X: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(632, 132);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 31);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(520, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 28);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Player O: ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Green;
			this->textBox2->Location = System::Drawing::Point(632, 173);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 31);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOrange;
			this->label5->Location = System::Drawing::Point(593, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 31);
			this->label5->TabIndex = 15;
			this->label5->Text = L"SCOREBOARD";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(535, 332);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(266, 93);
			this->button10->TabIndex = 16;
			this->button10->Text = L"RESET";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(535, 228);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(266, 93);
			this->button11->TabIndex = 17;
			this->button11->Text = L"NEW GAME";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(847, 475);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TIC TAC TOE";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//code starts=============================================================

		String^ player = "X"; // VARIABLE SA PLAYER MAO "X" ANG VALUE KAY SI PLAYER X MAY DAPAT MAG UNA
		int score1 = 0; // KANI VARIABLE SA SCORE NI X
		int score2 = 0;// KANI SA PLAYER O
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//String^ scoreStr = score1.ToString();
		//textBox1->Text = scoreStr;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}


		   //buttons==================================================================

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button1->Text == "") { //KANI NGA IF ELSE TAN AWN SA KUNG EMPTY ANG BOARD THEN MO EXECUTE
			if (player == "X") {   // KANI NGA IF ELSE KAY TAN AWN KUNG "X" BA ANG PLAYER ANG NAGDUWA
				button1->Text = "X";
				button1->ForeColor = System::Drawing::Color::Red; // KANI PARA MAUSAB ANG COLOR
				player = "O"; // KANI PARA PLAYER O NASAD NEXT TURN


			}
			else if (player == "O") {
				button1->Text = "O";
				button1->ForeColor = System::Drawing::Color::Green;
				player = "X";

			}
			checkWin();
			isDraw();

		}
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button4->Text == "") {
			if (player == "X") {
				button4->Text = "X";
				button4->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button4->Text = "O";
				button4->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}


	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button7->Text == "") {
			if (player == "X") {
				button7->Text = "X";
				button7->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button7->Text = "O";
				button7->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button2->Text == "") {
			if (player == "X") {
				button2->Text = "X";
				button2->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button2->Text = "O";
				button2->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button5->Text == "") {
			if (player == "X") {
				button5->Text = "X";
				button5->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button5->Text = "O";
				button5->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button3->Text == "") {
			if (player == "X") {
				button3->Text = "X";
				button3->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button3->Text = "O";
				button3->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button6->Text == "") {
			if (player == "X") {
				button6->Text = "X";
				button6->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button6->Text = "O";
				button6->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button9->Text == "") {
			if (player == "X") {
				button9->Text = "X";
				button9->ForeColor = System::Drawing::Color::Red;
				player = "O";
			}
			else if (player == "O") {
				button9->Text = "O";
				button9->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button8->Text == "") {
			if (player == "X") {
				button8->Text = "X";
				button8->ForeColor = System::Drawing::Color::Red;
				player = "O";

			}
			else if (player == "O") {
				button8->Text = "O";
				button8->ForeColor = System::Drawing::Color::Green;
				player = "X";
			}
			checkWin();
			isDraw();
		}
	}
	

	   private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		   clear();
	   }

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	newGame();
}


	   // FUNCTIONS ======================================

	   // MAO NI ANG CLEAR NGA FUNCTION PARA MABALIK SA UNO ANG DUWA PERO WALAY LABOT ANG SCORE ANG BOARD RA 
	   void clear() {
		   button1->Text = "";
		   button2->Text = "";
		   button3->Text = "";
		   button4->Text = "";
		   button5->Text = "";
		   button6->Text = "";
		   button7->Text = "";
		   button8->Text = "";
		   button9->Text = "";
		   button1->BackColor = Color::White;
		   button4->BackColor = Color::White;
		   button7->BackColor = Color::White;
		   button2->BackColor = Color::White;
		   button3->BackColor = Color::White;
		   button5->BackColor = Color::White;
		   button6->BackColor = Color::White;
		   button8->BackColor = Color::White;
		   button9->BackColor = Color::White;
		   player = "X";

	   }

	   // MAO NI ANG FUNCTION PARA MAHIBAW AN KUNG NAA BAY NAKADAOG 
	   // BOOL TYPE NI SIYA NGA FUNCTION KAY MAG RETURN OG TRUE KUNG NAA DAOG 
	   // KUNG WALAY DAOG MAG RETURN OG FALSE
	   bool checkWin() {
		   
		   
			   if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				   button1->BackColor = Color::Orange; // KANI PARA CHANGE SA COLOR TO ORANGE IF NAAY MAKADAOG
				   button4->BackColor = Color::Orange;
				   button7->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");// KANI KATUNG MONOTIFY KINSAY DAOG
				   score1 += 1; // PARA +1 SA MAKASCORE
				   String^ scoreStr = score1.ToString(); // KANI KAY GIHIMONG STRING ANG INT PARA MAASHOW SA TEXT
				   textBox1->Text = scoreStr; // MAO NANI SYA AFTER MAHIMONG STRING GIDISPLAY SA TEXTBOX NGA SCORE
				 
				   clear();// PARA  BALIK UNO ANG BOARD
			   }
			   else if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				   button2->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button8->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				  
				   clear();
			   }
			   else if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				   button3->BackColor = Color::Orange;
				   button6->BackColor = Color::Orange;
				   button9->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				 
				   clear();
			   }
			   else if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				   button1->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button9->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				   
				   clear();
			   }
			   else if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				   button3->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button7->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				
				   clear();
			   }
			   else if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				   button1->BackColor = Color::Orange;
				   button2->BackColor = Color::Orange;
				   button3->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				
				   clear();
			   }
			   else if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				   button4->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button6->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				  
				   clear();
			   }
			   else if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				   button7->BackColor = Color::Orange;
				   button8->BackColor = Color::Orange;
				   button9->BackColor = Color::Orange;
				   MessageBox::Show("Player X wins!");
				   score1 += 1;
				   String^ scoreStr = score1.ToString();
				   textBox1->Text = scoreStr;
				
				   clear();
			   }
			   //O player
			   if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				   button1->BackColor = Color::Orange;
				   button4->BackColor = Color::Orange;
				   button7->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				  
				   clear();
			   }
			   else if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				   button2->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button8->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				  
				   clear();
			   }
			   else if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				   button3->BackColor = Color::Orange;
				   button6->BackColor = Color::Orange;
				   button9->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				
				   clear();
			   }
			   else if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				   button1->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button9->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				  
				   clear();
			   }
			   else if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				   button3->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button7->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				 
				   clear();
			   }
			   else if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				   button1->BackColor = Color::Orange;
				   button2->BackColor = Color::Orange;
				   button3->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				  
				   clear();
			   }
			   else if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				   button4->BackColor = Color::Orange;
				   button5->BackColor = Color::Orange;
				   button6->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				   
				   clear();
			   }
			   else if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				   button7->BackColor = Color::Orange;
				   button8->BackColor = Color::Orange;
				   button9->BackColor = Color::Orange;
				   MessageBox::Show("Player O wins!");
				   score2 += 1;
				   String^ scoreStr2 = score2.ToString();
				   textBox2->Text = scoreStr2;
				 
				   clear();
				  
			   }
			   else {
				   return false; // KANI MORETURN OG FALSE ANG CHECKWIN FUNCTION KUNG WALAY NAKADAOG
			   }
	   }
	 
	   /// MAO NI FUNCTION PARA MAHIBAW AN KUNG DRAW 
	   void isDraw() {
		   if (button1->Text != "" &&
			   button2->Text != "" &&
			   button3->Text != ""&&
			   button4->Text != ""&&
			   button5->Text != ""&& // KANI KAY IF TANANG BOARD DILI EMPTY(NAAY SULOD)
			   button6->Text != ""&&
			   button7->Text != ""&&
			   button8->Text != ""&&
			   button9->Text != "")
		   {
			   if (!checkWin()) // IF MORETURN OG FALSE SI CHECKWIN MEANING WALAY NAKADAOG
			   {
				   MessageBox::Show("DRAW!"); // MAO TOH MO DISPLAY SYAG DRAW!
				   clear(); //KANI PARABALIK UNO ANG BOARD

			   }
			  
		   }
	   }



	  
	   // KANI ANG FUNCTION PARA NEW GAME BALIK UNO TANAN HASTA SCORE
	   void newGame() {
		    score1 = 0;
		    score2 = 0;
		   String^ scoreStr = score1.ToString();
	       textBox1->Text = scoreStr;
		   String^ scoreStr2 = score2.ToString();
		  textBox2->Text = scoreStr2;
		   clear();
	   }

	 

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
