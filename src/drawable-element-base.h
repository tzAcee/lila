#pragma once

#include <raylib-cpp.hpp>
#include "idrawable-element.h"

namespace lila
{
class DrawableElementBase : public IDrawableElement
{
public:
    auto state_changed() const -> bool const override
    {
        return _stateChanged;
    }

    auto reset_state() -> void override
    {
        _stateChanged = false;
    }

protected:
    bool _stateChanged = true;
};

}