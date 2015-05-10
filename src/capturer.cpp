#include <iostream>
#include "capturer.h"

//XXX: hack until we get a logger
std::ostream &logger = std::cerr;

PCapturer::PCapturer(const int chn, const int srate, const int device):
    mDevice(device), mAParams(chn, srate)
{ }

void PCapturer::start()
{
    RtAudio adc;
    if (mDevice > adc.getDeviceCount()) {
        logger << "Invalid device specified";
        return;
    }
    logger << "Starting the capture thread with device " << mDevice;

    if (mDevice == 0) {
        mRTStreamParams.deviceId = adc.getDefaultInputDevice();
    } else {
        mRTStreamParams.deviceId = mDevice;
    }

    mRTStreamParams.nChannels = mAParams.channels();
}
