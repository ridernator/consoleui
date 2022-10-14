#include "Window.hpp"

Window::Window(const uint32_t x,
               const uint32_t y,
               const uint32_t width,
               const uint32_t height,
               const bool drawBorder) : drawBorder(drawBorder) {
    if (drawBorder) {
        outerWindow = newwin(height, width, y, x);
        innerWindow = newwin(height - 2, width - 2, y + 1, x + 1);

        this->width = width - 2;
        this->height = height - 2;
    } else {
        innerWindow = newwin(height, width, y, x);

        this->width = width;
        this->height = height;
    }
}

Window::~Window() {
    delwin(innerWindow);
    delwin(outerWindow);
}

void Window::move(const uint32_t x,
                  const uint32_t y) {
    wmove(innerWindow, y, x);
}

void Window::write(const std::string& string) {
    waddstr(innerWindow, string.c_str());
}

void Window::repaint() {
    paintBorder();

    wclear(innerWindow);
    
    wmove(innerWindow, 0, 0);
        
    paint();

    wrefresh(innerWindow);
}

void Window::paintBorder() {
    if (drawBorder) {
        box(outerWindow, 0, 0);

        wrefresh(outerWindow);
    }
}