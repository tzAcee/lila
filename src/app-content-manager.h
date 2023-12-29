#pragma once

#include <vector>
#include <algorithm>
#include <memory>

#include "drawable-elements/mouse-element.h"
#include "drawable-elements/text-editor-element.h"

namespace lila
{

class AppContentManager
{
public:
    AppContentManager(raylib::Window& window);
    ~AppContentManager();

    auto provide_content() -> void;

private:
    auto request_redraw() -> void;
    auto init_drawable_elements() -> void;

private: 
    std::vector<std::unique_ptr<IDrawableElement>> _drawableElements;
    raylib::Window& _window;
};

}

