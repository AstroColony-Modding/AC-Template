#pragma once
#include "CoreMinimal.h"
#include "ScreenDefinition.generated.h"

class UTGUIScreen;
class UEHScreenViewModel;

USTRUCT(BlueprintType)
struct FScreenDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTGUIScreen> ScreenTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEHScreenViewModel> ViewModelTemplate;
    
    ASTROCOLONY_API FScreenDefinition();
};

