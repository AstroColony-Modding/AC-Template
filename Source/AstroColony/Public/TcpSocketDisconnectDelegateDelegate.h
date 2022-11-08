#pragma once
#include "CoreMinimal.h"
#include "TcpSocketDisconnectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTcpSocketDisconnectDelegate, int32, ConnectionId);

