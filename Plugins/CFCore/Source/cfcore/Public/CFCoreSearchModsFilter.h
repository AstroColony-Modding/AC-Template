#pragma once
#include "CoreMinimal.h"
#include "ECFCoreModLoaderType.h"
#include "ECFCoreModsSearchSortField.h"
#include "ECFCoreSortOrder.h"
#include "CFCoreSearchModsFilter.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCFCoreSearchModsFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 classId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 categoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString searchFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreModsSearchSortField sortField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreSortOrder sortOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreModLoaderType modLoaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gameVersionTypeId;
    
    FCFCoreSearchModsFilter();
};

