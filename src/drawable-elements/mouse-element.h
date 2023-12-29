#pragma once
#include "../drawable-element-base.h"

namespace lila
{
// Will trigger a state change if the mousePosition has changed.
class MouseElement : public DrawableElementBase
{
    public:
    auto listen_to_state_change() -> void override
    {
        PollInputEvents(); // still poll input events
        auto current_mouse_delta = GetMouseDelta();
        if(current_mouse_delta.x != 0.0f || current_mouse_delta.y != 0.0f)
        {
            _stateChanged = true;
        }
    }

    auto draw() -> void override
    {
        // nothing to draw here yet
    }
};

}