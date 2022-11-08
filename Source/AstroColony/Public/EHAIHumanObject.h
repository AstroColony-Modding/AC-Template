#pragma once
#include "CoreMinimal.h"
#include "EHAIObject.h"
#include "EEHBillboardType.h"
#include "EHHumanNeed.h"
#include "EHHeadMeshes.h"
#include "EHHumanNeedID.h"
#include "EHAIHumanObject.generated.h"

class UEHItem;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIHumanObject : public UEHAIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString HumanName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HumanHeadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHHeadMeshes HeadMeshes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CustomChangesOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHHumanNeed> HumanNeeds;
    
public:
    UEHAIHumanObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_FoodReceived(UEHItem* Food);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_EnableBillboard(const EEHBillboardType BillboardType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_DisableBillboard(const EEHBillboardType BillboardType);
    
    UFUNCTION(BlueprintCallable)
    void InitCollectionData();
    
    UFUNCTION(BlueprintCallable)
    FEHHumanNeed GetHumanNeed(const EHHumanNeedID HumanNeedID);
    
};

