#include <string>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include "imageFolder.h"
#pragma once

namespace Image_Annotator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// The Main screen used to annotate pictures.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent(); /// Creates and initializes all the components on the form. 

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		// Clean up any resources being used.
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::FolderBrowserDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ selectSquare;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ selectPolygon;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::ListBox^ listBox2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->selectSquare = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->selectPolygon = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectSquare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectPolygon))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(957, 873);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(911, 746);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(516, 121);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(908, 878);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Classes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(371, 878);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Images";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 873);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Browse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(496, 875);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(396, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1038, 875);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 817);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 20);
			this->textBox3->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(81, 815);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Browse";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 820);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Annotations";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(11, 853);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(339, 43);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Save Annotations";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(175, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 720);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::TimerCallback);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->ShowNewFolderButton = false;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(371, 746);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(521, 121);
			this->listBox2->TabIndex = 13;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// selectSquare
			// 
			this->selectSquare->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->selectSquare->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectSquare.Image")));
			this->selectSquare->Location = System::Drawing::Point(20, 20);
			this->selectSquare->Name = L"selectSquare";
			this->selectSquare->Size = System::Drawing::Size(130, 130);
			this->selectSquare->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->selectSquare->TabIndex = 14;
			this->selectSquare->TabStop = false;
			this->selectSquare->Click += gcnew System::EventHandler(this, &MyForm::selectSquare_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1354, 873);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Save";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// selectPolygon
			// 
			this->selectPolygon->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->selectPolygon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectPolygon.Image")));
			this->selectPolygon->Location = System::Drawing::Point(20, 187);
			this->selectPolygon->Name = L"selectPolygon";
			this->selectPolygon->Size = System::Drawing::Size(130, 130);
			this->selectPolygon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->selectPolygon->TabIndex = 16;
			this->selectPolygon->TabStop = false;
			this->selectPolygon->Click += gcnew System::EventHandler(this, &MyForm::selectPolygon_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Custom Polygon";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(53, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Rectangle";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1473, 910);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->selectPolygon);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->selectSquare);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Image Annotator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectSquare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectPolygon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void shapePoint1();
	void shapePoint2();
	void paintShapes(PaintEventArgs^ e);
	void savePic();
	void loadImages();
	void setImage();
	void resetShapeSelection();
	Point centerPointer(Point pos, bool isStart);

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		paintShapes(e);
	}

	private: void TimerCallback(Object^ sender, EventArgs^ e) {
		pictureBox1->Invalidate();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		savePic();
	}

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		shapePoint1();
	}

	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		shapePoint2();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		loadImages();
	}

	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		setImage();
	}
	
	private: System::Void selectSquare_Click(System::Object^ sender, System::EventArgs^ e) {
		resetShapeSelection();
		delete selectSquare->Image;
		selectSquare->Load("squareSelected.png");
	}

	private: System::Void selectPolygon_Click(System::Object^ sender, System::EventArgs^ e) {
		resetShapeSelection();
		delete selectPolygon->Image;
		selectPolygon->Load("polygonSelected.png");
	}
};
}
