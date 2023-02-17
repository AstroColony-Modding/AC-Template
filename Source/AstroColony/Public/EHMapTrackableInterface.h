#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelShapeType.h"
#include "EVoxelTerrainType.h"
#include "EEHTrackableType.h"
#include "EHMapTrackableInterface.generated.h"

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHMapTrackableInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHMapTrackableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDisplayName(const FText& DisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVisibleOnMap(const bool RadarActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsKnown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EEHTrackableType GetTrackableType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVoxelTerrainType GetTerrainType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<int32> GetResourceCounts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetMiddleOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetColor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVoxelShapeType GeShapeType();
    
};

