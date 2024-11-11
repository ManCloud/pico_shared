#ifndef ROMSELECT
#define ROMSELECT
#define ROMINFOFILE "/currentloadedrom.txt"
#define SWVERSION "VX.X"

#if PICO_RP2350
#if __riscv
#define PICOHWNAME_ "rp2350-riscv"
#else
#define PICOHWNAME_ "rp2350-arm"
#endif
#else
#define PICOHWNAME_ "rp2040"
#endif

void menu(char *errorMessage, bool isFatalError, bool showSplash, const char *allowedExtensions);

#endif