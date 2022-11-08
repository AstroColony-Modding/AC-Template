#pragma once
#include "CoreMinimal.h"
#include "EHNetwork.h"
#include "EHSignalNetwork.generated.h"

class UEHItem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSignalChanged);

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSignalNetwork : public UEHNetwork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignalChanged OnSignalChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, int32> TotalSignal;
    
    UEHSignalNetwork();
};

