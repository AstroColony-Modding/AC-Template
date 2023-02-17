#pragma once
#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "GCInterface.h"
#include "TGIGameInstanceUI.h"
#include "TGGameInstance.generated.h"

class UObject;
class UUGCRegistry;

UCLASS(Blueprintable, NonTransient)
class TGCOREUI_API UTGGameInstance : public UAdvancedFriendsGameInstance, public ITGIGameInstanceUI, public IGCInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUGCRegistry* UGCRegistry;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* UISystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* UIDataProviderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* UISystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* UIDataProvider;
    
public:
    UTGGameInstance();
    
    // Fix for true pure virtual functions not being implemented
};

