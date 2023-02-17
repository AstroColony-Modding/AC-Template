#pragma once
#include "CoreMinimal.h"
#include "EHPartScheme.generated.h"

class UMaterialInstance;
class UStaticMesh;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPartScheme {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> Materials;
    
    FEHPartScheme();
};

