//
//  SDL2SoundEffects.cpp
//  sounds
//
//  Created by Sreehari Nambiar on 14/05/21.
//

#include "SDL2SoundEffects.h"
#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

SDL2SoundEffects::SDL2SoundEffects(){
    SDL_Init(SDL_INIT_AUDIO);
    
    int audio_rate = 22050;
    Uint16 audio_format = AUDIO_S16SYS;
    int audio_channels = 2;
    int audio_buffers = 4096;
    
    if(Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers)!=0){
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "COULDN'T INIT AUDIO: %s",Mix_GetError());
        exit(-1);
    }
}

SDL2SoundEffects::~SDL2SoundEffects(){
    SDL_Quit();
}

void SDL2SoundEffects::addSoundEffect(const char* path){
    Mix_Chunk* tmpChunk = Mix_LoadWAV(path);
    
    if(tmpChunk!=nullptr){
        mSoundEffectBank.push_back(tmpChunk);
    }
}
void SDL2SoundEffects::playSoundEffect(const int which) const{
    if(which > mSoundEffectBank.size() - 1){
        cout<<"Sound out of range";
        return;
    }
    
    Mix_PlayChannel(-1, mSoundEffectBank[which], -1);
    cout<<"Played Sound"<< which <<'\n';
}

