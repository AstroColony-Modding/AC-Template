#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "EHAcceptPushedResourceInterface.h"
#include "EHItemInstance.h"
#include "ELineDirection.h"
#include "EHColliderInterface.h"
#include "UObject/NoExportTypes.h"
#include "EDockingState.h"
#include "EHConnectorStationObject.generated.h"

class UEHItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHConnectorStationObject : public UEHCraftingObject, public IEHAcceptPushedResourceInterface, public IEHColliderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDockingStateChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConveyorLinesChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> AstronautOrdersCost;
    
    UPROPERTY(EditAnywhere)
    uint8 OrderedAstronautsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredDockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELineDirection> ConveyLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector AIEntranceCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> LinesCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ConveyorLineItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConveyorLinesChanged OnConveyorLinesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDockingStateChanged OnDockingStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDockingState DockingState;
    
    UEHConnectorStationObject();
    UFUNCTION(NetMulticast, Reliable)
    void Multi_DestructConveyorLine(const uint8 LineNumber);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multi_ConstructConveyorLine(const uint8 LineNumber, const bool ConveyorReverseDirection);
    
    UFUNCTION(BlueprintCallable)
    void DestructConveyorLine(const uint8 LineNumber);
    
    UFUNCTION(BlueprintCallable)
    void ConstructConveyorLine(const uint8 LineNumber, const bool ConveyorReverseDirection);
    
    
    // Fix for true pure virtual functions not being implemented
};

