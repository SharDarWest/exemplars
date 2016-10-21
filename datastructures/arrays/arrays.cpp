#include <iostream>
#include <array>

using namespace std;

int main (int argc, char *argv[])
{


    typedef	std::array<std::string, 7>	FileSpecificationList;

    // Initialize the array. Apparently, this can be done using several
    // different formats:
    // --using just a single pair of braces
    // --using two pairs of braces
    // --both of the above with an assignment operator in front of 
    //   the braces.
    FileSpecificationList myFList={{
        "one",
        "two",
        "three",
        "four" }};


    cout << "Start" << endl;
                
    for (const auto& item : myFList) {
        cout << "item = " << item << endl;
    }

   cout << "Let's get 'one': " << myFList[0] << endl; 

    cout << "Done!" << endl;
    return(0);
}

