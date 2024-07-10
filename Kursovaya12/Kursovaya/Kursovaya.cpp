
#include "stdafx.h"
#include "Form1.h"
#include <stdio.h>
#include "locale.h"


using namespace Kursovaya;


void main()
{
	
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	Application::DoEvents();
	Application::Run(gcnew Form1());        

    
    

}
