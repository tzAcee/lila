#pragma once

#include "../../../global-consts.h"

namespace lila
{

class TextEditorLineDisplay
{
    public:
    auto render(TextEditorBackground const& background) -> void
    {
        _position = background.get_position();
        _size = Vector2{EDITOR_LINE_DISPLAY_WIDTH, background.get_size().y};

        raylib::Rectangle rect(_position, _size);
        rect.Draw(EDITOR_ACCENT);
    }

    auto get_position() const -> Vector2 const&
    {
        return _position;
    }

    auto get_size() const -> Vector2 const&
    {
        return _size;
    }

    private:
    Vector2 _size;
    Vector2 _position;
};

}