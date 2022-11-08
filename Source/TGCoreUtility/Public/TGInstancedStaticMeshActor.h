#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TGInstancedStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class TGCOREUTILITY_API ATGInstancedStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ATGInstancedStaticMeshActor();
};

