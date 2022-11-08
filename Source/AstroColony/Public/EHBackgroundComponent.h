#pragma once
#include "CoreMinimal.h"
#include "EHHUDUUIComponent.h"
#include "EHBackgroundComponent.generated.h"

class UEHBackgroundViewModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHBackgroundComponent : public UEHHUDUUIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHBackgroundViewModel* BackgroundViewModel;
    
public:
    UEHBackgroundComponent();
};

