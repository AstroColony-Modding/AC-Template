#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "UGCPackage.h"
#include "EHModsOptionViewModel.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHModsOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCPackage UGCPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> Classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Maps;
    
    UEHModsOptionViewModel();
};

