#pragma once
#include "../../../global-consts.h"

namespace lila
{

class TextEditorBackground
{
    public:
    auto render(float const screen_width, float const screen_height) -> void
    {
        auto margin = 0.0f;

        _position = Vector2{margin, margin};
        _size = Vector2{screen_width-(2*margin), screen_height-(2*margin)};

        raylib::Rectangle rect(_position, _size);
        rect.Draw(EDITOR_PRIMARY);
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