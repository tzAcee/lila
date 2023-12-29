#pragma once
#include "../drawable-element-base.h"
#include "./widgets/text-editor.h"
namespace lila
{
// Will trigger a state change if the mousePosition has changed.
class TextEditorElement : public DrawableElementBase
{
    public:
    auto listen_to_state_change() -> void override
    {
        _editor.listen(std::bind(&TextEditorElement::request_redraw, this));
    }

    auto draw() -> void override
    {
        _editor.render();
    }

    private:
    auto request_redraw() -> void
    {
        _stateChanged = true;
    }

private:
    TextEditor _editor;
};

}