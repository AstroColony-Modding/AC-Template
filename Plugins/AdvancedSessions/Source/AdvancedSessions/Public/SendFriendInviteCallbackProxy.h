#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintSendFriendInviteDelegateDelegate.h"
#include "BPUniqueNetId.h"
#include "SendFriendInviteCallbackProxy.generated.h"

class USendFriendInviteCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSendFriendInviteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSendFriendInviteDelegate OnFailure;
    
    USendFriendInviteCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USendFriendInviteCallbackProxy* SendFriendInvite(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& UniqueNetIDInvited);
    
};

