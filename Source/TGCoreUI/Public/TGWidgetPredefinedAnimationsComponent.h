#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "TGWidgetPredefinedAnimationsComponent.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGCOREUI_API UTGWidgetPredefinedAnimationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> PredefinedAnimationsMasterWidgetTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidgetAnimation*> PredefinedAnimations;
    
public:
    UTGWidgetPredefinedAnimationsComponent();
};

