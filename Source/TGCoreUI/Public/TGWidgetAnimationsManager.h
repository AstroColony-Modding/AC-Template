#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TGWidgetAnimationsManager.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable)
class TGCOREUI_API UTGWidgetAnimationsManager : public UObject {
    GENERATED_BODY()
public:
    UTGWidgetAnimationsManager();
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetPredefinedAnimationWithRenamedTracks(const FName AnimationName, const TArray<FName> WidgetsNames);
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetPredefinedAnimationWithRenamedTrack(const FName AnimationName, const FName WidgetName);
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetPredefinedAnimationWithRemappedTracks(const FName AnimationName, const TMap<FName, FName> OldToNewWidgetNames);
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetPredefinedAnimationByName(const FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetAnimationByName(FName AnimationName);
    
};

