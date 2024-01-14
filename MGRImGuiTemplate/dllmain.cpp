// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <plugin.h>
#include <assert.h>
#include "gui.h"

#include "imgui/imgui.h"

void plugin::OnStartup()
{
    Events::OnDeviceReset.before += gui::OnReset::Before;
    Events::OnDeviceReset.after += gui::OnReset::After;
    Events::OnEndScene += gui::OnEndScene;
    // and your events here
}

void gui::RenderWindow()
{

}