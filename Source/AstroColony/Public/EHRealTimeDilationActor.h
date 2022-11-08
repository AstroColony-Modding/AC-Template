#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHSaveGameInterface.h"
#include "EHRealTimeDilationActor.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHRealTimeDilationActor : public AActor, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeDilationChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeDilationChanged OnTimeDilationChanged;
    
    AEHRealTimeDilationActor();
    UFUNCTION(BlueprintCallable)
    void SetGlobalTimeDilation(float GlobalTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTimeDilation(float TimeDilationChange);
    
    
    // Fix for true pure virtual functions not being implemented
};

