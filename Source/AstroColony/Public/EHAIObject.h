#pragma once
#include "CoreMinimal.h"
#include "EHItemsContainer.h"
#include "EHIndicationInterface.h"
#include "AIWorkRequest.h"
#include "EAIProfession.h"
#include "UObject/NoExportTypes.h"
#include "EHAIObject.generated.h"

class UEHAIExternalDependenciesDataObject;
class UEHItem;
class AEHGrid;
class UEHInteractableObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIObject : public UEHItemsContainer, public IEHIndicationInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWorkRequestStateChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAIProfession AIProfession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachedResourceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachedResourceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ResourceHolderItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* AttachedResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* AttachedVisualItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachedVisualItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIntVector CreationCellCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMovingOnPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNudged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector LastRequestedPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIWorkRequest CurrentWorkRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector NextDirectionCoord;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorkRequestStateChanged OnWorkRequestStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHAIExternalDependenciesDataObject* AIExternalDependenciesDataObject;
    
public:
    UEHAIObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TransferAIToAnotherGrid(AEHGrid* AnotherGrid);
    
    UFUNCTION(BlueprintCallable)
    void RequestPath(const FIntVector& DestinationCoord, const int32 RetryCountIn);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveAttachedItem();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddAttachedItem(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransferedTo(AEHGrid* TestedGrid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransfered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideBuilding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWorkplaceAssigned();
    
    UFUNCTION(BlueprintCallable)
    void GoOnPathDirectly(const TArray<FIntVector>& FullPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetWorkplace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetNormalizedDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetEnteredBuilding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHItem* GetCarriedItem();
    
    
    // Fix for true pure virtual functions not being implemented
};

