#include "MenuData.h"

FMenuData::FMenuData() {
    this->ParentMenuType = EMenuType::None;
    this->MenuType = EMenuType::None;
    this->IsEnabledByDefault = false;
    this->PlatformVisibility = EEHMenuPlatformVisibility::BOTH;
}

