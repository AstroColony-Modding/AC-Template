#pragma once
#include "CoreMinimal.h"
#include "BlueprintFindFriendSessionDelegateDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPUniqueNetId.h"
#include "FindFriendSessionCallbackProxy.generated.h"

class UFindFriendSessionCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionDelegate OnFailure;
    
    UFindFriendSessionCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindFriendSessionCallbackProxy* FindFriendSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);
    
};

