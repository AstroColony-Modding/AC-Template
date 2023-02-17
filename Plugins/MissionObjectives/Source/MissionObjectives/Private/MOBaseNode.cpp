#include "MOBaseNode.h"

class UMission;

bool UMOBaseNode::K2_IsActive() {
    return false;
}

UMission* UMOBaseNode::GetMission() {
    return NULL;
}

UMOBaseNode::UMOBaseNode() {
    this->bNodeIsActive = false;
    this->UniqueID = 16987;
}

