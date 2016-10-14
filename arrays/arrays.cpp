#include <iostream>
#include <array>

using namespace std;

int main (int argc, char *argv[])
{


    // this is a comment I think it's gonig to wrap
    // slfkjslfkjs fsldjf sdfkls dlfkjs dlfj lfj sldfkj sdlfkj 
    // sdlkfjs dlfjks dlkfjs Here is some text I typed in the middle
    // of the comment  dlfkj sdlfkj sdlfkjs dlfkj sdlfkjs dlfj sdlfk
    // jsdlfkj sdlfkjsd lfkjsd lfkj dlfkjsd fklsdj fljsd flksdjf 
    // lsdkjf slkfj 
    typedef	std::array<std::string, 7>	FileSpecificationList;
    FileSpecificationList myFList={{
        "one",
        "two",
        "three",
        "four" }};


    cout << "Start" << endl;
                
    for (auto& item : myFList) {
        cout << "item = " << item << endl;
    }

   cout << "Let's get 'one': " << myFList[0] << endl; 

    cout << "Done!" << endl;
    return(0);
}

