#pragma once
#include "CoreMinimal.h"
#include "NetSerializeScriptStructCache.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FNetSerializeScriptStructCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScriptStruct*> ScriptStructs;
    
    GAMEPLAYABILITIES_API FNetSerializeScriptStructCache();
};

