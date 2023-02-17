#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "EHStaticMeshChildComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHStaticMeshChildComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChildActorTemplate;
    
    UEHStaticMeshChildComponent();
};

