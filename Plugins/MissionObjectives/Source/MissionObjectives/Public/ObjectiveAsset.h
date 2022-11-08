#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ObjectiveAsset.generated.h"

UCLASS(Blueprintable)
class MISSIONOBJECTIVES_API UObjectiveAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveID;
    
    UObjectiveAsset();
};

