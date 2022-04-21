#include "MainWindow.h"
#include <string>
<<<<<<< HEAD
=======
#include "ButtonFactory.h"
>>>>>>> ButtonFactoryWork

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)

EVT_BUTTON(10001, OnButtonClick)
EVT_BUTTON(10002, OnButtonClick)
EVT_BUTTON(10003, OnButtonClick)
EVT_BUTTON(10004, OnButtonClick)
EVT_BUTTON(10005, OnButtonClick)
EVT_BUTTON(10006, OnButtonClick)
EVT_BUTTON(10007, OnButtonClick)
EVT_BUTTON(10008, OnButtonClick)
EVT_BUTTON(10009, OnButtonClick)
EVT_BUTTON(10010, OnButtonClick)
EVT_BUTTON(10011, OnButtonClick)
EVT_BUTTON(10012, OnButtonClick)
EVT_BUTTON(10013, OnButtonClick)
EVT_BUTTON(10014, OnButtonClick)
EVT_BUTTON(10015, OnButtonClick)
EVT_BUTTON(10016, OnButtonClick)
EVT_BUTTON(10017, OnButtonClick)
EVT_BUTTON(10018, OnButtonClick)
EVT_BUTTON(10019, OnButtonClick)
//EVT_BUTTON(10016, OnButtonClick)


wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, 100, "Calculator", wxPoint(200, 200), wxSize(1000, 1000))
{
	//output box
	textBox = new wxTextCtrl(this, wxID_ANY, "Calculator", wxPoint(15, 400), wxSize(950, 950));
	
	//wxPanel* pan1 = new wxPanel(this, 100, wxPoint(15,20), wxSize(900,900));

	wxPanel pan1 = new wxPanel(this, 100, wxPoint(15, 20), wxSize(900, 900));
	
	//MainWindow frame = MainWindow* this;
	//MainWindow frame = this->~MainWindow;
	//
	///*btn = ButtonFactory.CreateAddButton1();*/
	//wxFrame frame = this->~MainWindow;

	ButtonFactory factory;
	std::vector<wxButton*> buttons = factory.MakeButtons();  
	

	//btn = new wxButton(panel, 10001, "1", wxPoint(15, 15), wxSize(100, 100));
	//btn1 = new wxButton(panel, 10002, "2", wxPoint(100, 15), wxSize(100, 100));
	//btn2 = new wxButton(panel, 10003, "3", wxPoint(185, 15), wxSize(100, 100));
	//btn3 = new wxButton(panel, 10004, "4", wxPoint(15, 100), wxSize(100, 100));
	//btn4 = new wxButton(panel, 10005, "5", wxPoint(100, 100), wxSize(100, 100));
	//btn5 = new wxButton(panel, 10006, "6", wxPoint(185, 100), wxSize(100, 100));
	//btn6 = new wxButton(panel, 10007, "7", wxPoint(15, 185), wxSize(100, 100));
	//btn7 = new wxButton(panel, 10008, "8", wxPoint(100, 185), wxSize(100, 100));
	//btn8 = new wxButton(panel, 10009, "9", wxPoint(185, 185), wxSize(100, 100));
	//btn9 = new wxButton(panel, 10010, "0", wxPoint(115, 275), wxSize(85, 100));
	////btn26 = new wxButton(panel, 10010, "0", wxPoint(500, 275), wxSize(85, 100));*/************************************SkipNumbering******************

	////Function Buttons
	//btn10 = new wxButton(panel, 10011, "+", wxPoint(280, 15), wxSize(85, 100));
	//btn11 = new wxButton(panel, 10012, "-", wxPoint(280, 15), wxSize(85, 100));
	//btn12 = new wxButton(panel, 10013, "*", wxPoint(360, 15), wxSize(85, 100));
	//btn13 = new wxButton(panel, 10014, "/", wxPoint(280, 100), wxSize(85, 100));
	//btn14 = new wxButton(panel, 10015, "-Neg", wxPoint(360, 100), wxSize(85, 100));
	//btn15 = new wxButton(panel, 10017, "Execute", wxPoint(360, 185), wxSize(85, 100));
	//btn16 = new wxButton(panel, 10018, "Mod", wxPoint(445, 15), wxSize(85, 100));
	//btn17 = new wxButton(panel, 10019, "Hex", wxPoint(445, 100), wxSize(85, 100));
	//btn18 = new wxButton(panel, 10020, "0.0", wxPoint(445, 185), wxSize(85, 100));
	//btn19 = new wxButton(this, 10021, "Execute", wxPoint(445, 270), wxSize(85, 100));
	
	std::string head = "  ";
};
MainWindow::~MainWindow()
{

}
void MainWindow::OnButtonClick(wxCommandEvent& evt)
{
	
	//std::string str = "  ";
	if (evt.GetId() == 10001) {
		str = str + (btn->GetLabel());
		textBox->ChangeValue(str);
	}
	else if(evt.GetId() == 10002)
	{
		str = str + (btn1->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10003)
	{
		str = str + (btn2->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10004)
	{
		str = str + (btn3->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10005)
	{
		str = str + (btn4->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10006)
	{
		str = str + (btn5->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10007)
	{
		str = str + (btn6->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10008)
	{
		str = str + (btn7->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10009)
	{
		str = str + (btn8->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10010)
	{
		str = str + (btn9->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10011)
	{
		str = str + (btn10->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10012)
	{
		str = str + (btn11->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10013)
	{
		str = str + (btn12->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10014)
	{
		str = str + (btn13->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10015)
	{
		str = str + (btn14->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10016)
	{
		str = str + (btn15->GetLabel());
		textBox->ChangeValue(str);
	}
	else if (evt.GetId() == 10017)
	{
		str = str + (btn16->GetLabel());
		textBox->ChangeValue(str);
	}

	else if (evt.GetId() == 10018)
	{
		str = str + (btn17->GetLabel());
		textBox->ChangeValue(str);
	}

	else if (evt.GetId() == 10019)
	{
		str = str + (btn18->GetLabel());
		textBox->ChangeValue(str);
	}

	//else if (evt.GetId() == 10016)
	//{
	//	str = str + (btn19->GetLabel());
	//	textBox->ChangeValue(str);
	//}



	
}
