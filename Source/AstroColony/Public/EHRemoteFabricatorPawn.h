#pragma once
#include "CoreMinimal.h"
#include "EHInteractivePawn.h"
#include "EHRemoteFabricatorPawn.generated.h"

class AActor;
class UEHHierarchicalInstancedStaticMeshComponent;
class UEHRemoteFabricatorObject;
class USceneComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHRemoteFabricatorPawn : public AEHInteractivePawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHierarchicalInstancedStaticMeshComponent* HISMExpeditionDrones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHierarchicalInstancedStaticMeshComponent* HISMComingBackDrones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RemotlyConstructedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHRemoteFabricatorObject* RemoteFabricatorObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    AEHRemoteFabricatorPawn();
};

