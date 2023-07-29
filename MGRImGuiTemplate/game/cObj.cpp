#include "cObj.h"
#include "shared.h"

cObj::cObj()
{
    ((void (__thiscall *)(cObj *))(shared::base + 0x5FD150))(this);
}

void *cObj::GetContext()
{
    return ReturnCallVMTFunc<void *, 1, cObj*>(this);
}

bool cObj::CreateDummy()
{
    return ReturnCallVMTFunc<bool, 2, cObj *>(this);
}

void cObj::Function3()
{
    CallVMTFunc<3, cObj *>(this);
}

void cObj::Function4()
{
    CallVMTFunc<3, cObj *>(this);
}

void cObj::Function5()
{
    CallVMTFunc<5, cObj *>(this);
}

void cObj::Function6()
{
    CallVMTFunc<6, cObj *>(this);
}

void cObj::EnableRender()
{
    CallVMTFunc<7, cObj*>(this);
}

void cObj::DisableRender()
{
    CallVMTFunc<8, cObj *>(this);
}

float cObj::Function9()
{
    return ReturnCallVMTFunc<float, 9, cObj *>(this);
}

void cObj::Function10(int a2)
{
    CallVMTFunc<10, cObj*, int>(this, a2);
}

void cObj::Function11()
{
    CallVMTFunc<11, cObj *>(this);
}

void cObj::Function12()
{
    CallVMTFunc<12, cObj *>(this);
}

void cObj::Function13()
{
    CallVMTFunc<13, cObj *>(this);
}

int cObj::GetRenderable()
{
    return ReturnCallVMTFunc<int, 14, cObj *>(this);
}

// maybe AddColission?
void cObj::UpdateCollision(int a2)
{
    CallVMTFunc<15, cObj *, int>(this, a2);
}