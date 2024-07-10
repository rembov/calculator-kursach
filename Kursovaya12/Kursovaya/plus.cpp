#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include "StdAfx.h"
#include <cmath>  

double pl(double a, double b) {
    double result,res;
	
	_asm{
		
		fld a
        fld b
		fadd st(0),st(1)
		fst result
		FFREE ST(0)
		FFREE ST(1)
	}
    result= floorf(result * 10000) / 10000;
    return result;
}
 