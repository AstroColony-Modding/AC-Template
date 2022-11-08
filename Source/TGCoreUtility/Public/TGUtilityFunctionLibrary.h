#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttachedActorSpawnParams.h"
#include "ActorsInSphereParams.h"
#include "TGUtilityFunctionLibrary.generated.h"

class AActor;
class UActorComponent;
class UCurveFloat;
class UObject;
class APlayerController;

UCLASS(Blueprintable)
class TGCOREUTILITY_API UTGUtilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTGUtilityFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnAttachedActor(const FAttachedActorSpawnParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ScaleCurveAndCalculateValueAtTime(UPARAM(Ref) UCurveFloat*& Curve, float MinValue, float MaxValue, float MaxTime, float CurrentTimeSinceStart);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOneOf(const UObject* Object, const TArray<UClass*>& ClassTypes);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestActorToScreenCentre(const APlayerController* PlayerController, const TArray<AActor*>& ActorCandidates, float MaxScreenHeightFractionFromCentre);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> FindAllActorsInSphere(const FActorsInSphereParams& Params);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentToActor(AActor* Actor, TSubclassOf<UActorComponent> ActorComponentClass);
    
};

