#include "TGUtilityFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class APlayerController;
class UActorComponent;
class UCurveFloat;
class UObject;

AActor* UTGUtilityFunctionLibrary::SpawnAttachedActor(const FAttachedActorSpawnParams& Params) {
    return NULL;
}

float UTGUtilityFunctionLibrary::ScaleCurveAndCalculateValueAtTime(UCurveFloat*& Curve, float MinValue, float MaxValue, float MaxTime, float CurrentTimeSinceStart) {
    return 0.0f;
}

bool UTGUtilityFunctionLibrary::IsOneOf(const UObject* Object, const TArray<UClass*>& ClassTypes) {
    return false;
}

AActor* UTGUtilityFunctionLibrary::GetClosestActorToScreenCentre(const APlayerController* PlayerController, const TArray<AActor*>& ActorCandidates, float MaxScreenHeightFractionFromCentre) {
    return NULL;
}

TArray<AActor*> UTGUtilityFunctionLibrary::FindAllActorsInSphere(const FActorsInSphereParams& Params) {
    return TArray<AActor*>();
}

UActorComponent* UTGUtilityFunctionLibrary::AddComponentToActor(AActor* Actor, TSubclassOf<UActorComponent> ActorComponentClass) {
    return NULL;
}

UTGUtilityFunctionLibrary::UTGUtilityFunctionLibrary() {
}

