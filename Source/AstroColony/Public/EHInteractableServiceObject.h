#pragma once
#include "CoreMinimal.h"
#include "EHInteractableObject.h"
#include "EHVisitedByAIInterface.h"
#include "EHInteractableServiceObject.generated.h"

class UEHAIObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAIInsideChanged);

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHInteractableServiceObject : public UEHInteractableObject, public IEHVisitedByAIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIInsideChanged OnAIInsideChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHAIObject*> AIsInside;
    
    UPROPERTY(EditAnywhere)
    uint8 AIInsideCount;
    
public:
    UEHInteractableServiceObject();
    
    // Fix for true pure virtual functions not being implemented
};

