#include "Window.hpp"

class MyWindow : public Window {
    public:
        MyWindow(const uint32_t x,
                 const uint32_t y,
                 const uint32_t width,
                 const uint32_t height,
                 const bool drawBorder = true) : Window(x, 
                                                        y,
                                                        width,
                                                        height,
                                                        drawBorder) {};

        void paint() override;
};