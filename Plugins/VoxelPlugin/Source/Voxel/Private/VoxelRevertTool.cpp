#include "VoxelRevertTool.h"

UVoxelRevertTool::UVoxelRevertTool() {
    this->bRevertValues = true;
    this->bRevertMaterials = false;
    this->HistoryPosition = 0;
    this->CurrentHistoryPosition = 0;
}

