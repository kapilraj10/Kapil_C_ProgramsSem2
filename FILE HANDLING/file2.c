#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    // Drawing operations
    circle(320, 240, 10);           // Circle at the center with radius 10
    rectangle(10, 8, 500, 400);    // Rectangle from (10, 8) to (500, 400)
    line(10, 8, 500, 400);         // Line from (10, 8) to (500, 400)
    arc(245, 196, 0, 45, 15);      // Arc centered at (245, 196), angle from 0 to 45 degrees, radius 15

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
    return 0;
}

