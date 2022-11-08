#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ClientUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FClientUpdate, FVector, RedLocation, FVector, GreenLocation, FVector, BlueLocation, FRotator, RedRotation, FRotator, GreenRotation, FRotator, BlueRotation);

