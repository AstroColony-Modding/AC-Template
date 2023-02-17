#pragma once
#include "CoreMinimal.h"
#include "EAIProfession.h"
#include "EHAIHumanObject.h"
#include "EHAIHumanSpecialist.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIHumanSpecialist : public UEHAIHumanObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnProfessionChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProfessionChanged OnProfessionChanged;
    
    UEHAIHumanSpecialist();
    UFUNCTION(BlueprintCallable)
    void ChangeProfession(EAIProfession NewProfession);
    
};

