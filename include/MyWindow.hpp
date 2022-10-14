#include "Window.hpp"

class MyWindow : public Window {
    public:
        MyWindow(const bool drawBorder = true) : Window(drawBorder) {};

        void paint() override;
};