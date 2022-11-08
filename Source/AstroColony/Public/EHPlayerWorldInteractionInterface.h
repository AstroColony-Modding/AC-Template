#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHInteractionInterface.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerActionType.h"
#include "EHJobModeType.h"
#include "EHPlayerWorldInteractionInterface.generated.h"

class UTexture2D;
class UWorldInteractiveInfoWidget;

UINTERFACE()
class ASTROCOLONY_API UEHPlayerWorldInteractionInterface : public UEHInteractionInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHPlayerWorldInteractionInterface : public IEHInteractionInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorSpawned(bool ShouldMoveToDestination, FVector DestinationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldActorClick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasExplicitInteractions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UWorldInteractiveInfoWidget> GetWorldInteractiveInfoWidgetClass();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractionDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAvailableActionsBits();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EPlayerActionType, EHJobModeType> GetActionTypeJobModes();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EPlayerActionType, FText> GetActionNames();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetActionIcon();
    
};

