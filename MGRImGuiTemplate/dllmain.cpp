// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <plugin.h>
#include "impl/d3d9_impl.h"
#include "kiero.h"
#include <assert.h>

void imguiInit()
{
    if (kiero::init(kiero::RenderType::D3D9) == kiero::Status::Success)
        impl::d3d9::init();
}

void plugin::OnStartup()
{
    plugin::OnGameStartup::Add(imguiInit);
    // and your events here
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    DisableThreadLibraryCalls(hModule);

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        plugin::Init();
        break;
    }
    return TRUE;
}

