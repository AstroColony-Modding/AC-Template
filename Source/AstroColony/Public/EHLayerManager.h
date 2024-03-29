#pragma once
#include "CoreMinimal.h"
#include "TGUILayerManager.h"
#include "EEHToastNature.h"
#include "EEHUIOverlayID.h"
#include "EEHUIUnderlayID.h"
#include "EToastImageType.h"
#include "EHLayerManager.generated.h"

class UDataTable;
class UEHModsListViewModel;
class UEHTechnologyAsset;
class UEHToastContainerViewModel;
class USoundBase;
class UTGUILayer;
class UTGViewModel;
class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHLayerManager : public UTGUILayerManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHUIOverlayID, TSoftClassPtr<UTGUILayer>> OverlayTemplateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHUIUnderlayID, TSoftClassPtr<UTGUILayer>> UnderlayTemplateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlayContainerZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnderlayContainerZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUILayer*> PinnedOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUILayer*> PinnedUnderlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ButtonBarDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EToastImageType, UTexture2D*> ToastImageReferences;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ToastSounds[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> TechnologyToastSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHToastContainerViewModel* ToastContainerViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsListViewModel* ModsListViewModel;
    
public:
    UEHLayerManager();
    UFUNCTION(BlueprintCallable)
    void SetDataContextForOpenUnderlay(const EEHUIUnderlayID UnderlayID, UTGViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable)
    void SetDataContextForOpenOverlay(const EEHUIOverlayID OverlayID, UTGViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable)
    void QueueTechnologyToast(UEHTechnologyAsset* TechnologyAsset, const float ToastDuration);
    
    UFUNCTION(BlueprintCallable)
    void QueueImageToast(const FText& InToastTitle, const FText& InToastDescription, UTexture2D* InIcon, const EEHToastNature Nature, const float ToastDuration, const bool PlaySound);
    
    UFUNCTION(BlueprintCallable)
    UTGUILayer* OpenUnderlay(const EEHUIUnderlayID UnderlayID, UTGViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable)
    UTGUILayer* OpenOverlay(const EEHUIOverlayID OverlayID, UTGViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable)
    void OpenModsHUBWidget(const FString& ModToNavigate);
    
    UFUNCTION(BlueprintCallable)
    void OpenAllAvailableLayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlayOpen(const EEHUIOverlayID OverlayID);
    
    UFUNCTION(BlueprintCallable)
    void CloseUnderlay(const EEHUIUnderlayID UnderlayID, bool bRelease);
    
    UFUNCTION(BlueprintCallable)
    void CloseOverlay(const EEHUIOverlayID OverlayID, bool bRelease);
    
    UFUNCTION(BlueprintCallable)
    void CloseModsHUBWidget();
    
};

