#pragma once
#include "CoreMinimal.h"
#include "EHDeviceObject.h"
#include "EHLogicObject.generated.h"

class UEHItem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectedResourcesChanged);

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHLogicObject : public UEHDeviceObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHItem*> SelectedResources;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedResourcesChanged OnSelectedResourcesChanged;
    
    UEHLogicObject();
};

