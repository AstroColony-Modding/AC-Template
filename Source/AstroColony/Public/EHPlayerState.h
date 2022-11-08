#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "EHPlayerState.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerInfoChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInfoChanged OnPlayerInfoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Name, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Ready, meta=(AllowPrivateAccess=true))
    bool Ready;
    
    AEHPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateReady(const bool ReadyIn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Ready();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Name();
    
};

