#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TTBaseNode.generated.h"

class UTTBaseNode;

UCLASS(Blueprintable)
class TECHTREE_API UTTBaseNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodePosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodePosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTTBaseNode*> ParentNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTTBaseNode*> ChildNodes;
    
private:
    UPROPERTY(EditAnywhere)
    uint32 UniqueID;
    
public:
    UTTBaseNode();
};

