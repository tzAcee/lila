#pragma once

namespace lila
{
class IDrawableElement
{
    public:

    ~IDrawableElement() = default;
    virtual auto state_changed() const -> bool const = 0;
    virtual auto reset_state() -> void = 0;
    virtual auto listen_to_state_change() -> void = 0;
    virtual auto draw() -> void = 0;
};

}