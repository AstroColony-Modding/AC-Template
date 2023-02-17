#pragma once
#include "CoreMinimal.h"
#include "EEHMiningResourceType.h"
#include "EHSpecialisticProductionObject.h"
#include "EHMineObject.generated.h"

class UEHAIMinerObject;
class UEHInteractableObject;
class UEHWorldItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMineObject : public UEHSpecialisticProductionObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMiningResourceChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMiningResourceChanged OnMiningResourceChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHAIMinerObject*> InsideAIMiners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHInteractableObject*> DistanceResourcesCached;
    
public:
    UEHMineObject();
    UFUNCTION(BlueprintCallable)
    UEHWorldItem* GetResourceToMine();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeMiningResource(const EEHMiningResourceType InMiningResource);
    
};

