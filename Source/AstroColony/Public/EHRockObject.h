#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractableObject.h"
#include "EHInteractionInterface.h"
#include "EHItemInstance.h"
#include "EHVisitedByAIInterface.h"
#include "EHRockObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHRockObject : public UEHInteractableObject, public IEHInteractionInterface, public IEHVisitedByAIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TotalNumHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumOfHits;
    
    UEHRockObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceHit(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceExtracted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHItemInstance GetExtractInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanHit();
    
    
    // Fix for true pure virtual functions not being implemented
};

