#pragma once
#include "Client.h"
#include "Protocole\StructTypeMessage.h"
#include "Protocole\Protocole.h"



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Client^ cl)
		{
			InitializeComponent();
			_cl = cl;
			
			//listTMsg = ltm;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		Client^ _cl;
		Protocole^ p = Protocole::getProtocole();
		TypeMessage^ _TM = gcnew TypeMessage();
		Boolean acces = false;
		


		//List<TypeMessage^>^ listTMsg;
	private: System::Windows::Forms::Timer^  timerUpdate;
	private: System::Windows::Forms::GroupBox^  gbRFID;
	private: System::Windows::Forms::TextBox^  tbRFID;
	private: System::Windows::Forms::GroupBox^  gbRsRFID;
	private: System::Windows::Forms::TextBox^  tbRetourSrv;

	private: System::Windows::Forms::Button^  btSendRFID;
	private: System::Windows::Forms::GroupBox^  gbDechet;
	private: System::Windows::Forms::Button^  btD4;
	private: System::Windows::Forms::Button^  btD3;
	private: System::Windows::Forms::Button^  btD2;
	private: System::Windows::Forms::Button^  btD1;
	private: System::Windows::Forms::GroupBox^  gbPhoto;
	private: System::Windows::Forms::CheckBox^  cbS4;

	private: System::Windows::Forms::CheckBox^  cbS3;

	private: System::Windows::Forms::CheckBox^  cbS2;

	private: System::Windows::Forms::CheckBox^  cbS1;





	protected:
		Boolean stateCl = false;
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	protected:

	private: System::Windows::Forms::GroupBox^  gBConnection;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::TextBox^  tbIP;
	private: System::Windows::Forms::Label^  state;
	private: System::Windows::Forms::NumericUpDown^  nUDPort;
	private: System::Windows::Forms::Button^  btConnect;
	private: System::ComponentModel::IContainer^  components;


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
			this->gBConnection = (gcnew System::Windows::Forms::GroupBox());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->tbIP = (gcnew System::Windows::Forms::TextBox());
			this->state = (gcnew System::Windows::Forms::Label());
			this->nUDPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->btConnect = (gcnew System::Windows::Forms::Button());
			this->timerUpdate = (gcnew System::Windows::Forms::Timer(this->components));
			this->gbRFID = (gcnew System::Windows::Forms::GroupBox());
			this->gbRsRFID = (gcnew System::Windows::Forms::GroupBox());
			this->tbRetourSrv = (gcnew System::Windows::Forms::TextBox());
			this->btSendRFID = (gcnew System::Windows::Forms::Button());
			this->tbRFID = (gcnew System::Windows::Forms::TextBox());
			this->gbDechet = (gcnew System::Windows::Forms::GroupBox());
			this->btD4 = (gcnew System::Windows::Forms::Button());
			this->btD3 = (gcnew System::Windows::Forms::Button());
			this->btD2 = (gcnew System::Windows::Forms::Button());
			this->btD1 = (gcnew System::Windows::Forms::Button());
			this->gbPhoto = (gcnew System::Windows::Forms::GroupBox());
			this->cbS4 = (gcnew System::Windows::Forms::CheckBox());
			this->cbS3 = (gcnew System::Windows::Forms::CheckBox());
			this->cbS2 = (gcnew System::Windows::Forms::CheckBox());
			this->cbS1 = (gcnew System::Windows::Forms::CheckBox());
			this->gBConnection->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUDPort))->BeginInit();
			this->gbRFID->SuspendLayout();
			this->gbRsRFID->SuspendLayout();
			this->gbDechet->SuspendLayout();
			this->gbPhoto->SuspendLayout();
			this->SuspendLayout();
			// 
			// gBConnection
			// 
			this->gBConnection->Controls->Add(this->l2);
			this->gBConnection->Controls->Add(this->l1);
			this->gBConnection->Controls->Add(this->tbIP);
			this->gBConnection->Controls->Add(this->state);
			this->gBConnection->Controls->Add(this->nUDPort);
			this->gBConnection->Controls->Add(this->btConnect);
			this->gBConnection->Location = System::Drawing::Point(12, 12);
			this->gBConnection->Name = L"gBConnection";
			this->gBConnection->Size = System::Drawing::Size(720, 100);
			this->gBConnection->TabIndex = 2;
			this->gBConnection->TabStop = false;
			this->gBConnection->Text = L"Connection";
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->Location = System::Drawing::Point(193, 20);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(26, 13);
			this->l2->TabIndex = 5;
			this->l2->Text = L"Port";
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Location = System::Drawing::Point(72, 20);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(17, 13);
			this->l1->TabIndex = 4;
			this->l1->Text = L"IP";
			// 
			// tbIP
			// 
			this->tbIP->Location = System::Drawing::Point(72, 38);
			this->tbIP->Name = L"tbIP";
			this->tbIP->Size = System::Drawing::Size(100, 20);
			this->tbIP->TabIndex = 3;
			this->tbIP->Text = L"127.0.0.1";
			// 
			// state
			// 
			this->state->AutoSize = true;
			this->state->BackColor = System::Drawing::Color::Red;
			this->state->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->state->ForeColor = System::Drawing::Color::White;
			this->state->Location = System::Drawing::Point(15, 38);
			this->state->Name = L"state";
			this->state->Size = System::Drawing::Size(41, 20);
			this->state->TabIndex = 2;
			this->state->Text = L"OFF";
			this->state->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nUDPort
			// 
			this->nUDPort->Location = System::Drawing::Point(193, 38);
			this->nUDPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65525, 0, 0, 0 });
			this->nUDPort->Name = L"nUDPort";
			this->nUDPort->Size = System::Drawing::Size(65, 20);
			this->nUDPort->TabIndex = 1;
			this->nUDPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2501, 0, 0, 0 });
			// 
			// btConnect
			// 
			this->btConnect->Location = System::Drawing::Point(279, 38);
			this->btConnect->Name = L"btConnect";
			this->btConnect->Size = System::Drawing::Size(75, 20);
			this->btConnect->TabIndex = 0;
			this->btConnect->Text = L"Connect";
			this->btConnect->UseVisualStyleBackColor = true;
			this->btConnect->Click += gcnew System::EventHandler(this, &MyForm::btConnect_Click);
			// 
			// timerUpdate
			// 
			this->timerUpdate->Enabled = true;
			this->timerUpdate->Interval = 500;
			this->timerUpdate->Tick += gcnew System::EventHandler(this, &MyForm::timerUpdate_Tick);
			// 
			// gbRFID
			// 
			this->gbRFID->Controls->Add(this->gbRsRFID);
			this->gbRFID->Controls->Add(this->btSendRFID);
			this->gbRFID->Controls->Add(this->tbRFID);
			this->gbRFID->Location = System::Drawing::Point(12, 119);
			this->gbRFID->Name = L"gbRFID";
			this->gbRFID->Size = System::Drawing::Size(210, 135);
			this->gbRFID->TabIndex = 3;
			this->gbRFID->TabStop = false;
			this->gbRFID->Text = L"Lecteur RFID";
			// 
			// gbRsRFID
			// 
			this->gbRsRFID->Controls->Add(this->tbRetourSrv);
			this->gbRsRFID->Location = System::Drawing::Point(6, 75);
			this->gbRsRFID->Name = L"gbRsRFID";
			this->gbRsRFID->Size = System::Drawing::Size(200, 48);
			this->gbRsRFID->TabIndex = 4;
			this->gbRsRFID->TabStop = false;
			this->gbRsRFID->Text = L"Retour Serveur";
			// 
			// tbRetourSrv
			// 
			this->tbRetourSrv->Location = System::Drawing::Point(6, 19);
			this->tbRetourSrv->Name = L"tbRetourSrv";
			this->tbRetourSrv->Size = System::Drawing::Size(188, 20);
			this->tbRetourSrv->TabIndex = 6;
			// 
			// btSendRFID
			// 
			this->btSendRFID->Location = System::Drawing::Point(107, 17);
			this->btSendRFID->Name = L"btSendRFID";
			this->btSendRFID->Size = System::Drawing::Size(93, 42);
			this->btSendRFID->TabIndex = 7;
			this->btSendRFID->Text = L"Demande d\'autorisation";
			this->btSendRFID->UseVisualStyleBackColor = true;
			this->btSendRFID->Click += gcnew System::EventHandler(this, &MyForm::btSendRFID_Click);
			// 
			// tbRFID
			// 
			this->tbRFID->Location = System::Drawing::Point(19, 29);
			this->tbRFID->MaxLength = 10;
			this->tbRFID->Name = L"tbRFID";
			this->tbRFID->Size = System::Drawing::Size(70, 20);
			this->tbRFID->TabIndex = 6;
			// 
			// gbDechet
			// 
			this->gbDechet->Controls->Add(this->btD4);
			this->gbDechet->Controls->Add(this->btD3);
			this->gbDechet->Controls->Add(this->btD2);
			this->gbDechet->Controls->Add(this->btD1);
			this->gbDechet->Enabled = false;
			this->gbDechet->Location = System::Drawing::Point(228, 119);
			this->gbDechet->Name = L"gbDechet";
			this->gbDechet->Size = System::Drawing::Size(504, 135);
			this->gbDechet->TabIndex = 4;
			this->gbDechet->TabStop = false;
			this->gbDechet->Text = L"Selection des dechets";
			// 
			// btD4
			// 
			this->btD4->Location = System::Drawing::Point(378, 17);
			this->btD4->Name = L"btD4";
			this->btD4->Size = System::Drawing::Size(118, 112);
			this->btD4->TabIndex = 3;
			this->btD4->Text = L"Dechet 4";
			this->btD4->UseVisualStyleBackColor = true;
			this->btD4->Click += gcnew System::EventHandler(this, &MyForm::btD4_Click);
			// 
			// btD3
			// 
			this->btD3->Location = System::Drawing::Point(254, 17);
			this->btD3->Name = L"btD3";
			this->btD3->Size = System::Drawing::Size(118, 112);
			this->btD3->TabIndex = 2;
			this->btD3->Text = L"Dechet 3";
			this->btD3->UseVisualStyleBackColor = true;
			this->btD3->Click += gcnew System::EventHandler(this, &MyForm::btD3_Click);
			// 
			// btD2
			// 
			this->btD2->Location = System::Drawing::Point(130, 17);
			this->btD2->Name = L"btD2";
			this->btD2->Size = System::Drawing::Size(118, 112);
			this->btD2->TabIndex = 1;
			this->btD2->Text = L"Dechet 2";
			this->btD2->UseVisualStyleBackColor = true;
			this->btD2->Click += gcnew System::EventHandler(this, &MyForm::btD2_Click);
			// 
			// btD1
			// 
			this->btD1->Location = System::Drawing::Point(6, 17);
			this->btD1->Name = L"btD1";
			this->btD1->Size = System::Drawing::Size(118, 112);
			this->btD1->TabIndex = 0;
			this->btD1->Text = L"Dechet 1";
			this->btD1->UseVisualStyleBackColor = true;
			this->btD1->Click += gcnew System::EventHandler(this, &MyForm::btD1_Click);
			// 
			// gbPhoto
			// 
			this->gbPhoto->Controls->Add(this->cbS4);
			this->gbPhoto->Controls->Add(this->cbS3);
			this->gbPhoto->Controls->Add(this->cbS2);
			this->gbPhoto->Controls->Add(this->cbS1);
			this->gbPhoto->Enabled = false;
			this->gbPhoto->Location = System::Drawing::Point(12, 261);
			this->gbPhoto->Name = L"gbPhoto";
			this->gbPhoto->Size = System::Drawing::Size(720, 275);
			this->gbPhoto->TabIndex = 5;
			this->gbPhoto->TabStop = false;
			this->gbPhoto->Text = L"Photo";
			// 
			// cbS4
			// 
			this->cbS4->AutoCheck = false;
			this->cbS4->AutoSize = true;
			this->cbS4->Location = System::Drawing::Point(19, 111);
			this->cbS4->Name = L"cbS4";
			this->cbS4->Size = System::Drawing::Size(126, 17);
			this->cbS4->TabIndex = 3;
			this->cbS4->Text = L"Finalisation de l\'envoi";
			this->cbS4->UseVisualStyleBackColor = true;
			// 
			// cbS3
			// 
			this->cbS3->AutoCheck = false;
			this->cbS3->AutoSize = true;
			this->cbS3->Location = System::Drawing::Point(19, 87);
			this->cbS3->Name = L"cbS3";
			this->cbS3->Size = System::Drawing::Size(53, 17);
			this->cbS3->TabIndex = 2;
			this->cbS3->Text = L"Envoi";
			this->cbS3->UseVisualStyleBackColor = true;
			// 
			// cbS2
			// 
			this->cbS2->AutoCheck = false;
			this->cbS2->AutoSize = true;
			this->cbS2->Location = System::Drawing::Point(19, 63);
			this->cbS2->Name = L"cbS2";
			this->cbS2->Size = System::Drawing::Size(128, 17);
			this->cbS2->TabIndex = 1;
			this->cbS2->Text = L"Initialisation de l\'envoi";
			this->cbS2->UseVisualStyleBackColor = true;
			// 
			// cbS1
			// 
			this->cbS1->AutoCheck = false;
			this->cbS1->AutoSize = true;
			this->cbS1->Location = System::Drawing::Point(19, 39);
			this->cbS1->Name = L"cbS1";
			this->cbS1->Size = System::Drawing::Size(179, 17);
			this->cbS1->TabIndex = 0;
			this->cbS1->TabStop = false;
			this->cbS1->Text = L"Demande de l\'envoi d\'une photo";
			this->cbS1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 548);
			this->Controls->Add(this->gbPhoto);
			this->Controls->Add(this->gbDechet);
			this->Controls->Add(this->gbRFID);
			this->Controls->Add(this->gBConnection);
			this->Name = L"MyForm";
			this->Text = L"Client RFID";
			this->gBConnection->ResumeLayout(false);
			this->gBConnection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUDPort))->EndInit();
			this->gbRFID->ResumeLayout(false);
			this->gbRFID->PerformLayout();
			this->gbRsRFID->ResumeLayout(false);
			this->gbRsRFID->PerformLayout();
			this->gbDechet->ResumeLayout(false);
			this->gbPhoto->ResumeLayout(false);
			this->gbPhoto->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			stateCl = _cl->Connect(IPAddress::Parse(tbIP->Text), (int)nUDPort->Value);
		}
		catch (Exception^e)
		{
		}

	}
	private: System::Void timerUpdate_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (stateCl)
		{
			state->Text = "ON";
			state->BackColor = Color::Lime;
			//gBConnection->Enabled = false;
		}
		else
		{
			state->Text = "OFF";
			state->BackColor = Color::Red;
			//gBConnection->Enabled = true;
		}
	}

	private: System::Void btSendRFID_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tbRFID->Text != "" && tbRFID->Text->Length == 10)
		{
			try
			{
				Socket^ cl = _cl->getSocket();
				cl->Send(p->RFIDAccesDemand(tbRFID->Text));
				Thread::Sleep(100);
				ProtocolMsg^ pm = gcnew ProtocolMsg();
				do
				{
					array<Byte>^ buffer = gcnew array<Byte>(1024);
					Console::WriteLine(cl->Connected);
					cl->Receive(buffer);
					for each (Byte var in buffer)
					{
						Console::WriteLine(var);
					}
					pm = p->translateReceive(buffer);
					Console::WriteLine(pm);
				} while (pm->type != p->GetTypeProtocoleByID("RfRDAcces"));

				if (pm->getData1Int() == 1)
				{
					tbRetourSrv->Text = "Accès autorisé";
					tbRetourSrv->BackColor = Color::Lime;
					acces = true;
					gbDechet->Enabled = true;
				}
				else
				{
					tbRetourSrv->Text = "Accès refusé";
					tbRetourSrv->BackColor = Color::Red;
					Thread::Sleep(1000);
				}
			}
			catch (Exception^ e)
			{
				Console::WriteLine("[Error] " + e);
			}
			

		}
	}
	private: System::Void btD1_Click(System::Object^  sender, System::EventArgs^  e) {
		sendDechet(1);
	}
	private: System::Void btD2_Click(System::Object^  sender, System::EventArgs^  e) {
		sendDechet(2);
	}
	private: System::Void btD3_Click(System::Object^  sender, System::EventArgs^  e) {
		sendDechet(3);
	}
	private: System::Void btD4_Click(System::Object^  sender, System::EventArgs^  e) {
		sendDechet(4);
	}

	 void sendDechet(int t)
	 {
		 if (acces)
		 {
			 try
			 {
				 Socket^cl = _cl->getSocket();
				 cl->Send(p->EnvoieTypeDechet(t));
				 gbDechet->Enabled = false;
				 photo();
			 }
			 catch (Exception^e)
			 {
				 Console::WriteLine("[ SendDechet ] " + e);
			 }

		 }
	}
	 void photo()
	 {
		 try
		 {
			 Socket^ cl = _cl->getSocket();
			 ProtocolMsg^ pm = gcnew ProtocolMsg();
			 do
			 {
				 array<Byte>^ buffer = gcnew array<Byte>(512);
				 cl->Receive(buffer);
				 pm = p->translateReceive(buffer);
			 } while (pm->type != p->GetTypeProtocoleByID("RfPhotoGet"));
			 cbS1->Checked = true;
			 Thread::Sleep(500);
			 Bitmap^ i = gcnew Bitmap("test.jpeg");
			 ImageConverter^ converter = gcnew ImageConverter();
			 array<Byte>^ rt = (array<Byte>^)converter->ConvertTo(i, array<Byte>::typeid);
			 envoiePhoto(rt, _cl);
			 cbS4->Checked = true;
			 Thread::Sleep(500);
			 cbS1->Checked = false;
			 cbS2->Checked = false;
			 cbS3->Checked = false;
			 cbS4->Checked = false;
			 gbDechet->Enabled = false;
			 gbPhoto->Enabled = false;
			 btSendRFID->Enabled = true;

		 }
		 catch (Exception^e)
		 {
			 Console::WriteLine("[ PHOTO ] " + e);
		 }
	 }
	 void envoiePhoto(array<Byte>^ ph, Client^ cl)
	 {


		 Protocole^ p = Protocole::getProtocole();
		 int BufferSize = 1024 - 4 - 2 - 5;
		 Console::WriteLine("[ Envoie Photo ] Taille : " + ph->Length);
		 int nbPacket = Convert::ToInt32(Math::Ceiling(Convert::ToDouble(ph->Length) / Convert::ToDouble(BufferSize)));
		 Console::WriteLine("[ Envoie Photo ] Nombre de packet : " + nbPacket);
		 int TotalLength = ph->Length;
		 Console::WriteLine("[ Envoie Photo ] Taille de l'image (en Octet(Byte)) : " + TotalLength);


		 cl->Send(p->InitEnvoiePhoto(nbPacket));
		 cbS2->Checked = true;
		 Console::WriteLine("[ Envoie Photo ] Envoie de l'initialisateur de l'envoie de la photo ");

		 int iPhoto = 0; //increment photo
		 int taillePacket;


		 for (int i = 0; i < nbPacket; i++)
		 {
			 if (TotalLength > BufferSize)
			 {
				 taillePacket = BufferSize;
				 TotalLength = TotalLength - taillePacket;
			 }
			 else
			 {
				 taillePacket = TotalLength;
			 }

			 array<Byte>^ sendBuffer = gcnew array<Byte>(taillePacket);

			 for (int ii = 0; ii < taillePacket; ii++)
			 {

				sendBuffer[ii] = ph[iPhoto];
				iPhoto++;
				//Console::WriteLine("R = " + rd + "  S =" + seuil);

			 }

			 cl->Send(p->EnvoiePhoto(i + 1, sendBuffer));
			 Console::WriteLine("[ Envoie Photo ] Envoie du packet " + (i + 1) + "/" + nbPacket);
		 }
		 cbS3->Checked = true;


		 cl->Send(p->EndEnvoiePhoto());
		 Console::WriteLine("[ Envoie Photo ] Fin de transmission ");



	 }

};







