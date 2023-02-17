#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PathFindRequest.h"
#include "EHPathfindingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHPathfindingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestedPathFound, const TArray<FIntVector>&, Path);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestedPathFound OnRequestedPathFound;
    
    UEHPathfindingComponent();
    UFUNCTION(BlueprintCallable)
    void RequestFindPath(FPathFindRequest PathFindRequest);
    
    UFUNCTION(BlueprintCallable)
    bool IsRunning();
    
};

