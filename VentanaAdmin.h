#pragma once

namespace SistemaTrenes3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class VentanaAdmin : public System::Windows::Forms::Form
	{
	public:
		VentanaAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TabPage^ tabPage15;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage16;
	private: System::Windows::Forms::TabPage^ tabPage17;
	private: System::Windows::Forms::TabPage^ tabPage18;
	private: System::Windows::Forms::TabPage^ tabPage19;
	private: System::Windows::Forms::TabPage^ tabPage20;
	private: System::Windows::Forms::TabPage^ tabPage21;
	private: System::Windows::Forms::TabControl^ tabControl5;
	private: System::Windows::Forms::TabPage^ tabPage22;
	private: System::Windows::Forms::TabPage^ tabPage23;
	private: System::Windows::Forms::TabPage^ tabPage24;
	private: System::Windows::Forms::TabPage^ tabPage25;
	private: System::Windows::Forms::TabPage^ tabPage26;
	private: System::Windows::Forms::TabPage^ tabPage27;
	private: System::Windows::Forms::TabControl^ tabControl6;
	private: System::Windows::Forms::TabPage^ tabPage28;
	private: System::Windows::Forms::TabPage^ tabPage29;
	private: System::Windows::Forms::TabPage^ tabPage30;
	private: System::Windows::Forms::TabPage^ tabPage31;
	private: System::Windows::Forms::TabControl^ tabControl7;
	private: System::Windows::Forms::TabPage^ tabPage32;
	private: System::Windows::Forms::TabPage^ tabPage33;
	private: System::Windows::Forms::TabPage^ tabPage34;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaAdmin::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage28 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage29 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage30 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage31 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl7 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage32 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage33 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage34 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage13->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage31->SuspendLayout();
			this->tabControl7->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage31);
			this->tabControl1->Location = System::Drawing::Point(2, 8);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1089, 683);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1081, 657);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Inicio";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1081, 657);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Inserciones";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Controls->Add(this->tabPage13);
			this->tabControl3->Controls->Add(this->tabPage14);
			this->tabControl3->Controls->Add(this->tabPage15);
			this->tabControl3->Location = System::Drawing::Point(2, 2);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(1079, 659);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage9
			// 
			this->tabPage9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage9.BackgroundImage")));
			this->tabPage9->Controls->Add(this->button1);
			this->tabPage9->Controls->Add(this->textBox2);
			this->tabPage9->Controls->Add(this->label5);
			this->tabPage9->Controls->Add(this->textBox1);
			this->tabPage9->Controls->Add(this->label4);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1071, 633);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"País";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tabPage10
			// 
			this->tabPage10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage10.BackgroundImage")));
			this->tabPage10->Controls->Add(this->button2);
			this->tabPage10->Controls->Add(this->textBox5);
			this->tabPage10->Controls->Add(this->textBox4);
			this->tabPage10->Controls->Add(this->textBox3);
			this->tabPage10->Controls->Add(this->label8);
			this->tabPage10->Controls->Add(this->label7);
			this->tabPage10->Controls->Add(this->label6);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1071, 633);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Ciudad";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage11.BackgroundImage")));
			this->tabPage11->Controls->Add(this->button3);
			this->tabPage11->Controls->Add(this->textBox9);
			this->tabPage11->Controls->Add(this->textBox8);
			this->tabPage11->Controls->Add(this->textBox7);
			this->tabPage11->Controls->Add(this->textBox6);
			this->tabPage11->Controls->Add(this->label12);
			this->tabPage11->Controls->Add(this->label11);
			this->tabPage11->Controls->Add(this->label10);
			this->tabPage11->Controls->Add(this->label9);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1071, 633);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Conexión";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// tabPage12
			// 
			this->tabPage12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage12.BackgroundImage")));
			this->tabPage12->Controls->Add(this->button4);
			this->tabPage12->Controls->Add(this->textBox11);
			this->tabPage12->Controls->Add(this->textBox10);
			this->tabPage12->Controls->Add(this->label14);
			this->tabPage12->Controls->Add(this->label13);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1071, 633);
			this->tabPage12->TabIndex = 3;
			this->tabPage12->Text = L"Tipo de tren";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// tabPage13
			// 
			this->tabPage13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage13.BackgroundImage")));
			this->tabPage13->Controls->Add(this->label19);
			this->tabPage13->Controls->Add(this->label18);
			this->tabPage13->Controls->Add(this->label17);
			this->tabPage13->Controls->Add(this->label16);
			this->tabPage13->Controls->Add(this->label15);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(1071, 633);
			this->tabPage13->TabIndex = 4;
			this->tabPage13->Text = L"Ruta";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage14.BackgroundImage")));
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(1071, 633);
			this->tabPage14->TabIndex = 5;
			this->tabPage14->Text = L"Tren";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage15
			// 
			this->tabPage15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage15.BackgroundImage")));
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(1071, 633);
			this->tabPage15->TabIndex = 6;
			this->tabPage15->Text = L"Registros";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1081, 657);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Modificaciones";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage16);
			this->tabControl4->Controls->Add(this->tabPage17);
			this->tabControl4->Controls->Add(this->tabPage18);
			this->tabControl4->Controls->Add(this->tabPage19);
			this->tabControl4->Controls->Add(this->tabPage20);
			this->tabControl4->Controls->Add(this->tabPage21);
			this->tabControl4->Location = System::Drawing::Point(0, 0);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(1081, 661);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage16
			// 
			this->tabPage16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage16.BackgroundImage")));
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(1073, 635);
			this->tabPage16->TabIndex = 0;
			this->tabPage16->Text = L"Precio";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// tabPage17
			// 
			this->tabPage17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage17.BackgroundImage")));
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Padding = System::Windows::Forms::Padding(3);
			this->tabPage17->Size = System::Drawing::Size(1073, 635);
			this->tabPage17->TabIndex = 1;
			this->tabPage17->Text = L"Tiempo";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// tabPage18
			// 
			this->tabPage18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage18.BackgroundImage")));
			this->tabPage18->Location = System::Drawing::Point(4, 22);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(1073, 635);
			this->tabPage18->TabIndex = 2;
			this->tabPage18->Text = L"Numero de asientos";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// tabPage19
			// 
			this->tabPage19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage19.BackgroundImage")));
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(1073, 635);
			this->tabPage19->TabIndex = 3;
			this->tabPage19->Text = L"Ruta";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// tabPage20
			// 
			this->tabPage20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage20.BackgroundImage")));
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(1073, 635);
			this->tabPage20->TabIndex = 4;
			this->tabPage20->Text = L"Tren";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// tabPage21
			// 
			this->tabPage21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage21.BackgroundImage")));
			this->tabPage21->Location = System::Drawing::Point(4, 22);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Padding = System::Windows::Forms::Padding(3);
			this->tabPage21->Size = System::Drawing::Size(1073, 635);
			this->tabPage21->TabIndex = 5;
			this->tabPage21->Text = L"Estado migratorio";
			this->tabPage21->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1081, 657);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Eliminaciones";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage22);
			this->tabControl5->Controls->Add(this->tabPage23);
			this->tabControl5->Controls->Add(this->tabPage24);
			this->tabControl5->Controls->Add(this->tabPage25);
			this->tabControl5->Controls->Add(this->tabPage26);
			this->tabControl5->Location = System::Drawing::Point(0, 0);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(1081, 657);
			this->tabControl5->TabIndex = 0;
			// 
			// tabPage22
			// 
			this->tabPage22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage22.BackgroundImage")));
			this->tabPage22->Location = System::Drawing::Point(4, 22);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Padding = System::Windows::Forms::Padding(3);
			this->tabPage22->Size = System::Drawing::Size(1073, 631);
			this->tabPage22->TabIndex = 0;
			this->tabPage22->Text = L"País";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// tabPage23
			// 
			this->tabPage23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage23.BackgroundImage")));
			this->tabPage23->Location = System::Drawing::Point(4, 22);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Padding = System::Windows::Forms::Padding(3);
			this->tabPage23->Size = System::Drawing::Size(1073, 631);
			this->tabPage23->TabIndex = 1;
			this->tabPage23->Text = L"Ciudad";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// tabPage24
			// 
			this->tabPage24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage24.BackgroundImage")));
			this->tabPage24->Location = System::Drawing::Point(4, 22);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Padding = System::Windows::Forms::Padding(3);
			this->tabPage24->Size = System::Drawing::Size(1073, 631);
			this->tabPage24->TabIndex = 2;
			this->tabPage24->Text = L"Conexiones";
			this->tabPage24->UseVisualStyleBackColor = true;
			// 
			// tabPage25
			// 
			this->tabPage25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage25.BackgroundImage")));
			this->tabPage25->Location = System::Drawing::Point(4, 22);
			this->tabPage25->Name = L"tabPage25";
			this->tabPage25->Padding = System::Windows::Forms::Padding(3);
			this->tabPage25->Size = System::Drawing::Size(1073, 631);
			this->tabPage25->TabIndex = 3;
			this->tabPage25->Text = L"Tren";
			this->tabPage25->UseVisualStyleBackColor = true;
			// 
			// tabPage26
			// 
			this->tabPage26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage26.BackgroundImage")));
			this->tabPage26->Location = System::Drawing::Point(4, 22);
			this->tabPage26->Name = L"tabPage26";
			this->tabPage26->Padding = System::Windows::Forms::Padding(3);
			this->tabPage26->Size = System::Drawing::Size(1073, 631);
			this->tabPage26->TabIndex = 4;
			this->tabPage26->Text = L"Ruta";
			this->tabPage26->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->tabControl2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1081, 657);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Consultas";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage27);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1078, 654);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage7.BackgroundImage")));
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1070, 628);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Paises-Ciudades-Conexiones";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage8.BackgroundImage")));
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1070, 628);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Trenes";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// tabPage27
			// 
			this->tabPage27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage27.BackgroundImage")));
			this->tabPage27->Location = System::Drawing::Point(4, 22);
			this->tabPage27->Name = L"tabPage27";
			this->tabPage27->Padding = System::Windows::Forms::Padding(3);
			this->tabPage27->Size = System::Drawing::Size(1070, 628);
			this->tabPage27->TabIndex = 2;
			this->tabPage27->Text = L"Rutas";
			this->tabPage27->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tabControl6);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1081, 657);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Reportes";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabPage28);
			this->tabControl6->Controls->Add(this->tabPage29);
			this->tabControl6->Controls->Add(this->tabPage30);
			this->tabControl6->Location = System::Drawing::Point(3, 3);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(1082, 658);
			this->tabControl6->TabIndex = 0;
			// 
			// tabPage28
			// 
			this->tabPage28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage28.BackgroundImage")));
			this->tabPage28->Location = System::Drawing::Point(4, 22);
			this->tabPage28->Name = L"tabPage28";
			this->tabPage28->Padding = System::Windows::Forms::Padding(3);
			this->tabPage28->Size = System::Drawing::Size(1074, 632);
			this->tabPage28->TabIndex = 0;
			this->tabPage28->Text = L"País";
			this->tabPage28->UseVisualStyleBackColor = true;
			// 
			// tabPage29
			// 
			this->tabPage29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage29.BackgroundImage")));
			this->tabPage29->Location = System::Drawing::Point(4, 22);
			this->tabPage29->Name = L"tabPage29";
			this->tabPage29->Padding = System::Windows::Forms::Padding(3);
			this->tabPage29->Size = System::Drawing::Size(1074, 632);
			this->tabPage29->TabIndex = 1;
			this->tabPage29->Text = L"Usuario";
			this->tabPage29->UseVisualStyleBackColor = true;
			// 
			// tabPage30
			// 
			this->tabPage30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage30.BackgroundImage")));
			this->tabPage30->Location = System::Drawing::Point(4, 22);
			this->tabPage30->Name = L"tabPage30";
			this->tabPage30->Padding = System::Windows::Forms::Padding(3);
			this->tabPage30->Size = System::Drawing::Size(1074, 632);
			this->tabPage30->TabIndex = 2;
			this->tabPage30->Text = L"Tren";
			this->tabPage30->UseVisualStyleBackColor = true;
			// 
			// tabPage31
			// 
			this->tabPage31->Controls->Add(this->tabControl7);
			this->tabPage31->Location = System::Drawing::Point(4, 22);
			this->tabPage31->Name = L"tabPage31";
			this->tabPage31->Padding = System::Windows::Forms::Padding(3);
			this->tabPage31->Size = System::Drawing::Size(1081, 657);
			this->tabPage31->TabIndex = 6;
			this->tabPage31->Text = L"Reservacion";
			this->tabPage31->UseVisualStyleBackColor = true;
			// 
			// tabControl7
			// 
			this->tabControl7->Controls->Add(this->tabPage32);
			this->tabControl7->Controls->Add(this->tabPage33);
			this->tabControl7->Controls->Add(this->tabPage34);
			this->tabControl7->Location = System::Drawing::Point(3, 3);
			this->tabControl7->Name = L"tabControl7";
			this->tabControl7->SelectedIndex = 0;
			this->tabControl7->Size = System::Drawing::Size(1078, 651);
			this->tabControl7->TabIndex = 0;
			// 
			// tabPage32
			// 
			this->tabPage32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage32.BackgroundImage")));
			this->tabPage32->Location = System::Drawing::Point(4, 22);
			this->tabPage32->Name = L"tabPage32";
			this->tabPage32->Padding = System::Windows::Forms::Padding(3);
			this->tabPage32->Size = System::Drawing::Size(1070, 625);
			this->tabPage32->TabIndex = 0;
			this->tabPage32->Text = L"Abrir Ventanilla";
			this->tabPage32->UseVisualStyleBackColor = true;
			// 
			// tabPage33
			// 
			this->tabPage33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage33.BackgroundImage")));
			this->tabPage33->Location = System::Drawing::Point(4, 22);
			this->tabPage33->Name = L"tabPage33";
			this->tabPage33->Padding = System::Windows::Forms::Padding(3);
			this->tabPage33->Size = System::Drawing::Size(1070, 625);
			this->tabPage33->TabIndex = 1;
			this->tabPage33->Text = L"Venta de Tiquetes";
			this->tabPage33->UseVisualStyleBackColor = true;
			// 
			// tabPage34
			// 
			this->tabPage34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage34.BackgroundImage")));
			this->tabPage34->Location = System::Drawing::Point(4, 22);
			this->tabPage34->Name = L"tabPage34";
			this->tabPage34->Padding = System::Windows::Forms::Padding(3);
			this->tabPage34->Size = System::Drawing::Size(1070, 625);
			this->tabPage34->TabIndex = 2;
			this->tabPage34->Text = L"Reservacion";
			this->tabPage34->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 60));
			this->label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->label1->Location = System::Drawing::Point(650, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 87);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Forte", 48));
			this->label2->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label2->Location = System::Drawing::Point(635, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(428, 70);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Administrador";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkCyan;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Beige;
			this->label3->Location = System::Drawing::Point(16, 518);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(329, 108);
			this->label3->TabIndex = 2;
			this->label3->Text = L"En las siguientes pestañas podrás\r\nutilizar todas las funciones de \r\nadministrado"
				L"r con las que se \r\nmodificara la base de datos.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkCyan;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Beige;
			this->label4->Location = System::Drawing::Point(30, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 23);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ingrese el codigo del país:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(34, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 32);
			this->textBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DarkCyan;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Beige;
			this->label5->Location = System::Drawing::Point(30, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 23);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Ingrese el nombre del país:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(38, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 32);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Beige;
			this->button1->Location = System::Drawing::Point(32, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Insertar país";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::DarkCyan;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Beige;
			this->label6->Location = System::Drawing::Point(25, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ingrese el codigo del país:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::DarkCyan;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Beige;
			this->label7->Location = System::Drawing::Point(25, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ingrese el codigo de la ciudad:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::DarkCyan;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Beige;
			this->label8->Location = System::Drawing::Point(19, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(267, 23);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ingrese el nombre de la ciudad:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(33, 53);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 32);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(33, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 32);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(33, 238);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 32);
			this->textBox5->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.75F));
			this->button2->ForeColor = System::Drawing::Color::Beige;
			this->button2->Location = System::Drawing::Point(33, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 49);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Insertar ciudad";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkCyan;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Beige;
			this->label9->Location = System::Drawing::Point(30, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(224, 23);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Ingrese el codigo de país: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::DarkCyan;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Beige;
			this->label10->Location = System::Drawing::Point(30, 108);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(241, 23);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Ingrese el codigo de ciudad:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::DarkCyan;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Beige;
			this->label11->Location = System::Drawing::Point(30, 194);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(267, 23);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Ingrese el codigo de  conexión:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::DarkCyan;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Beige;
			this->label12->Location = System::Drawing::Point(30, 283);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(288, 23);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Ingrese el nombre de la conexión:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(34, 60);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(193, 32);
			this->textBox6->TabIndex = 4;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(34, 146);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(193, 32);
			this->textBox7->TabIndex = 5;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(32, 233);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(193, 32);
			this->textBox8->TabIndex = 6;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(34, 322);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(193, 32);
			this->textBox9->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkCyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Beige;
			this->button3->Location = System::Drawing::Point(34, 398);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(248, 49);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Insertar Conexión";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::DarkCyan;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Beige;
			this->label13->Location = System::Drawing::Point(46, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(256, 23);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Ingrese el codigo de tipo tren:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::DarkCyan;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Beige;
			this->label14->Location = System::Drawing::Point(46, 117);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(292, 23);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Ingrese el nombre del tipo de tren:";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(50, 71);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(197, 32);
			this->textBox10->TabIndex = 2;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(50, 152);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(197, 32);
			this->textBox11->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkCyan;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Beige;
			this->button4->Location = System::Drawing::Point(50, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(207, 37);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Ingresar tipo de tren";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::DarkCyan;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Beige;
			this->label15->Location = System::Drawing::Point(38, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(280, 23);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Ingrese el codigo de tipo de tren:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::DarkCyan;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Beige;
			this->label16->Location = System::Drawing::Point(38, 110);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(218, 23);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Ingrese el codigo de tren:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::DarkCyan;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Beige;
			this->label17->Location = System::Drawing::Point(38, 175);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(219, 23);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Ingrese el codigo de ruta:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::DarkCyan;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Beige;
			this->label18->Location = System::Drawing::Point(39, 239);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(262, 23);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Ingrese el codigo de conexión:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::DarkCyan;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Beige;
			this->label19->Location = System::Drawing::Point(39, 302);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(239, 23);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Ingrese el precio de la ruta: ";
			// 
			// VentanaAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1089, 690);
			this->Controls->Add(this->tabControl1);
			this->Name = L"VentanaAdmin";
			this->Text = L"Administrador";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage31->ResumeLayout(false);
			this->tabControl7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
