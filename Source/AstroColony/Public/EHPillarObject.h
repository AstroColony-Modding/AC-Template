#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHColliderInterface.h"
#include "EHInteractableObject.h"
#include "EHPillarObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHPillarObject : public UEHInteractableObject, public IEHColliderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector ColliderSupportCoord;
    
    UEHPillarObject();
    
    // Fix for true pure virtual functions not being implemented
};

