#pragma once
#include <cstdint>
#include <raylib-cpp.hpp>

constexpr uint16_t const DEFAULT_WINDOW_HEIGHT = 600;
constexpr uint16_t const DEFAULT_WINDOW_WIDTH = 800;
constexpr char const* DEFAULT_WINDOW_TITLE = "lila - basic text editor";
constexpr uint8_t const DEFAULT_FPS = 60;

constexpr uint8_t const EDITOR_LINE_HEIGHT = 15;
constexpr uint8_t const EDITOR_LINE_DISPLAY_WIDTH = 18;
constexpr uint8_t const TEXT_EDITOR_PADDING = 3;
constexpr uint8_t const EDIT_FONT_SPACING = 2;
constexpr Color const EDITOR_PRIMARY = Color(178, 181,245, 255); // ##b2b5f5
constexpr Color const EDITOR_ACCENT = Color(75, 0, 130, 255); // ##b2b5f5