#include "lila-app.h"

namespace lila
{

LilaApp::LilaApp() : _window {DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, DEFAULT_WINDOW_TITLE, FLAG_WINDOW_RESIZABLE}, _contentManager{_window}
{
    init();
}

LilaApp::~LilaApp()
{
}

auto LilaApp::run() -> uint8_t
{
    while (!_window.ShouldClose())
    {
        _contentManager.provide_content();
    }

    return 0u;
}

auto LilaApp::init() -> void
{
    SetTargetFPS(DEFAULT_FPS);
}

}

