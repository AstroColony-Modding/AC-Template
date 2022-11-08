#include "EHProductionObject.h"

bool UEHProductionObject::UsesRecipesForProduction() {
    return false;
}

bool UEHProductionObject::IsWorkplaceForAI() {
    return false;
}

bool UEHProductionObject::IncreaseDedicatedWorkplaceAI() {
    return false;
}

bool UEHProductionObject::HasProducingRecipe() {
    return false;
}

void UEHProductionObject::HandleLoadGameFinished(bool IsLoadedFromSavegame) {
}

float UEHProductionObject::GetSpecialistRatio() {
    return 0.0f;
}

TArray<FEHRecipe> UEHProductionObject::GetRecipes() {
    return TArray<FEHRecipe>();
}

FEHProductionProgress UEHProductionObject::GetRecipeProgress(const FName& RecipeName) {
    return FEHProductionProgress{};
}

float UEHProductionObject::GetProductionRatio(bool RequireSpecialist) {
    return 0.0f;
}

bool UEHProductionObject::DecreaseDedicatedWorkplaceAI() {
    return false;
}

UEHProductionObject::UEHProductionObject() {
    this->ShowProductionItemsContainer = true;
    this->RequiredJobProfession = EAIProfession::None;
    this->MaximumSpecialistsNumber = 5;
    this->DedicatedSpecialistsNumber = 1;
    this->AIInsideCount = 0;
}

