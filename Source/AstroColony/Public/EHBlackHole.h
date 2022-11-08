#pragma once
#include "CoreMinimal.h"
#include "EHRemotlyConstructedActor.h"
#include "EBlackHoleType.h"
#include "EHMapTrackableInterface.h"
#include "EHBlackHole.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHBlackHole : public AEHRemotlyConstructedActor, public IEHMapTrackableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlackHoleType BlackHoleType;
    
    AEHBlackHole();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOpacity(const float Opacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreated();
    
    
    // Fix for true pure virtual functions not being implemented
};

