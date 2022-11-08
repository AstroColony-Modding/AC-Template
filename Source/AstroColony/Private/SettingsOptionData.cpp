#include "SettingsOptionData.h"

FSettingsOptionData::FSettingsOptionData() {
    this->ParentCategoryType = ESettingsCategoryType::None;
    this->SettingOptionType = ESettingOptionType::None;
    this->WidgetType = ESettingWidgetType::None;
    this->HasExtraIndent = false;
    this->IsEnabled = false;
    this->ShouldBeConstructed = false;
    this->HasDynamicOptions = false;
    this->PreviewType = ESettingPreviewType::None;
}

