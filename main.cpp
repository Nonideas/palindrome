#include "palindrome.h"
#include <gtest/gtest.h>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    if (argc >= 2) {
        ifstream inp(argv[1]);
        if (inp) {
            stringstream stream;
            stream << inp.rdbuf();
            inp.close();
            Palindrome palindrome(stream);
            palindrome.output_stream();
        }
        return RUN_ALL_TESTS();
    }
    string input;
    getline(cin, input);
    stringstream ss(input);
    Palindrome palindrome(ss);
    palindrome.output_stream();
    return RUN_ALL_TESTS();
}