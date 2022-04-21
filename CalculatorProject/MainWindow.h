#pragma once
#include "wx/wx.h"

class MainWindow : public wxFrame
{
public:
	wxTextCtrl* textBox = nullptr;
	wxButton* Button = nullptr;
	wxButton* btn = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btn10 = nullptr;
	wxButton* btn11 = nullptr;
	wxButton* btn12 = nullptr;
	wxButton* btn13 = nullptr;
	wxButton* btn14 = nullptr;
	wxButton* btn15 = nullptr;
	wxButton* btn16 = nullptr;
	wxButton* btn17 = nullptr;
	wxButton* btn18 = nullptr;
	wxButton* btn19 = nullptr;

	wxPanel pan1;
	std::string str = "";
public:

	MainWindow();
	~MainWindow();

	void OnButtonClick(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

