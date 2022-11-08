#pragma once
#include "CoreMinimal.h"
#include "Components/NamedSlot.h"
#include "TGNamedSlot.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNamedSlotAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNamedSlotRemoved);

UCLASS(Blueprintable)
class TGCOREUI_API UTGNamedSlot : public UNamedSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNamedSlotAdded OnNamedSlotAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNamedSlotRemoved OnNamedSlotRemoved;
    
    UTGNamedSlot();
};

