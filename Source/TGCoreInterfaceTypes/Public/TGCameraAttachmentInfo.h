#pragma once
#include "CoreMinimal.h"
#include "TGCameraAttachmentInfo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FTGCameraAttachmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    TGCOREINTERFACETYPES_API FTGCameraAttachmentInfo();
};

