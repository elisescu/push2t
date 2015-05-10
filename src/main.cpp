#include <iostream>
#include <RtAudio.h>

int main(int argc, char *argv[])
{
    RtAudio audio;
    RtAudio::DeviceInfo info;

    unsigned int devices = audio.getDeviceCount();
    std::cout << "\nFound " << devices << " device(s) ...\n";
    std::cout << "Hi there\n";
    return 1;
}

