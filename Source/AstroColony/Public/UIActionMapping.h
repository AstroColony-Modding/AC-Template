#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EButtonBarAction.h"
#include "EButtonBarItemVisibility.h"
#include "UIActionMapping.generated.h"

USTRUCT(BlueprintType)
struct FUIActionMapping : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonBarAction ButtonBarAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonBarItemVisibility VisibilityWithControllers;
    
public:
    ASTROCOLONY_API FUIActionMapping();
};

