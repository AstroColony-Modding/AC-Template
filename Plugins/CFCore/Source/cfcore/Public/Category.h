#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Category.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 gameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString slug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString iconUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime dateModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 classId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 parentCategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 displayIndex;
    
    FCategory();
};

