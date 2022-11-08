#pragma once
#include "CoreMinimal.h"
#include "ESettingsCategoryType.h"
#include "Engine/DataTable.h"
#include "SettingsCategoryData.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FSettingsCategoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingsCategoryType SettingsCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingsCategoryType ParentCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MouseKeyboardOnlySubcategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ControllerOnlySubcategories;
    
    FSettingsCategoryData();
};

