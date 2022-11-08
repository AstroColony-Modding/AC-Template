#include "EHAchievementsManager.h"

void UEHAchievementsManager::UnlockAchievement(const EEHAchievement Achievement) {
}



bool UEHAchievementsManager::IsAchievementUnlocked(const EEHAchievement Achievement) {
    return false;
}

FName UEHAchievementsManager::GetAchievementName(const EEHAchievement Achievement) {
    return NAME_None;
}

UEHAchievementsManager::UEHAchievementsManager() {
    this->PlayerController = NULL;
}

