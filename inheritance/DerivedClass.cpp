#include "DerivedClass.h"

string DerivedClass::to_string() {
    string local;
    local.append(BaseClass::to_string());
    local.append(", baseFloat=");
    local.append(std::to_string(derivedFloat));
    return local;
}

