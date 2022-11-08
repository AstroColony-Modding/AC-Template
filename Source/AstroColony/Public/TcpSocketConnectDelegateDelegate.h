#pragma once
#include "CoreMinimal.h"
#include "TcpSocketConnectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTcpSocketConnectDelegate, int32, ConnectionId);

