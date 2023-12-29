#include "text-editor.h"

auto lila::TextEditor::render() -> void
{
    // draw editor background, which is just a rect with some margin
    auto const screen_width = static_cast<float>(GetRenderWidth());
    auto const screen_height = static_cast<float>(GetRenderHeight());

    // editor background rect
    _background.render(screen_width, screen_height);
    
    // line display
    _lineDisplay.render(_background);

    render_buffer();
}

auto lila::TextEditor::listen(NotifyRedrawFunction cb) -> void
{
    on_key_press(cb);
    on_mouse_click(cb);
}

auto lila::TextEditor::on_save() -> void
{
}
#include <iostream>
auto lila::TextEditor::on_key_press(NotifyRedrawFunction& cb) -> void
{
    auto pressed_char = GetCharPressed();

    while(pressed_char != 0)
    {
        _buffer.push_back(pressed_char);
        pressed_char = GetCharPressed();
        cb();
    }
}

auto lila::TextEditor::on_mouse_click(NotifyRedrawFunction& cb) -> void
{
}

auto lila::TextEditor::get_offset_from_left_border() -> float
{
    return _lineDisplay.get_position().x + _lineDisplay.get_size().x + TEXT_EDITOR_PADDING;
}

auto lila::TextEditor::render_buffer() -> void
{
    if(_buffer.size() == 0)
    {
        return;
    }

    static raylib::Font FONT("resources/pixelplay.png");
    FONT.DrawText(_buffer, Vector2{get_offset_from_left_border(), TEXT_EDITOR_PADDING}, FONT.baseSize, EDIT_FONT_SPACING, EDITOR_ACCENT);


}
