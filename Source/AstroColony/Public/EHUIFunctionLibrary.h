#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHItemInstance.h"
#include "UObject/NoExportTypes.h"
#include "EHUIFunctionLibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEHUIFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetItemsFormattedText(const TArray<FEHItemInstance>& ItemInstances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreWidgetsUnderLocation(const TArray<UWidget*> Widgets, const FVector2D& AbsoluteCoordinate);
    
};

