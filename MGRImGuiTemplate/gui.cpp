#include "gui.h"

#include "impl/win32_impl.h"

#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx9.h"
#include "imgui/imgui_impl_win32.h"

#include <Hw.h>

void gui::RenderWindow()
{
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	// !!! PUT YOUR IMGUI CODE HERE !!!

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}

void gui::OnReset::Before()
{
	ImGui_ImplDX9_InvalidateDeviceObjects();
}

void gui::OnReset::After()
{
	ImGui_ImplDX9_CreateDeviceObjects();
}

void gui::OnEndScene()
{
	static bool init = false;

	if (!init)
	{
		impl::win32::init(Hw::OSWindow);

		ImGui::CreateContext();
		ImGui_ImplWin32_Init(Hw::OSWindow);
		ImGui_ImplDX9_Init(Hw::GraphicDevice);

		init = true;
	}

	gui::RenderWindow();
}