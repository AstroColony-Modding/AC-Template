#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneHookSection.h"
#include "MovieSceneGameplayCueKey.h"
#include "MovieSceneGameplayCueSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGameplayCueKey Cue;
    
public:
    //UMovieSceneGameplayCueSection();
};

