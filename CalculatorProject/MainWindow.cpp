#include "MainWindow.h"
MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(1000, 1000))
{
	//output box
	textBox = new wxTextCtrl(this, wxID_ANY, "Output", wxPoint(15, 400), wxSize(800, 100));
	
	//Number Buttons
	btn = new wxButton(this, wxID_ANY, "1", wxPoint(15, 15), wxSize(100, 100));
	btn1 = new wxButton(this, wxID_ANY, "2", wxPoint(100, 15), wxSize(100, 100));
	btn2 = new wxButton(this, wxID_ANY, "3", wxPoint(185, 15), wxSize(100, 100));
	btn3 = new wxButton(this, wxID_ANY, "4", wxPoint(15, 100), wxSize(100, 100));
	btn4 = new wxButton(this, wxID_ANY, "5", wxPoint(100, 100), wxSize(100, 100));
	btn5 = new wxButton(this, wxID_ANY, "6", wxPoint(185, 100), wxSize(100, 100));
	btn6 = new wxButton(this, wxID_ANY, "7", wxPoint(15, 185), wxSize(100, 100));
	btn7 = new wxButton(this, wxID_ANY, "8", wxPoint(100, 185), wxSize(100, 100));
	btn8 = new wxButton(this, wxID_ANY, "9", wxPoint(185, 185), wxSize(100, 100));
	btn9 = new wxButton(this, wxID_ANY, "0", wxPoint(115, 275), wxSize(85, 100));

	//Function Buttons
	btn10 = new wxButton(this, wxID_ANY, "+", wxPoint(280, 15), wxSize(85, 100));
	btn11 = new wxButton(this, wxID_ANY, "-", wxPoint(280, 100), wxSize(85, 100));
	btn12= new wxButton(this, wxID_ANY, "*", wxPoint(280, 185), wxSize(85, 100));
	btn13 = new wxButton(this, wxID_ANY, "/", wxPoint(360, 15), wxSize(85, 100));
	btn14 = new wxButton(this, wxID_ANY, "-Neg", wxPoint(360, 100), wxSize(85, 100));
	btn15 = new wxButton(this, wxID_ANY, "Execute", wxPoint(360, 185), wxSize(85, 100));
	
};