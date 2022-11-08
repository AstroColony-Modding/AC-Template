#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EHMovableSpaceActor.generated.h"

class UStaticMeshComponent;
class UEHPrimitiveComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHMovableSpaceActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovingToDestinationChanged, const bool, IsMovingToDestination);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovableSpaceActorLocationChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpaceVelocity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovingToDestinationChanged OnMovingToDestinationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovableSpaceActorLocationChanged OnMovableSpaceActorLocationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DockingPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealPositionUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DockingStationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHPrimitiveComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedTickWorldOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMovingToDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementShaderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousMovementShaderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationPosition;
    
public:
    AEHMovableSpaceActor();
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShaderMovementUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealMovementUpdate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_VelocityChanged(const FVector& NewSpaceVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AttachActor(AActor* ChildActor);
    
    UFUNCTION(BlueprintCallable)
    void MoveToDestination(const FVector& InDestinationPosition);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSpaceVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector CalculateVelocityForPoints(const FVector& StartPosition, const FVector& EndPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddVelocity(const FVector VelocityChange);
    
};

