#pragma once
#include "CoreMinimal.h"
#include "BlueprintGetFriendsListDelegateDelegate.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "GetFriendsCallbackProxy.generated.h"

class UGetFriendsCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnFailure;
    
    UGetFriendsCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGetFriendsCallbackProxy* GetAndStoreFriendsList(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

