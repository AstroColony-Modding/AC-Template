#include "MOTextNode.h"

UMOTextNode::UMOTextNode() {
    this->ShowNext = true;
    this->Icon = NULL;
    this->NodeCharacter = ENodeCharacter::Neutral;
    this->DebugForceToActivate = false;
    this->bShowNarration = true;
    this->bActivateWhenAllParentsDone = true;
}

