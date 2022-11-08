#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayCueParameters.h"
#include "EGameplayCueEvent.h"
#include "MovieSceneGameplayCueEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FMovieSceneGameplayCueEvent, AActor*, Target, FGameplayTag, GameplayTag, const FGameplayCueParameters&, Parameters, TEnumAsByte<EGameplayCueEvent::Type>, Event);

