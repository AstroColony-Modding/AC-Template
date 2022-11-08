#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MOBaseNode.generated.h"

class UMOBaseNode;
class UMission;

UCLASS(Blueprintable)
class MISSIONOBJECTIVES_API UMOBaseNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMOBaseNode*> ChildNodes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bNodeIsActive;
    
private:
    UPROPERTY(EditAnywhere)
    uint32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMOBaseNode*> ParentNodes;
    
public:
    UMOBaseNode();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsActive();
    
    UFUNCTION(BlueprintCallable)
    UMission* GetMission();
    
};

