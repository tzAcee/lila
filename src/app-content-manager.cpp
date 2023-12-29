#include "app-content-manager.h"

namespace lila
{

AppContentManager::AppContentManager(raylib::Window& win) : _window{win}
{
    init_drawable_elements();
}

AppContentManager::~AppContentManager()
{

}

auto AppContentManager::init_drawable_elements() -> void
{
    _drawableElements.emplace_back(std::make_unique<MouseElement>());
    _drawableElements.emplace_back(std::make_unique<TextEditorElement>());
}

auto AppContentManager::provide_content() -> void
{
    auto need_redraw = false;

    std::for_each(std::begin(_drawableElements), std::end(_drawableElements), [&](auto& drawable_element)
    {    
        drawable_element->listen_to_state_change();

        if(drawable_element->state_changed())
        {
            need_redraw = true;
        }
    });

    if(need_redraw)
    {
         request_redraw();
    }
}

auto AppContentManager::request_redraw() -> void
{
    // first clear the background
    _window.ClearBackground(RAYWHITE);

    BeginDrawing();
    // draw every element again and set the element as "drawn"
    std::for_each(std::begin(_drawableElements), std::end(_drawableElements), [&](auto& drawable_element)
    {
        drawable_element->draw();
        drawable_element->reset_state();
    });
    EndDrawing();
}
}