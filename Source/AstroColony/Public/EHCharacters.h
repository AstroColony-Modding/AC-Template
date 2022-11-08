#pragma once
#include "CoreMinimal.h"
#include "EHCharacters.generated.h"

class AEHCharacter;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEHCharacter*> Characters;
    
    FEHCharacters();
};

