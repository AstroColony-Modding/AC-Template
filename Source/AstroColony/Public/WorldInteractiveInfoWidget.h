#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WorldInteractiveInfoWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UWorldInteractiveInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WorldInteractiveActor;
    
    UWorldInteractiveInfoWidget();
};

