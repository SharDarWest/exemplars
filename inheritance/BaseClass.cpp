#include "BaseClass.h"

string BaseClass::to_string() {
    string local;
    local.append("baseString=");
    local.append(baseString);
    local.append(", baseNumber=");
    local.append(std::to_string(baseNumber));
    return local;
}

void BaseClass::haveFunWithPerson(Person &someone) {
    someone.setFirstName("Fatty");
    someone.setLastName("McFatFace");
    cout << "BaseClass::haveFunWithPerson: address of someone = " << &someone << endl;
}
void BaseClass::noMessWithPerson(const Person &someone) {
    // not allowed to call setters
//  someone.setFirstName("Nope");
//  someone.setLastName("McNopeFace");
    cout << "BaseClass::noMessWithPerson, " << someone.getFullName() << endl;
}
