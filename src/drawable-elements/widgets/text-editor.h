#pragma once

#include <vector>
#include <cstdint>

#include "text-editor/text-editor-background.h"
#include "text-editor/text-editor-line-display.h"

#include <functional>

namespace lila
{

class TextEditor
{
    using NotifyRedrawFunction = std::function<void()>;

    public:
    auto render() -> void;
    auto listen(NotifyRedrawFunction cb) -> void;

    private:
    auto on_save() -> void;
    auto on_key_press(NotifyRedrawFunction& cb) -> void; 
    auto on_mouse_click(NotifyRedrawFunction& cb) -> void;
    auto get_offset_from_left_border() -> float;

    auto render_buffer() -> void;

    private:
    std::string _buffer;

    TextEditorBackground _background;
    TextEditorLineDisplay _lineDisplay;
};

}