#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TGCodingStandardExampleActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ATGCodingStandardExampleActor : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WantsToSprint, meta=(AllowPrivateAccess=true))
    bool WantsToSprint;
    
public:
    ATGCodingStandardExampleActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WantsToSprint();
    
};

