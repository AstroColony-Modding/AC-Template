#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionBlendMaterialAttributesBarycentric.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionBlendMaterialAttributesBarycentric : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialAttributesInput A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialAttributesInput B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialAttributesInput C;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput AlphaA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput AlphaB;
    
    UMaterialExpressionBlendMaterialAttributesBarycentric();
};

