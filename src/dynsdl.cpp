#include "../include/SDL_version.h"
#include <cstdio>
#include <string>

int main()
{
    SDL_version libVersion = { 0, 0, 0 };
    SDL_GetVersion(&libVersion);
    const char* msgTempl = "We use SDL lib version %d.%d.%d";
    std::printf(msgTempl,
        libVersion.major,
        libVersion.minor,
        libVersion.patch);
    return 0;
}
