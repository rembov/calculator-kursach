#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include "StdAfx.h"
#include <cmath> 

double division(double a, double b) {
    double result;
	_asm{
		
		fld b
        fld a
		fdiv st(0),st(1)
		fst result
		FFREE ST(1)
		FFREE ST(0)
	}
     result= floorf(result * 10000) / 10000;
    return result;
}