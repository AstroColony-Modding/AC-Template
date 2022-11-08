#pragma once
#include "CoreMinimal.h"
#include "EHSpecialisticProductionObject.h"
#include "EHFarmObject.generated.h"

class UEHDeviceItem;
class UEHPlantMeshAsset;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHFarmObject : public UEHSpecialisticProductionObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlantChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHDeviceItem* FarmFieldItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlantChanged OnPlantChanged;
    
    UEHFarmObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHPlantMeshAsset* GetPlantToPlant();
    
};

