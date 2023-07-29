# MGRImGuiTemplate
MGRImGuiTemplate is a repository template targeted to draw ImGui in game, template is used to not repeat every imgui process over and over again

## What's used?
ImGui 1.76(WIP)
kiero
MinHook(for kiero work)
MGR Plugin SDK

## How to get started?
All is simple, very simple
Here's an example of hello world
```cpp
void gui::RenderWindow()
{
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

        // !!! PUT YOUR IMGUI BETWEEN COMMENTS HERE !!!
        ImGui::Begin("Test");
        ImGui::Text("Hello World!");
        ImGui::End();
        // 

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}
```
The result is<br/>
![image](https://github.com/Frouk3/MGRImGuiTemplate/assets/68140414/fd3ba97e-fb05-47bc-bc7b-a1a402dadd01)