#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "UObject/NoExportTypes.h"
#include "EHHangar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHHangar : public UEHCraftingObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HangarExitOffset;
    
public:
    UEHHangar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHangarDesignerOpen();
    
};

