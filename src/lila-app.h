#pragma once

#include "app-content-manager.h"
#include "global-consts.h"
namespace lila
{

class LilaApp
{
public:
    LilaApp();
    ~LilaApp();

    auto run() -> uint8_t;

private:
    auto init() -> void;

private:
    raylib::Window _window;
    AppContentManager _contentManager;
};

}