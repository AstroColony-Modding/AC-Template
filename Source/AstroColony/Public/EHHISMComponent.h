#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "EInstanceCellType.h"
#include "EHHISMComponent.generated.h"

class UEHItem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHHISMComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstanceCellType InstanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UEHHISMComponent();
    UFUNCTION(BlueprintCallable)
    void ResetRenderState();
    
    UFUNCTION(BlueprintCallable)
    void HISMMarkRenderStateDirty();
    
};

