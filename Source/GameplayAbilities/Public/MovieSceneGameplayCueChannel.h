#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "MovieSceneGameplayCueKey.h"
#include "MovieSceneGameplayCueChannel.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneGameplayCueKey> KeyValues;
    
public:
    GAMEPLAYABILITIES_API FMovieSceneGameplayCueChannel();
};

