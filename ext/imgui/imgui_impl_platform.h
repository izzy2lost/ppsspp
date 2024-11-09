#pragma once

#include "ext/imgui/imgui.h"
#include "Common/Input/KeyCodes.h"
#include "Common/Input/InputState.h"

ImGuiKey KeyCodeToImGui(InputKeyCode keyCode);

void ImGui_ImplPlatform_NewFrame();

void ImGui_ImplPlatform_KeyEvent(const KeyInput &key);
void ImGui_ImplPlatform_TouchEvent(const TouchInput &touch);
void ImGui_ImplPlatform_AxisEvent(const AxisInput &axis);
