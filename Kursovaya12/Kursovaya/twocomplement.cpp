#include "stdafx.h"
#include "twocomplement.h"
#include <iostream>
#include <bitset>
using namespace std;
double twocomplement(double a) {
   int res = 0;
    double converted = 0;
    __asm {
        fld a
        fistp res
        mov ebx, res
        mov res, ebx
        fild res
        fst converted
        ffree st(0)
    }
    return converted;
   
}

void convToBinStr(double a, char* strChan, int sizeChan) {
    int tmp_f = 0;
    __asm {
        mov edi, strChan
        fld a
        fistp tmp_f
        mov eax, tmp_f
        lea esi, sizeChan
        mov edx, dword ptr[esi]
        xor ecx, ecx
        rol eax, 1

        _start:
        mov ebx, eax
            and ebx, 1
            add ebx, 0x30
            mov byte ptr[edi], bl
            cmp ecx, edx
            je _end
            inc ecx
            inc edi
            rol eax, 1
            jmp _start

            _end :
        nop
    }
}
