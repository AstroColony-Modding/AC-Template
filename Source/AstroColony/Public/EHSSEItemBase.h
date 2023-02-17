#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHSSEItemBase.generated.h"

class UEHItem;
class UEHSSEInitializer;

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API AEHSSEItemBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSSEInitializer* SSEInitializer;
    
    AEHSSEItemBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UEHItem* GetItem();
    
};

