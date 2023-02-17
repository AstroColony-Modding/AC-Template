#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETGInputControllerType.h"
#include "TGControllerKeySymbolsDefinition.generated.h"

class UDataTable;
class UFont;

USTRUCT(BlueprintType)
struct FTGControllerKeySymbolsDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETGInputControllerType> ControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ControllerInputSymbols;
    
    TGCOREUI_API FTGControllerKeySymbolsDefinition();
};

