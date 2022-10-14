#include <ncurses.h>
#include <unistd.h>

#include "MyWindow.hpp"

int main() {
    initscr();

    MyWindow window;
    window.setPosition(5, 2, 10, 20);

    {
        MyWindow window2;
        window2.setPosition(10, 4, 20, 40);

        for (int i = 0; i < 2; ++i) {
            window.repaint();
            window2.repaint();

            usleep(1000000);
        }
    }

    while (true) {
    // for (int i = 0; i < 2; ++i) {
        window.repaint();

        usleep(1000000);
    }

    endwin();
}