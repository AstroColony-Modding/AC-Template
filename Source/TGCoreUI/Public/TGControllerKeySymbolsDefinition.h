#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETGInputControllerType.h"
#include "TGControllerKeySymbolsDefinition.generated.h"

class UFont;
class UDataTable;

USTRUCT(BlueprintType)
struct FTGControllerKeySymbolsDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETGInputControllerType> ControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ControllerInputSymbols;
    
    TGCOREUI_API FTGControllerKeySymbolsDefinition();
};

