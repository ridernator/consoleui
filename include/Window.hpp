#include <ncurses.h>
#include <string>

class Window {
    public:
        Window(const bool drawBorder = true);

        ~Window();

        void repaint();

        void setPosition(const uint32_t x,
                         const uint32_t y,
                         const uint32_t width,
                         const uint32_t height);

        virtual void paint() = 0;

    protected:
        void move(const uint32_t x,
                  const uint32_t y);

        void write(const std::string& string);

        uint32_t width;
        uint32_t height;

    private:
        void paintBorder();

        WINDOW* outerWindow;
        WINDOW* innerWindow;

        bool drawBorder;
};