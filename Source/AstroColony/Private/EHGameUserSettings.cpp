#include "EHGameUserSettings.h"

void UEHGameUserSettings::RunBenchmarkConfigureSettings() {
}

bool UEHGameUserSettings::HasBenchmarkResults() {
    return false;
}

bool UEHGameUserSettings::GetRestoreOpenWindowState() {
    return false;
}

float UEHGameUserSettings::GetBenchmarkGPU() {
    return 0.0f;
}

float UEHGameUserSettings::GetBenchmarkCPU() {
    return 0.0f;
}

UEHGameUserSettings::UEHGameUserSettings() {
    this->CinematicAlreadyWatched = false;
    this->RestoreOpenWindowState = true;
}

