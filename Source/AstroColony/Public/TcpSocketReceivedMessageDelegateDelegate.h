#pragma once
#include "CoreMinimal.h"
#include "TcpSocketReceivedMessageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FTcpSocketReceivedMessageDelegate, int32, ConnectionId, UPARAM(Ref) TArray<uint8>&, Message);

