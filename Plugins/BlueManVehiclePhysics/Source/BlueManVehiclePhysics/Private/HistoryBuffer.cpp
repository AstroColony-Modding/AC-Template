#include "HistoryBuffer.h"

FHistoryBuffer::FHistoryBuffer() {
    this->Timestamp = 0.00f;
    this->StoredDeltaTime = 0.00f;
    this->TimeStampOffset = 0.00f;
    this->StoredSteeringInput = 0.00f;
    this->StoredThrottleInput = 0.00f;
    this->StoredBrakingInput = 0.00f;
}

