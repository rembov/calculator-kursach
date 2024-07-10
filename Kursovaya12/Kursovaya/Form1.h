#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <locale.h>
#include <stdlib.h>
#include "plus.h"
#include "minus.h"
#include "multiplication.h"
#include "division.h"
#include "fileadd.h"
#include "twocomplement.h"

namespace Kursovaya {

	using namespace System::IO;
	using namespace System::Threading;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip4;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip5;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip6;








	private: System::ComponentModel::IContainer^ components;


	protected:
	private: double first_val;
	private: char math_oper;
	private: System::Windows::Forms::Button^ button25;

	private:

		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->contextMenuStrip4 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip5 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip6 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(11, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 39);
			this->textBox1->TabIndex = 21;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(14, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 39);
			this->button1->TabIndex = 22;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(70, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 39);
			this->button2->TabIndex = 23;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(126, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 39);
			this->button3->TabIndex = 24;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(14, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 39);
			this->button4->TabIndex = 25;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(70, 201);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 39);
			this->button5->TabIndex = 26;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(126, 201);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 39);
			this->button6->TabIndex = 27;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DimGray;
			this->button7->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(14, 156);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 39);
			this->button7->TabIndex = 28;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DimGray;
			this->button8->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(70, 156);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 39);
			this->button8->TabIndex = 29;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DimGray;
			this->button9->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(126, 156);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 39);
			this->button9->TabIndex = 30;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Aqua;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic));
			this->button10->Location = System::Drawing::Point(238, 246);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 39);
			this->button10->TabIndex = 31;
			this->button10->Text = L"√a";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Aqua;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic));
			this->button11->Location = System::Drawing::Point(238, 201);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 39);
			this->button11->TabIndex = 32;
			this->button11->Text = L"aⁿ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Desktop;
			this->button12->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button12->ForeColor = System::Drawing::Color::Red;
			this->button12->Location = System::Drawing::Point(13, 111);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(162, 39);
			this->button12->TabIndex = 33;
			this->button12->Text = L"Ликвидировать";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkOrange;
			this->button13->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button13->Location = System::Drawing::Point(182, 156);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 39);
			this->button13->TabIndex = 34;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkOrange;
			this->button14->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button14->Location = System::Drawing::Point(182, 201);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 39);
			this->button14->TabIndex = 35;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkOrange;
			this->button15->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button15->Location = System::Drawing::Point(182, 246);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 39);
			this->button15->TabIndex = 36;
			this->button15->Text = L"×";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkOrange;
			this->button16->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button16->Location = System::Drawing::Point(182, 291);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 39);
			this->button16->TabIndex = 37;
			this->button16->Text = L"÷";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Aqua;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button17->Location = System::Drawing::Point(294, 156);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 39);
			this->button17->TabIndex = 38;
			this->button17->Text = L"Sin";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Aqua;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button18->Location = System::Drawing::Point(294, 201);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 39);
			this->button18->TabIndex = 39;
			this->button18->Text = L"Cos";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Aqua;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button19->Location = System::Drawing::Point(294, 246);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 39);
			this->button19->TabIndex = 40;
			this->button19->Text = L"Tan";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Aqua;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button20->Location = System::Drawing::Point(238, 156);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 39);
			this->button20->TabIndex = 41;
			this->button20->Text = L"Ctg";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkOrange;
			this->button21->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button21->Location = System::Drawing::Point(238, 292);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(106, 37);
			this->button21->TabIndex = 42;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 70);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 29);
			this->textBox2->TabIndex = 43;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::DimGray;
			this->button22->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button22->Location = System::Drawing::Point(15, 291);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(105, 39);
			this->button22->TabIndex = 44;
			this->button22->Text = L"0";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::DimGray;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button23->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button23->Location = System::Drawing::Point(126, 291);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 39);
			this->button23->TabIndex = 45;
			this->button23->Text = L",";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::DimGray;
			this->button24->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button24->Location = System::Drawing::Point(14, 335);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(330, 32);
			this->button24->TabIndex = 46;
			this->button24->Text = L"Список 10 последних вычислений";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripTextBox1,
					this->infoToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(161, 51);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->infoToolStripMenuItem->Text = L"Info";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox2 });
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(161, 29);
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			// 
			// contextMenuStrip4
			// 
			this->contextMenuStrip4->Name = L"contextMenuStrip4";
			this->contextMenuStrip4->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip5
			// 
			this->contextMenuStrip5->Name = L"contextMenuStrip5";
			this->contextMenuStrip5->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip6
			// 
			this->contextMenuStrip6->Name = L"contextMenuStrip6";
			this->contextMenuStrip6->Size = System::Drawing::Size(61, 4);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::DimGray;
			this->button25->Font = (gcnew System::Drawing::Font(L"Consolas", 12));
			this->button25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button25->Location = System::Drawing::Point(182, 111);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(162, 39);
			this->button25->TabIndex = 47;
			this->button25->Text = L"Доп.код";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(359, 396);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
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
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip1->PerformLayout();
			this->contextMenuStrip3->ResumeLayout(false);
			this->contextMenuStrip3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		int actions;
		double a, b, y, result;
		String^ s;



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "1";
		}
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "2";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "3";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "4";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "5";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "6";
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "7";
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "8";
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "9";
		}
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length < 7) {
			String^ s = textBox1->Text;
			textBox1->Text = s + "0";
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0) {
			String^ s = textBox1->Text;
			a = System::Convert::ToSingle(textBox1->Text);
			actions = 5;
			b = sqrt(a);
			b = floorf(b * 1000) / 1000;
			fileadd(a, b, result, actions);
			textBox1->Text = System::Convert::ToString(b);
		}

	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		while (textBox1->Text->Length != 0) {
			a = System::Convert::ToSingle(textBox1->Text);
			textBox1->Clear();
			actions = 10;
			a = floor(a * 1000) / 1000;
			textBox2->Text = System::Convert::ToString(a) + "^";
		}
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
	}


	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		while (textBox1->Text->Length != 0) {
			a = System::Convert::ToSingle(textBox1->Text);
			textBox1->Clear();
			actions = 1;
			a = floorf(a * 1000) / 1000;
			textBox2->Text = System::Convert::ToString(a) + "+";
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		while (textBox1->Text->Length != 0) {
			a = System::Convert::ToSingle(textBox1->Text);
			textBox1->Clear();
			actions = 2;
			a = floorf(a * 1000) / 1000;
			textBox2->Text = System::Convert::ToString(a) + "-";
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		while (textBox1->Text->Length != 0) {
			a = System::Convert::ToSingle(textBox1->Text);
			textBox1->Clear();
			actions = 3;
			a = floor(a * 1000) / 1000;
			textBox2->Text = System::Convert::ToString(a) + "·";
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		while (textBox1->Text->Length != 0) {
			a = System::Convert::ToSingle(textBox1->Text);
			textBox1->Clear();
			actions = 4;

			textBox2->Text = System::Convert::ToString(a) + "/";
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0) {
			String^ s = textBox1->Text;
			a = System::Convert::ToSingle(textBox1->Text);
			actions = 6;
			b = sin(a);
			b = floorf(b * 1000) / 1000;
			fileadd(a, b, result, actions);
			textBox1->Text = System::Convert::ToString(b);
		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0) {
			String^ s = textBox1->Text;
			a = System::Convert::ToSingle(textBox1->Text);
			actions = 7;
			b = cos(a);
			b = floorf(b * 1000) / 1000;
			fileadd(a, b, result, actions);
			textBox1->Text = System::Convert::ToString(b);
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0) {
			String^ s = textBox1->Text;
			a = System::Convert::ToSingle(textBox1->Text);
			actions = 8;
			b = tan(a);
			b = floorf(b * 1000) / 1000;
			fileadd(a, b, result, actions);
			textBox1->Text = System::Convert::ToString(b);
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0) {
			String^ s = textBox1->Text;
			a = System::Convert::ToSingle(textBox1->Text);
			actions = 9;
			b = 1 / tan(a);
			b = floorf(b * 1000) / 1000;
			fileadd(a, b, result, actions);
			textBox1->Text = System::Convert::ToString(b);
		}
	}
	private: System::Void math_opers(char oper)
	{
		this->first_val = System::Convert::ToDouble(this->textBox1->Text);

		this->math_oper = oper;
		this->textBox1->Text = "0";
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0)) {
			b = System::Convert::ToSingle(textBox1->Text);

			double second = System::Convert::ToDouble(this->textBox1->Text);
			double res = 0;

			switch (actions) {
			case 1:
				result = pl(a, b);
				fileadd(a, b, result, actions);

				textBox1->Text = System::Convert::ToString(pl(a, b));
				textBox2->Clear();
				break;
			case 2:
				result = min1(a, b);
				fileadd(a, b, result, actions);

				textBox1->Text = System::Convert::ToString(min1(a, b));
				textBox2->Clear();
				break;
			case 3:
				result = multiplication(a, b);
				fileadd(a, b, result, actions);
				//  result = a * b;
				textBox1->Text = System::Convert::ToString(multiplication(a, b));
				textBox2->Clear();
				break;
			case 4:
				result = division(a, b);
				fileadd(a, b, result, actions);
				// result = a / b;
				textBox1->Text = System::Convert::ToString(division(a, b));
				textBox2->Clear();
				break;
			case 10:
				result = pow(a, b);
				fileadd(a, b, result, actions);
				// result = a ^ b;
				textBox1->Text = System::Convert::ToString(pow(a, b));
				textBox2->Clear();
				break;

			default:
				break;
			}

		}
	}


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text->IndexOf(',') == -1) {
			if (textBox1->Text->Length != 0) {


				b = System::Convert::ToSingle(textBox1->Text);

				String^ s = textBox1->Text;
				textBox1->Text = s + ",";
			}
		}
		else {

		}
	}


	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("notepad.exe", "vichisleniya.txt");
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
			e->Handled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		  if (textBox1->Text->Length > 0) {
			String^ s = textBox1->Text;
			a = System::Convert::ToDouble(textBox1->Text);
			actions = 11;
			b = twocomplement(a);
			char bin[33] = {0};
			memset(bin, 48, 32);
    
			convToBinStr(b, bin, 31);
			fileadd(a, b, result, actions);
			String^ restext = gcnew String(bin, 11, 33);
			textBox1->Text = restext;

			
		  }
		}
	};
};