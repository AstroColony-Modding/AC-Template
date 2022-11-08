#include "UIActionMapping.h"

FUIActionMapping::FUIActionMapping() {
    this->ButtonBarAction = EButtonBarAction::BACK;
    this->Priority = 0;
    this->VisibilityWithControllers = EButtonBarItemVisibility::NONE;
}

