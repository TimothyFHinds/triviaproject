#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include <vector>

namespace TriviaGame {

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
		private: System::Windows::Forms::Button^  playButton;
		protected:

		protected:



		private: System::Windows::Forms::Label^  IntroLabel;
		private: System::Windows::Forms::Panel^  IntroPanel;
		private: System::Windows::Forms::Panel^  OptionsPanel;
		private: System::Windows::Forms::Label^  enterNameLabel;



		private: System::Windows::Forms::TextBox^  nameTextBox;
		private: System::Windows::Forms::RadioButton^  hardRadioButton;


		private: System::Windows::Forms::RadioButton^  mediumRadioButton;

		private: System::Windows::Forms::RadioButton^  easyRadioButton;

		private: System::Windows::Forms::RadioButton^  anyRadioButton;
		private: System::Windows::Forms::GroupBox^  questionsGroupBox;


		private: System::Windows::Forms::RadioButton^  multipleChoiceRadioButton;
		private: System::Windows::Forms::RadioButton^  trueFalseRadioButton;


		private: System::Windows::Forms::RadioButton^  anyQuestionRadioButton;

		private: System::Windows::Forms::GroupBox^  difficultyGroupBox;
		private: System::Windows::Forms::GroupBox^  categoriesGroupBox;


		private: System::Windows::Forms::CheckBox^  musicCheckBox;
		private: System::Windows::Forms::CheckBox^  gkCheckBox;


		private: System::Windows::Forms::CheckBox^  geoCheckBox;

		private: System::Windows::Forms::CheckBox^  sportsCheckBox;

		private: System::Windows::Forms::CheckBox^  vgCheckBox;

		private: System::Windows::Forms::CheckBox^  allCheckBox;
		private: System::Windows::Forms::CheckBox^  vehiclesCheckBox;



		private: System::Windows::Forms::CheckBox^  filmCheckBox;

		private: System::Windows::Forms::CheckBox^  scienceCheckBox;

		private: System::Windows::Forms::CheckBox^  historyCheckBox;

		private: System::Windows::Forms::CheckBox^  animalsCheckBox;

		private: System::Windows::Forms::CheckBox^  teleCheckBox;
		private: System::Windows::Forms::Button^  beginButton;
		private: System::Windows::Forms::Label^  nameErrorLabel;


		private: System::Windows::Forms::Label^  categoryErrorLabel;
		private: System::Windows::Forms::Label^  introPanelWarningLabel;
		private: System::Windows::Forms::Panel^  questionPanel;
		private: System::Windows::Forms::Button^  answerButton4;
		private: System::Windows::Forms::Button^  answerButton3;
		private: System::Windows::Forms::Button^  answerButton2;
		private: System::Windows::Forms::Button^  answerButton1;
		private: System::Windows::Forms::Label^  questionLabel;








		protected:

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
				this->playButton = (gcnew System::Windows::Forms::Button());
				this->IntroLabel = (gcnew System::Windows::Forms::Label());
				this->IntroPanel = (gcnew System::Windows::Forms::Panel());
				this->introPanelWarningLabel = (gcnew System::Windows::Forms::Label());
				this->OptionsPanel = (gcnew System::Windows::Forms::Panel());
				this->categoryErrorLabel = (gcnew System::Windows::Forms::Label());
				this->nameErrorLabel = (gcnew System::Windows::Forms::Label());
				this->beginButton = (gcnew System::Windows::Forms::Button());
				this->categoriesGroupBox = (gcnew System::Windows::Forms::GroupBox());
				this->vehiclesCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->filmCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->scienceCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->historyCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->animalsCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->teleCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->musicCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->gkCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->geoCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->sportsCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->vgCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->allCheckBox = (gcnew System::Windows::Forms::CheckBox());
				this->questionsGroupBox = (gcnew System::Windows::Forms::GroupBox());
				this->multipleChoiceRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->trueFalseRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->anyQuestionRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->difficultyGroupBox = (gcnew System::Windows::Forms::GroupBox());
				this->anyRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->hardRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->easyRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->mediumRadioButton = (gcnew System::Windows::Forms::RadioButton());
				this->enterNameLabel = (gcnew System::Windows::Forms::Label());
				this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
				this->questionPanel = (gcnew System::Windows::Forms::Panel());
				this->questionLabel = (gcnew System::Windows::Forms::Label());
				this->answerButton4 = (gcnew System::Windows::Forms::Button());
				this->answerButton3 = (gcnew System::Windows::Forms::Button());
				this->answerButton2 = (gcnew System::Windows::Forms::Button());
				this->answerButton1 = (gcnew System::Windows::Forms::Button());
				this->IntroPanel->SuspendLayout();
				this->OptionsPanel->SuspendLayout();
				this->categoriesGroupBox->SuspendLayout();
				this->questionsGroupBox->SuspendLayout();
				this->difficultyGroupBox->SuspendLayout();
				this->questionPanel->SuspendLayout();
				this->SuspendLayout();
				// 
				// playButton
				// 
				this->playButton->Location = System::Drawing::Point(248, 340);
				this->playButton->Name = L"playButton";
				this->playButton->Size = System::Drawing::Size(263, 76);
				this->playButton->TabIndex = 1;
				this->playButton->Text = L"Play!";
				this->playButton->UseVisualStyleBackColor = true;
				this->playButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				// 
				// IntroLabel
				// 
				this->IntroLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->IntroLabel->AutoSize = true;
				this->IntroLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->IntroLabel->Location = System::Drawing::Point(106, 44);
				this->IntroLabel->Name = L"IntroLabel";
				this->IntroLabel->Size = System::Drawing::Size(549, 46);
				this->IntroLabel->TabIndex = 0;
				this->IntroLabel->Text = L"Welcome To Our Trivia Game";
				// 
				// IntroPanel
				// 
				this->IntroPanel->Controls->Add(this->introPanelWarningLabel);
				this->IntroPanel->Controls->Add(this->IntroLabel);
				this->IntroPanel->Controls->Add(this->playButton);
				this->IntroPanel->Location = System::Drawing::Point(12, 12);
				this->IntroPanel->Name = L"IntroPanel";
				this->IntroPanel->Size = System::Drawing::Size(760, 537);
				this->IntroPanel->TabIndex = 4;
				// 
				// introPanelWarningLabel
				// 
				this->introPanelWarningLabel->AutoSize = true;
				this->introPanelWarningLabel->Location = System::Drawing::Point(271, 521);
				this->introPanelWarningLabel->Name = L"introPanelWarningLabel";
				this->introPanelWarningLabel->Size = System::Drawing::Size(240, 13);
				this->introPanelWarningLabel->TabIndex = 2;
				this->introPanelWarningLabel->Text = L"This game requires an active internet connection!\r\n";
				// 
				// OptionsPanel
				// 
				this->OptionsPanel->Controls->Add(this->categoryErrorLabel);
				this->OptionsPanel->Controls->Add(this->nameErrorLabel);
				this->OptionsPanel->Controls->Add(this->beginButton);
				this->OptionsPanel->Controls->Add(this->categoriesGroupBox);
				this->OptionsPanel->Controls->Add(this->questionsGroupBox);
				this->OptionsPanel->Controls->Add(this->difficultyGroupBox);
				this->OptionsPanel->Controls->Add(this->enterNameLabel);
				this->OptionsPanel->Controls->Add(this->nameTextBox);
				this->OptionsPanel->Enabled = false;
				this->OptionsPanel->Location = System::Drawing::Point(12, 12);
				this->OptionsPanel->Name = L"OptionsPanel";
				this->OptionsPanel->Size = System::Drawing::Size(760, 537);
				this->OptionsPanel->TabIndex = 5;
				this->OptionsPanel->Visible = false;
				// 
				// categoryErrorLabel
				// 
				this->categoryErrorLabel->AutoSize = true;
				this->categoryErrorLabel->ForeColor = System::Drawing::Color::Red;
				this->categoryErrorLabel->Location = System::Drawing::Point(96, 197);
				this->categoryErrorLabel->Name = L"categoryErrorLabel";
				this->categoryErrorLabel->Size = System::Drawing::Size(132, 13);
				this->categoryErrorLabel->TabIndex = 11;
				this->categoryErrorLabel->Text = L"Please Choose a Category";
				this->categoryErrorLabel->Visible = false;
				// 
				// nameErrorLabel
				// 
				this->nameErrorLabel->AutoSize = true;
				this->nameErrorLabel->ForeColor = System::Drawing::Color::Red;
				this->nameErrorLabel->Location = System::Drawing::Point(319, 64);
				this->nameErrorLabel->Name = L"nameErrorLabel";
				this->nameErrorLabel->Size = System::Drawing::Size(123, 13);
				this->nameErrorLabel->TabIndex = 10;
				this->nameErrorLabel->Text = L"Please Enter Your Name";
				this->nameErrorLabel->Visible = false;
				// 
				// beginButton
				// 
				this->beginButton->Location = System::Drawing::Point(307, 506);
				this->beginButton->Name = L"beginButton";
				this->beginButton->Size = System::Drawing::Size(146, 23);
				this->beginButton->TabIndex = 9;
				this->beginButton->Text = L"Begin!";
				this->beginButton->UseVisualStyleBackColor = true;
				this->beginButton->Click += gcnew System::EventHandler(this, &MyForm::beginButton_Click);
				// 
				// categoriesGroupBox
				// 
				this->categoriesGroupBox->Controls->Add(this->vehiclesCheckBox);
				this->categoriesGroupBox->Controls->Add(this->filmCheckBox);
				this->categoriesGroupBox->Controls->Add(this->scienceCheckBox);
				this->categoriesGroupBox->Controls->Add(this->historyCheckBox);
				this->categoriesGroupBox->Controls->Add(this->animalsCheckBox);
				this->categoriesGroupBox->Controls->Add(this->teleCheckBox);
				this->categoriesGroupBox->Controls->Add(this->musicCheckBox);
				this->categoriesGroupBox->Controls->Add(this->gkCheckBox);
				this->categoriesGroupBox->Controls->Add(this->geoCheckBox);
				this->categoriesGroupBox->Controls->Add(this->sportsCheckBox);
				this->categoriesGroupBox->Controls->Add(this->vgCheckBox);
				this->categoriesGroupBox->Controls->Add(this->allCheckBox);
				this->categoriesGroupBox->Location = System::Drawing::Point(89, 213);
				this->categoriesGroupBox->Name = L"categoriesGroupBox";
				this->categoriesGroupBox->Size = System::Drawing::Size(582, 144);
				this->categoriesGroupBox->TabIndex = 8;
				this->categoriesGroupBox->TabStop = false;
				this->categoriesGroupBox->Text = L"Categories";
				// 
				// vehiclesCheckBox
				// 
				this->vehiclesCheckBox->AutoSize = true;
				this->vehiclesCheckBox->Location = System::Drawing::Point(414, 106);
				this->vehiclesCheckBox->Name = L"vehiclesCheckBox";
				this->vehiclesCheckBox->Size = System::Drawing::Size(66, 17);
				this->vehiclesCheckBox->TabIndex = 11;
				this->vehiclesCheckBox->Text = L"Vehicles";
				this->vehiclesCheckBox->UseVisualStyleBackColor = true;
				// 
				// filmCheckBox
				// 
				this->filmCheckBox->AutoSize = true;
				this->filmCheckBox->Location = System::Drawing::Point(274, 106);
				this->filmCheckBox->Name = L"filmCheckBox";
				this->filmCheckBox->Size = System::Drawing::Size(44, 17);
				this->filmCheckBox->TabIndex = 10;
				this->filmCheckBox->Text = L"Film";
				this->filmCheckBox->UseVisualStyleBackColor = true;
				// 
				// scienceCheckBox
				// 
				this->scienceCheckBox->AutoSize = true;
				this->scienceCheckBox->Location = System::Drawing::Point(129, 106);
				this->scienceCheckBox->Name = L"scienceCheckBox";
				this->scienceCheckBox->Size = System::Drawing::Size(65, 17);
				this->scienceCheckBox->TabIndex = 9;
				this->scienceCheckBox->Text = L"Science";
				this->scienceCheckBox->UseVisualStyleBackColor = true;
				// 
				// historyCheckBox
				// 
				this->historyCheckBox->AutoSize = true;
				this->historyCheckBox->Location = System::Drawing::Point(21, 106);
				this->historyCheckBox->Name = L"historyCheckBox";
				this->historyCheckBox->Size = System::Drawing::Size(58, 17);
				this->historyCheckBox->TabIndex = 8;
				this->historyCheckBox->Text = L"History";
				this->historyCheckBox->UseVisualStyleBackColor = true;
				// 
				// animalsCheckBox
				// 
				this->animalsCheckBox->AutoSize = true;
				this->animalsCheckBox->Location = System::Drawing::Point(274, 65);
				this->animalsCheckBox->Name = L"animalsCheckBox";
				this->animalsCheckBox->Size = System::Drawing::Size(62, 17);
				this->animalsCheckBox->TabIndex = 7;
				this->animalsCheckBox->Text = L"Animals";
				this->animalsCheckBox->UseVisualStyleBackColor = true;
				// 
				// teleCheckBox
				// 
				this->teleCheckBox->AutoSize = true;
				this->teleCheckBox->Location = System::Drawing::Point(129, 65);
				this->teleCheckBox->Name = L"teleCheckBox";
				this->teleCheckBox->Size = System::Drawing::Size(74, 17);
				this->teleCheckBox->TabIndex = 6;
				this->teleCheckBox->Text = L"Television";
				this->teleCheckBox->UseVisualStyleBackColor = true;
				// 
				// musicCheckBox
				// 
				this->musicCheckBox->AutoSize = true;
				this->musicCheckBox->Location = System::Drawing::Point(21, 65);
				this->musicCheckBox->Name = L"musicCheckBox";
				this->musicCheckBox->Size = System::Drawing::Size(54, 17);
				this->musicCheckBox->TabIndex = 5;
				this->musicCheckBox->Text = L"Music";
				this->musicCheckBox->UseVisualStyleBackColor = true;
				// 
				// gkCheckBox
				// 
				this->gkCheckBox->AutoSize = true;
				this->gkCheckBox->Location = System::Drawing::Point(414, 65);
				this->gkCheckBox->Name = L"gkCheckBox";
				this->gkCheckBox->Size = System::Drawing::Size(119, 17);
				this->gkCheckBox->TabIndex = 4;
				this->gkCheckBox->Text = L"General Knowledge";
				this->gkCheckBox->UseVisualStyleBackColor = true;
				// 
				// geoCheckBox
				// 
				this->geoCheckBox->AutoSize = true;
				this->geoCheckBox->Location = System::Drawing::Point(414, 29);
				this->geoCheckBox->Name = L"geoCheckBox";
				this->geoCheckBox->Size = System::Drawing::Size(78, 17);
				this->geoCheckBox->TabIndex = 3;
				this->geoCheckBox->Text = L"Geography";
				this->geoCheckBox->UseVisualStyleBackColor = true;
				// 
				// sportsCheckBox
				// 
				this->sportsCheckBox->AutoSize = true;
				this->sportsCheckBox->Location = System::Drawing::Point(274, 29);
				this->sportsCheckBox->Name = L"sportsCheckBox";
				this->sportsCheckBox->Size = System::Drawing::Size(56, 17);
				this->sportsCheckBox->TabIndex = 2;
				this->sportsCheckBox->Text = L"Sports";
				this->sportsCheckBox->UseVisualStyleBackColor = true;
				// 
				// vgCheckBox
				// 
				this->vgCheckBox->AutoSize = true;
				this->vgCheckBox->Location = System::Drawing::Point(129, 29);
				this->vgCheckBox->Name = L"vgCheckBox";
				this->vgCheckBox->Size = System::Drawing::Size(89, 17);
				this->vgCheckBox->TabIndex = 1;
				this->vgCheckBox->Text = L"Video Games";
				this->vgCheckBox->UseVisualStyleBackColor = true;
				// 
				// allCheckBox
				// 
				this->allCheckBox->AutoSize = true;
				this->allCheckBox->Location = System::Drawing::Point(21, 29);
				this->allCheckBox->Name = L"allCheckBox";
				this->allCheckBox->Size = System::Drawing::Size(37, 17);
				this->allCheckBox->TabIndex = 0;
				this->allCheckBox->Text = L"All";
				this->allCheckBox->UseVisualStyleBackColor = true;
				this->allCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
				// 
				// questionsGroupBox
				// 
				this->questionsGroupBox->Controls->Add(this->multipleChoiceRadioButton);
				this->questionsGroupBox->Controls->Add(this->trueFalseRadioButton);
				this->questionsGroupBox->Controls->Add(this->anyQuestionRadioButton);
				this->questionsGroupBox->Location = System::Drawing::Point(89, 384);
				this->questionsGroupBox->Name = L"questionsGroupBox";
				this->questionsGroupBox->Size = System::Drawing::Size(582, 103);
				this->questionsGroupBox->TabIndex = 7;
				this->questionsGroupBox->TabStop = false;
				this->questionsGroupBox->Text = L"Type Of Questions";
				// 
				// multipleChoiceRadioButton
				// 
				this->multipleChoiceRadioButton->AutoSize = true;
				this->multipleChoiceRadioButton->Location = System::Drawing::Point(129, 44);
				this->multipleChoiceRadioButton->Name = L"multipleChoiceRadioButton";
				this->multipleChoiceRadioButton->Size = System::Drawing::Size(97, 17);
				this->multipleChoiceRadioButton->TabIndex = 2;
				this->multipleChoiceRadioButton->Text = L"Multiple Choice";
				this->multipleChoiceRadioButton->UseVisualStyleBackColor = true;
				// 
				// trueFalseRadioButton
				// 
				this->trueFalseRadioButton->AutoSize = true;
				this->trueFalseRadioButton->Location = System::Drawing::Point(274, 44);
				this->trueFalseRadioButton->Name = L"trueFalseRadioButton";
				this->trueFalseRadioButton->Size = System::Drawing::Size(77, 17);
				this->trueFalseRadioButton->TabIndex = 1;
				this->trueFalseRadioButton->Text = L"True/False";
				this->trueFalseRadioButton->UseVisualStyleBackColor = true;
				// 
				// anyQuestionRadioButton
				// 
				this->anyQuestionRadioButton->AutoSize = true;
				this->anyQuestionRadioButton->Checked = true;
				this->anyQuestionRadioButton->Location = System::Drawing::Point(21, 44);
				this->anyQuestionRadioButton->Name = L"anyQuestionRadioButton";
				this->anyQuestionRadioButton->Size = System::Drawing::Size(43, 17);
				this->anyQuestionRadioButton->TabIndex = 0;
				this->anyQuestionRadioButton->TabStop = true;
				this->anyQuestionRadioButton->Text = L"Any";
				this->anyQuestionRadioButton->UseVisualStyleBackColor = true;
				// 
				// difficultyGroupBox
				// 
				this->difficultyGroupBox->Controls->Add(this->anyRadioButton);
				this->difficultyGroupBox->Controls->Add(this->hardRadioButton);
				this->difficultyGroupBox->Controls->Add(this->easyRadioButton);
				this->difficultyGroupBox->Controls->Add(this->mediumRadioButton);
				this->difficultyGroupBox->Location = System::Drawing::Point(89, 93);
				this->difficultyGroupBox->Name = L"difficultyGroupBox";
				this->difficultyGroupBox->Size = System::Drawing::Size(582, 97);
				this->difficultyGroupBox->TabIndex = 6;
				this->difficultyGroupBox->TabStop = false;
				this->difficultyGroupBox->Text = L"Enter Difficulty";
				// 
				// anyRadioButton
				// 
				this->anyRadioButton->AutoSize = true;
				this->anyRadioButton->Checked = true;
				this->anyRadioButton->Location = System::Drawing::Point(21, 41);
				this->anyRadioButton->Name = L"anyRadioButton";
				this->anyRadioButton->Size = System::Drawing::Size(43, 17);
				this->anyRadioButton->TabIndex = 2;
				this->anyRadioButton->TabStop = true;
				this->anyRadioButton->Text = L"Any";
				this->anyRadioButton->UseVisualStyleBackColor = true;
				// 
				// hardRadioButton
				// 
				this->hardRadioButton->AutoSize = true;
				this->hardRadioButton->Location = System::Drawing::Point(414, 41);
				this->hardRadioButton->Name = L"hardRadioButton";
				this->hardRadioButton->Size = System::Drawing::Size(48, 17);
				this->hardRadioButton->TabIndex = 5;
				this->hardRadioButton->Text = L"Hard";
				this->hardRadioButton->UseVisualStyleBackColor = true;
				// 
				// easyRadioButton
				// 
				this->easyRadioButton->AutoSize = true;
				this->easyRadioButton->Location = System::Drawing::Point(129, 41);
				this->easyRadioButton->Name = L"easyRadioButton";
				this->easyRadioButton->Size = System::Drawing::Size(48, 17);
				this->easyRadioButton->TabIndex = 3;
				this->easyRadioButton->Text = L"Easy";
				this->easyRadioButton->UseVisualStyleBackColor = true;
				// 
				// mediumRadioButton
				// 
				this->mediumRadioButton->AutoSize = true;
				this->mediumRadioButton->Location = System::Drawing::Point(274, 41);
				this->mediumRadioButton->Name = L"mediumRadioButton";
				this->mediumRadioButton->Size = System::Drawing::Size(62, 17);
				this->mediumRadioButton->TabIndex = 4;
				this->mediumRadioButton->Text = L"Medium";
				this->mediumRadioButton->UseVisualStyleBackColor = true;
				// 
				// enterNameLabel
				// 
				this->enterNameLabel->AutoSize = true;
				this->enterNameLabel->Location = System::Drawing::Point(323, 18);
				this->enterNameLabel->Name = L"enterNameLabel";
				this->enterNameLabel->Size = System::Drawing::Size(114, 13);
				this->enterNameLabel->TabIndex = 1;
				this->enterNameLabel->Text = L"Enter Your Name Here";
				// 
				// nameTextBox
				// 
				this->nameTextBox->Location = System::Drawing::Point(275, 34);
				this->nameTextBox->Name = L"nameTextBox";
				this->nameTextBox->Size = System::Drawing::Size(211, 20);
				this->nameTextBox->TabIndex = 0;
				this->nameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				// 
				// questionPanel
				// 
				this->questionPanel->Controls->Add(this->questionLabel);
				this->questionPanel->Controls->Add(this->answerButton4);
				this->questionPanel->Controls->Add(this->answerButton3);
				this->questionPanel->Controls->Add(this->answerButton2);
				this->questionPanel->Controls->Add(this->answerButton1);
				this->questionPanel->Enabled = false;
				this->questionPanel->Location = System::Drawing::Point(12, 12);
				this->questionPanel->Name = L"questionPanel";
				this->questionPanel->Size = System::Drawing::Size(760, 537);
				this->questionPanel->TabIndex = 6;
				this->questionPanel->Visible = false;
				// 
				// questionLabel
				// 
				this->questionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->questionLabel->Location = System::Drawing::Point(0, 0);
				this->questionLabel->Name = L"questionLabel";
				this->questionLabel->Size = System::Drawing::Size(773, 226);
				this->questionLabel->TabIndex = 0;
				this->questionLabel->Text = L"Question Goes Here";
				this->questionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// answerButton4
				// 
				this->answerButton4->Location = System::Drawing::Point(438, 397);
				this->answerButton4->Name = L"answerButton4";
				this->answerButton4->Size = System::Drawing::Size(209, 132);
				this->answerButton4->TabIndex = 4;
				this->answerButton4->TabStop = false;
				this->answerButton4->Text = L"Answer Goes here";
				this->answerButton4->UseVisualStyleBackColor = true;
				// 
				// answerButton3
				// 
				this->answerButton3->Location = System::Drawing::Point(126, 394);
				this->answerButton3->Name = L"answerButton3";
				this->answerButton3->Size = System::Drawing::Size(209, 138);
				this->answerButton3->TabIndex = 3;
				this->answerButton3->TabStop = false;
				this->answerButton3->Text = L"Answer Goes here";
				this->answerButton3->UseVisualStyleBackColor = true;
				// 
				// answerButton2
				// 
				this->answerButton2->Location = System::Drawing::Point(438, 240);
				this->answerButton2->Name = L"answerButton2";
				this->answerButton2->Size = System::Drawing::Size(209, 138);
				this->answerButton2->TabIndex = 2;
				this->answerButton2->TabStop = false;
				this->answerButton2->Text = L"Answer Goes here";
				this->answerButton2->UseVisualStyleBackColor = true;
				// 
				// answerButton1
				// 
				this->answerButton1->Location = System::Drawing::Point(126, 240);
				this->answerButton1->Name = L"answerButton1";
				this->answerButton1->Size = System::Drawing::Size(209, 139);
				this->answerButton1->TabIndex = 1;
				this->answerButton1->TabStop = false;
				this->answerButton1->Text = L"Answer Goes here";
				this->answerButton1->UseVisualStyleBackColor = true;
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(784, 561);
				this->Controls->Add(this->questionPanel);
				this->Controls->Add(this->OptionsPanel);
				this->Controls->Add(this->IntroPanel);
				this->Name = L"MyForm";
				this->Text = L"Trivia Game";
				this->IntroPanel->ResumeLayout(false);
				this->IntroPanel->PerformLayout();
				this->OptionsPanel->ResumeLayout(false);
				this->OptionsPanel->PerformLayout();
				this->categoriesGroupBox->ResumeLayout(false);
				this->categoriesGroupBox->PerformLayout();
				this->questionsGroupBox->ResumeLayout(false);
				this->questionsGroupBox->PerformLayout();
				this->difficultyGroupBox->ResumeLayout(false);
				this->difficultyGroupBox->PerformLayout();
				this->questionPanel->ResumeLayout(false);
				this->ResumeLayout(false);

			}
		#pragma endregion

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			IntroPanel->Hide();
			IntroPanel->Enabled = false;
			OptionsPanel->Enabled = true;
			OptionsPanel->Show();
		}

		private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			if (allCheckBox->Checked)
			{
				vgCheckBox->Enabled = false;
				sportsCheckBox->Enabled = false;
				geoCheckBox->Enabled = false;
				musicCheckBox->Enabled = false;
				teleCheckBox->Enabled = false;
				animalsCheckBox->Enabled = false;
				gkCheckBox->Enabled = false;
				historyCheckBox->Enabled = false;
				scienceCheckBox->Enabled = false;
				filmCheckBox->Enabled = false;
				vehiclesCheckBox->Enabled = false;

				vgCheckBox->Checked = false;
				sportsCheckBox->Checked = false;
				geoCheckBox->Checked = false;
				musicCheckBox->Checked = false;
				teleCheckBox->Checked = false;
				animalsCheckBox->Checked = false;
				gkCheckBox->Checked = false;
				historyCheckBox->Checked = false;
				scienceCheckBox->Checked = false;
				filmCheckBox->Checked = false;
				vehiclesCheckBox->Checked = false;

				
			}
			else
			{
				vgCheckBox->Enabled = true;
				sportsCheckBox->Enabled = true;
				geoCheckBox->Enabled = true;
				musicCheckBox->Enabled = true;
				teleCheckBox->Enabled = true;
				animalsCheckBox->Enabled = true;
				gkCheckBox->Enabled = true;
				historyCheckBox->Enabled = true;
				scienceCheckBox->Enabled = true;
				filmCheckBox->Enabled = true;
				vehiclesCheckBox->Enabled = true;
			}
			
		}
		private: System::Void beginButton_Click(System::Object^  sender, System::EventArgs^  e) {
			bool textField;
			bool category;

			if (System::String::IsNullOrEmpty(nameTextBox->Text))
			{
				nameErrorLabel->Visible = true;
				textField = false;
			}
			else
			{
				nameErrorLabel->Visible = false;
				textField = true;
			}

			if (allCheckBox->Checked || vgCheckBox->Checked || sportsCheckBox->Checked || geoCheckBox->Checked || musicCheckBox->Checked || teleCheckBox->Checked || 
				animalsCheckBox->Checked || gkCheckBox->Checked || historyCheckBox->Checked || scienceCheckBox->Checked || filmCheckBox->Checked || vehiclesCheckBox->Checked)
			{
				categoryErrorLabel->Visible = false;
				category = true;
			}
			else 
			{
				categoryErrorLabel->Visible = true;
				category = false;
			}

			if (textField && category)
			{
				OptionsPanel->Visible = false;
				OptionsPanel->Enabled = false;
				questionPanel->Enabled = true;
				questionPanel->Visible = true;
				concatString();
			}

		}
		private: System::Void concatString() {
			std::string str = "https://opentdb.com/api.php?amount=10";
			
			std::string diff;
			std::vector <std::string> category;
			std::string questionType;
			std::string sendMe;

			if (anyRadioButton->Checked)
			{
				diff = "";
			}
			else if (easyRadioButton->Checked) {
				diff = "&&&difficulty=easy";
			}
			else if (mediumRadioButton->Checked) {
				diff = "&&&difficulty=medium";
			}
			else if (hardRadioButton->Checked) {
				diff = "&&&difficulty=hard";
			}
			

			if (allCheckBox->Checked)
			{
				category.push_back("");
			}
			if (vgCheckBox->Checked)
			{
				category.push_back("&&&category=15");
			}
			if (sportsCheckBox->Checked)
			{
				category.push_back("&&&category=21");
			}
			if (geoCheckBox->Checked)
			{
				category.push_back("&&&category=22");
			}
			if (musicCheckBox->Checked)
			{
				category.push_back("&&&category=12");
			}
			if (teleCheckBox->Checked)
			{
				category.push_back("&&&category=14");
			}
			if (animalsCheckBox->Checked)
			{
				category.push_back("&&&category=27");
			}
			if (gkCheckBox->Checked)
			{
				category.push_back("&&&category=9");
			}
			if (historyCheckBox->Checked)
			{
				category.push_back("&&&category=23");
			}
			if (scienceCheckBox->Checked)
			{
				category.push_back("&&&category=18");
			}
			if (filmCheckBox->Checked)
			{
				category.push_back("&&&category=11");
			}
			if (vehiclesCheckBox->Checked)
			{
				category.push_back("&&&category=28");
			}

			if (anyQuestionRadioButton->Checked) {
				questionType = "";
			}
			else if (multipleChoiceRadioButton->Checked)
			{
				questionType = "&&&type=multiple";
			}
			else if (trueFalseRadioButton->Checked)
			{
				questionType = "&&&type=boolean";
			}


			/*for (int i = 0; i < category.size; i++)
			{
				sendMe = str + category[i] + diff + questionType;
				//send off to internet
			}*/

			str = str + category[0] + diff + questionType;

			System::String ^ url = gcnew System::String(str.c_str());
			questionLabel->Text = url;

		}
};


	}
