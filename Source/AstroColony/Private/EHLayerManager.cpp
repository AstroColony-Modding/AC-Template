#include "EHLayerManager.h"

class UEHTechnologyAsset;
class UTGUILayer;
class UTGViewModel;
class UTexture2D;

void UEHLayerManager::SetDataContextForOpenUnderlay(const EEHUIUnderlayID UnderlayID, UTGViewModel* ViewModel) {
}

void UEHLayerManager::SetDataContextForOpenOverlay(const EEHUIOverlayID OverlayID, UTGViewModel* ViewModel) {
}

void UEHLayerManager::QueueTechnologyToast(UEHTechnologyAsset* TechnologyAsset, const float ToastDuration) {
}

void UEHLayerManager::QueueImageToast(const FText& InToastTitle, const FText& InToastDescription, UTexture2D* InIcon, const EEHToastNature Nature, const float ToastDuration, const bool PlaySound) {
}

UTGUILayer* UEHLayerManager::OpenUnderlay(const EEHUIUnderlayID UnderlayID, UTGViewModel* ViewModel) {
    return NULL;
}

UTGUILayer* UEHLayerManager::OpenOverlay(const EEHUIOverlayID OverlayID, UTGViewModel* ViewModel) {
    return NULL;
}

void UEHLayerManager::OpenModsHUBWidget(const FString& ModToNavigate) {
}

void UEHLayerManager::OpenAllAvailableLayers() {
}

bool UEHLayerManager::IsOverlayOpen(const EEHUIOverlayID OverlayID) {
    return false;
}

void UEHLayerManager::CloseUnderlay(const EEHUIUnderlayID UnderlayID, bool bRelease) {
}

void UEHLayerManager::CloseOverlay(const EEHUIOverlayID OverlayID, bool bRelease) {
}

void UEHLayerManager::CloseModsHUBWidget() {
}

UEHLayerManager::UEHLayerManager() {
    this->OverlayContainerZOrder = 10;
    this->UnderlayContainerZOrder = -10;
    this->ButtonBarDataTable = NULL;
    this->ToastContainerViewModel = NULL;
    this->ModsListViewModel = NULL;
}

