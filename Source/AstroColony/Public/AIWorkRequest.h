#pragma once
#include "CoreMinimal.h"
#include "EAIWorkRequestState.h"
#include "EAIWorkActionType.h"
#include "UObject/NoExportTypes.h"
#include "AIWorkRequest.generated.h"

class UEHInteractableObject;
class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FAIWorkRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIWorkRequestState RequestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIWorkActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* PrimaryDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PrimaryActionCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* SecondaryDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ResrouceToTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DemandClass;
    
    FAIWorkRequest();
};

