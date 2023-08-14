// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <plugin.h>
#include <assert.h>
#include "gui.h"

void plugin::OnStartup()
{
    plugin::OnDeviceReset::Before::Add(gui::OnReset::Before);
    plugin::OnDeviceReset::After::Add(gui::OnReset::After);
    plugin::OnEndScene::Add(gui::OnEndScene);
    // and your events here
}

