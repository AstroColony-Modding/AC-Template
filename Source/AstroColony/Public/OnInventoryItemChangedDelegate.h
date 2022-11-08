#pragma once
#include "CoreMinimal.h"
#include "OnInventoryItemChangedDelegate.generated.h"

class UEHItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemChanged, bool, bAdded, UEHItem*, Item);

