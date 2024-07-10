#include "stdafx.h"
#include <fstream>
#include <math.h>

using namespace std;
 
double fileadd(double a, double b, double result, int actions)


{
	ofstream fout("vichisleniya.txt", ios_base::app);
	switch(actions){
			case 1:
				    fout << a <<"+"<< b << "=" << result << "\n"; 
                    fout.close(); 
                    break;
            case 2:
                    fout << a <<"-"<< b << "=" << result << "\n"; 
                    fout.close(); 
                    break;
            case 3:
				   
                    fout << a <<"*"<< b << "=" << result << "\n";
                    fout.close(); 
                    break;
            case 4:
				    
                    fout << a <<"/"<< b << "=" << result << "\n";
                    fout.close(); 
                    break;
            case 5:
				    fout << "Sqrt(" << a << ")" << "=" << b << "\n"; 
                    fout.close(); 
                    break;
            case 6:
                    fout << "Sin(" << a << ")" << "=" << b << "\n"; 
                    fout.close(); 
                    break;
            case 7:
                    fout << "Cos(" << a << ")" << "=" << b << "\n"; 
                    fout.close(); 
                    break;
            case 8:
				    fout << "Tan(" << a << ")" << "=" << b << "\n"; 
                    fout.close(); 
                    break;
            case 9:
				    fout << "Ctg(" << a << ")" << "=" << b << "\n"; 
                    fout.close(); 
                    break;
            case 10:
                fout << a << "^" << b << "=" << result << "\n";
                fout.close(); 
                break;
            case 11:
                fout << "dopolnitelni kod:" << a << "=" << b << "\n";
                fout.close(); 
                break;

 
            default:
               break;
		}
    
    
    return 0;
    
}