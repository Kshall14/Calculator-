#include "App.h"
#include "MainWindow.h"

wxIMPLEMENT_APP(App);
wxDELETE_EVENT_TABLE();
wxDECLARE_EVENT_TABLE();

App::App() {

}

App::~App() {

}

bool App::OnInit() {
	mainWindow = new MainWindow();
	mainWindow->Show();
	return true;
}