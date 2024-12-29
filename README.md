# MGRImGuiTemplate
MGRImGuiTemplate is a repository template targeted to draw ImGui in game, template is used to not repeat every imgui process over and over again

## What's used?
- [ImGui](https://github.com/ocornut/imgui) 1.76(WIP)
- [MGR Plugin SDK](https://github.com/Frouk3/mgr-plugin-sdk)

## How to get started?
All is simple, very simple<br/>
Here's an example of hello world
```cpp
void gui::RenderWindow()
{
        ImGui::Begin("Test");
        ImGui::Text("Hello World!");
        ImGui::End();
}
```
[MGR ImGui Template](https://github.com/user-attachments/files/16689294/MGR.ImGui.Template.zip)<br />
To install a template you need to go to your documents folder and find `Visual Studio year` <br/>
Move the template zip into the `Templates\ProjectTemplates\`

Visual Studio template to make this kind of mods

to render window, all you need is to write all related code to dllmain in `gui::RenderWindow`
The result is<br/>
![image](https://github.com/Frouk3/MGRImGuiTemplate/assets/68140414/fd3ba97e-fb05-47bc-bc7b-a1a402dadd01)
