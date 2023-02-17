#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHCraftingObject.h"
#include "EHItemInstance.h"
#include "EHDrillObject.generated.h"

class UEHWorldResourceObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDrillObject : public UEHCraftingObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBigDrill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHWorldResourceObject* ResourceToMine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector DrillCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrilling;
    
    UEHDrillObject();
    UFUNCTION(BlueprintCallable)
    void StartDrilling();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_NotifyDrillMoved(const FIntVector& Coord);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEHItemInstance> GetProcessedItems();
    
};

