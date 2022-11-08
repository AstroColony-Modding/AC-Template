#include "EHBillboardsLineComponent.h"

class UTexture2D;

void UEHBillboardsLineComponent::UpdateBillboards(const TArray<UTexture2D*>& Billboards) {
}

void UEHBillboardsLineComponent::RemoveBillboardSprite(UTexture2D* Sprite) {
}

void UEHBillboardsLineComponent::AddBillboardSprite(UTexture2D* Sprite, const uint8 Index) {
}

UEHBillboardsLineComponent::UEHBillboardsLineComponent() {
    this->UseDynamicDepth = false;
    this->DynamicDepthCameraDistance = 0.00f;
    this->BlendMode = 1;
    this->ScaleDownSpritesBasedOnNumber = false;
    this->TotalSpritesSize = 50.00f;
    this->SpriteSize = 64.00f;
    this->Spacing = 64.00f;
    this->U = 0.00f;
    this->UL = 0.00f;
    this->V = 0.00f;
    this->VL = 0.00f;
}

