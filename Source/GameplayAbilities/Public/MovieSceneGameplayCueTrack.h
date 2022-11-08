#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneGameplayCueEventDelegate.h"
#include "MovieSceneGameplayCueTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneGameplayCueTrack();
    UFUNCTION(BlueprintCallable)
    static void SetSequencerTrackHandler(FMovieSceneGameplayCueEvent InGameplayCueTrackHandler);
    
};

