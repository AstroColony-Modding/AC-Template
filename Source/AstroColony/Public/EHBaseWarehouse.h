#pragma once
#include "CoreMinimal.h"
#include "EHItemInstance.h"
#include "EHStorageObject.h"
#include "EHBaseWarehouse.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBaseWarehouse : public UEHStorageObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> PreviewItems;
    
public:
    UEHBaseWarehouse();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameStarted();
    
};

