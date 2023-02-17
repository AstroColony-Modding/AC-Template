#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneHookSection.h"
#include "MovieSceneGameplayCueChannel.h"
#include "MovieSceneGameplayCueTriggerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGameplayCueChannel Channel;
    
public:
    //UMovieSceneGameplayCueTriggerSection();
};

