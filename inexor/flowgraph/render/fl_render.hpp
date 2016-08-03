/// @file fl_rendering.hpp
/// @author Johannes Schneider
/// @brief Renderer for nodes and node relations

#ifndef INEXOR_VSCRIPT_NODE_RENDERER_HEADER
#define INEXOR_VSCRIPT_NODE_RENDERER_HEADER

#include "inexor/engine/engine.hpp"


namespace inexor {
namespace vscript {

    const float boxsize = 5.0f;

    enum VSCRIPT_ENTITY_BOX_ORIENTATION
    {
        VSCRIPT_BOX_NO_INTERSECTION = -1,
        VSCRIPT_BOX_LEFT,
        VSCRIPT_BOX_RIGHT,
        VSCRIPT_BOX_FRONT,
        VSCRIPT_BOX_BACK,
        VSCRIPT_BOX_BOTTOM,
        VSCRIPT_BOX_TOP
    };


    enum VSCRIPT_NODE_COLORS
    {
        VSCRIPT_COLOR_TIMER     = 0x51ABCC,  // light blue
        VSCRIPT_COLOR_COMMENT   = 0x5BCC51,  // comment green
        VSCRIPT_COLOR_FUNCTION  = 0x51ABCC,  // darker purple
        VSCRIPT_COLOR_TRIGGERED = 0x00D137,  // 0xFF8800,  // spicy orange
        VSCRIPT_COLOR_SLEEP     = 0x51ABCC,  // spicy blue
        VSCRIPT_COLOR_GRAY      = 0xAAAAAA,  // gray
        VSCRIPT_COLOR_BLACK     = 0x000000,  // black
        VSCRIPT_COLOR_WHITE     = 0xFFFFFF,  // white
        VSCRIPT_COLOR_SELECTION = 0xFFFF4C,  // white yellow 
        VSCRIPT_COLOR_DEBUG_RAY = 0x51ABCC,  // spicy blue
        VSCRIPT_COLOR_MEMORY    = 0xFF3D91,  // purple
        VSCRIPT_AREA            = 0xFFFFFF,  // = 0x1900FF,
        VSCRIPT_COLOR_PENDING   = 0xFF263F,  // light red
    };


    class CNodeRenderer
    {

        public:

            CNodeRenderer();
            ~CNodeRenderer();

            VSCRIPT_NODE_COLORS box_color;
            VSCRIPT_NODE_COLORS default_box_color;

            void adjust_selection_color(int orient, int index);
            void render_box(vec p, int orient);
            void render_box_outline(vec p);
            void render_box_helplines(vec p);

    };

};
};

#endif
