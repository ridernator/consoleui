#include <ncurses.h>
#include <unistd.h>

#include "MyWindow.hpp"

int main() {
    initscr();

    MyWindow window(5, 5, 10, 10);

    while (true) {
    // for (int i = 0; i < 2; ++i) {
        window.repaint();

        usleep(1000000);
    }

    endwin();
}