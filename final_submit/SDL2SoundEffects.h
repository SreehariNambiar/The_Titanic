#pragma once
#include <vector>
#include<SDL2/SDL_mixer.h>
using namespace std;
class SDL2SoundEffects
{
public:
    SDL2SoundEffects();
    ~SDL2SoundEffects();
    
    void addSoundEffect(const char* path);
    void playSoundEffect(const int which) const;
private:
    vector<Mix_Chunk*> mSoundEffectBank;
    
};

