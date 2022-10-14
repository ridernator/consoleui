#include "MyWindow.hpp"

void MyWindow::paint() {
    move(1, 2);
    std::string message = "width ";
    write(message + std::to_string(width) + ", height " + std::to_string(height));
}