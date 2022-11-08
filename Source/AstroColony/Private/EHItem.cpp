#include "EHItem.h"

bool UEHItem::HasVariants() const {
    return false;
}

FString UEHItem::GetIdentifierString() const {
    return TEXT("");
}

FText UEHItem::GetFullName() const {
    return FText::GetEmpty();
}

bool UEHItem::CanRotate() const {
    return false;
}

UEHItem::UEHItem() {
    this->InstanceCellType = EInstanceCellType::None;
    this->InventoryMode = EHConstructionType::Floor;
    this->ConstructParticleType = EHConstructParticleType::Dissolve;
    this->CollectiveConstructionType = EHCollectiveConstructionType::TwoDim_Full;
    this->ShouldAddModeItem = true;
    this->BlockVisibilityCollision = false;
    this->ZOffset = 0.00f;
    this->UsesBlendingAnimations = false;
    this->DynamicMaterialInstanceID = -1;
    this->NumCustomDataFloats = 0;
    this->CustomDepthStencilValue = 0;
    this->ShowInDetailedList = true;
    this->ConstructRotationType = EHConstructRotationType::Default;
    this->CanSelect = true;
    this->CanOpen = true;
    this->CanRemove = true;
    this->CanInteract = false;
    this->CanUpgrade = false;
    this->CanExtract = false;
    this->CanFly = false;
    this->IgnoredWhenSaving = false;
    this->RequiresFloorForConstruction = true;
    this->IsBlockingCoord = true;
    this->RandomizeYaw = false;
    this->RandomItemMesh = false;
    this->RandomScaleFactor = 0.00f;
    this->RandomInclinationFactor = 0.00f;
    this->ReceiveDecals = false;
    this->AffectDistanceFieldLighting = true;
    this->ConstrcutionBasicScienceReceiveChance = 0.00f;
    this->MaxStackSize = 99999;
    this->UpgradeItem = NULL;
    this->UsePreviewMeshForEditor = false;
}

