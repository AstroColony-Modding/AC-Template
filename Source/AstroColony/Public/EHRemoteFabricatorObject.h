#pragma once
#include "CoreMinimal.h"
#include "EHSpecialisticProductionObject.h"
#include "EHRemoteFabricatorObject.generated.h"

class AActor;
class UEHAIFabricatorDroneObject;
class UEHDeviceItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHRemoteFabricatorObject : public UEHSpecialisticProductionObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRemoteConstructionChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHDeviceItem* FabricatorDroneItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RemoteConstruction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoteConstructionChanged OnRemoteConstructionChanged;
    
    UEHRemoteFabricatorObject();
    UFUNCTION(BlueprintCallable)
    void SelectRemoteConstruction(AActor* NewRemoteConstruction);
    
    UFUNCTION(BlueprintCallable)
    void DroneReturnedFromExpedition(UEHAIFabricatorDroneObject* FabricatorDrone);
    
    UFUNCTION(BlueprintCallable)
    void CancelRemoteConstruction();
    
};

