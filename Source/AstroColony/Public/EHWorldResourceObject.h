#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractableObject.h"
#include "EHInteractionInterface.h"
#include "EHVisitedByAIInterface.h"
#include "EHWorldResourceObject.generated.h"

class UEHItem;
class UEHWorldItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHWorldResourceObject : public UEHInteractableObject, public IEHInteractionInterface, public IEHVisitedByAIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResourcePicked);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TotalNumHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumOfHits;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourcePicked OnResourcePicked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHWorldItem* WorldItem;
    
public:
    UEHWorldResourceObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceMinedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceHit(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceExtracted(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHItem* GetHarvestedItem();
    
    
    // Fix for true pure virtual functions not being implemented
};

