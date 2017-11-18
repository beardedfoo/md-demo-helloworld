#include <genesis.h>

int main()
{
    VDP_drawText("Hello World for Sega Megadrive", 10, 13);
    VDP_drawText("By @beardedfoo", 10, 15);

    while(1)
    {
            VDP_waitVSync();
    }
}
