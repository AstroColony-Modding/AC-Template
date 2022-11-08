#include "MovieSceneGameplayCueKey.h"

FMovieSceneGameplayCueKey::FMovieSceneGameplayCueKey() {
    this->NormalizedMagnitude = 0.00f;
    this->PhysicalMaterial = NULL;
    this->GameplayEffectLevel = 0;
    this->AbilityLevel = 0;
    this->bAttachToBinding = false;
}

