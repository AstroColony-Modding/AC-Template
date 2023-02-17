#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EHSaveGameInterface.h"
#include "EHSpaceCarryComponent.generated.h"

class AEHGrid;
class AEHSpaceShuttleActor;
class UEHAIItem;
class UEHDockingStationObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHSpaceCarryComponent : public UActorComponent, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAstronautsArrived, uint8, AstronautsCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArrivalDockingStationChanged, UEHDockingStationObject*, ArrivalDockingStation);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEHSpaceShuttleActor> SpaceShuttleActorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceCarryShuttleOrderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UndockRetryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HumanSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HumanEnterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HumanExitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEHAIItem> HumanToMigrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpaceShuttleArrivalTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArrivalDockingStationChanged OnArrivalDockingStationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAstronautsArrived OnAstronautsArrived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEHSpaceShuttleActor* SpaceShuttleActorCached;
    
public:
    UEHSpaceCarryComponent();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHSpaceShuttleActor* GetSpaceShuttleActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetShuttleDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHGrid* GetGridReference();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDockingPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHDockingStationObject* GetArrivalDockingStation();
    
    UFUNCTION(BlueprintCallable)
    void DockSpaceShuttle();
    
    UFUNCTION(BlueprintCallable)
    void DockedFinished();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShuttleUndocked();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AstronautsArrived();
    
    
    // Fix for true pure virtual functions not being implemented
};

