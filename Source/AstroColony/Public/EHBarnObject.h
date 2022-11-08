#pragma once
#include "CoreMinimal.h"
#include "EHSpecialisticProductionObject.h"
#include "EHBarnObject.generated.h"

class UEHDeviceItem;
class UEHItem;
class UEHAnimalMeshAsset;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBarnObject : public UEHSpecialisticProductionObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimalChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHDeviceItem* BarnFieldItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* FeedItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimalChanged OnAnimalChanged;
    
    UEHBarnObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHAnimalMeshAsset* GetAnimalToBreed();
    
};

