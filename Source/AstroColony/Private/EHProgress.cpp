#include "EHProgress.h"

FEHProgress::FEHProgress() {
    this->ProductionStartTime = 0.00f;
    this->IsProducing = false;
    this->Ratio = 0.00f;
    this->PreviouslyCompletedProgress = 0.00f;
}

