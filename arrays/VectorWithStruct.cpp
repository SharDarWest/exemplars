#include <iostream>
#include <array>

using namespace std;

int main (int argc, char *argv[])
{

    struct test {
        string id;
        size_t pos;
        char expected;
    };

    std::vector<test> tests = {
        {"chr1", 1,   '0'},  // boundary value: first char of first line
        {"chr1", 22,  'V'},  // can I find a second value on the same line?
        {"chr1", 50,  '1'},  // boundary value: last char of first line
        {"chr1", 51,  '2'},  // boundary value: first char of second line
        {"chr1", 100, '3'},  // boundary value: last char of second line
        {"chr1", 122, 'W'},  // can I find an intermediate value on a line with no other targets?
        {"chr1", 122, 'W'},  // can I read it again?
        {"chr1", 123, 't'},  // can I read the next sequential character?
        {"chr1", 200, '5'},  // boundary value: last char of last line in a section
        {"chr2", 1,   '6'},  // boundary value: first char of first line of a new section
        {"chr2", 50,  '7'},  // boundary value: last char of first line of a new section
        {"chr2", 208, 'X'},  // can I find an intermediate value on a line with no other reads in the second section?
        {"chr2", 338, 'Y'},  // Another intermediate value read alone on a line.
        {"chr2", 401, '8'},  // boundary value: first char of last line in the file.
        {"chr2", 431, 'Z'},  // intermediate value
        {"chr2", 450, '9'},  // boundary value: last char of the file
    };


    test aTest;
    std::vector<test>::iterator it = tests.begin();

    while ( myReader.isValid() && (it != tests.end()) ) {
        aTest = *it;
        cout << "it.id =" << it.id << "it.pos = " << it.pos << "it.expected = " << it.expected << endl;
        ++it;
    }

    cout << "Done!" << endl;
    return(0);
}

