#include "MOObjectiveNode.h"

UMOObjectiveNode::UMOObjectiveNode() {
    this->ObjectiveAsset = NULL;
    this->ShowInObjectiveList = true;
    this->ShowCompletedObjective = true;
    this->ShowObjectivePrompt = true;
    this->bIsObjectiveCompleted = false;
    this->CurrentRepetitionsCount = 0;
    this->RepetitionsCount = 1;
}

