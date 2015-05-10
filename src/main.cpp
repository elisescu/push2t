#include <iostream>
#include <RtAudio.h>

#include "capturer.h"

int main(int argc, char *argv[])
{
    std::cout << "Hi there\n";
    PCapturer capturer(2, 44100);

    capturer.start();
    return 1;
}

