#ifndef _CAPTURER_H_
#define _CAPTURER_H_

#include <RTAudio.h>
#include <thread>

class AudioParams
{
    private:
    int mChannels;
    int mSampleRate;

    public:
    AudioParams(int chan, int srate):
        mChannels(chan), mSampleRate(srate) {}
    int channels() { return mChannels;}
    int sampleRate() { return mSampleRate;}


};

class PCapturer
{
    private:
    std::thread mCaptureTread;
    RtAudio::StreamParameters mRTStreamParams;
    int mDevice;
    AudioParams mAParams;

    public:
    PCapturer(const int, const int, const int device = 0);
    void start();
    void stop();
};

#endif

