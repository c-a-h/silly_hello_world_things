// dumb_hello_world_things.cpp : Defines the entry point for the application.
//

#include "dumb_hello_world_things.h"

using namespace std;

enum LogLevelEnum { DEBUG, PRODUCTION };
LogLevelEnum log_level = DEBUG;

// Take as input a string, return it reversed
void reverse_string(string& input_string) {

    auto string_len = input_string.size();
    for (auto i = 0; i < string_len / 2; i++) {
        // do in-place swap of characters
        auto temp_character = input_string[i];
        input_string[i] = input_string[string_len - 1 - i];
        input_string[string_len - 1 - i] = temp_character;
        if (log_level == DEBUG) {
            cout << "iteration " << i << ": '" << input_string << endl;
        }
    }
}

// A function to print strings. We may want to have formattting options or reuse this elsewhere in the future.
void print_string(string& input_string) {
    cout << input_string << endl;
}

const char* INPUT_STRING = "hello_worldS!";
// Task: reverse a string that is given in command line argument 1, print it
int main(int argc, char* argv[]) {
    // Capture the string
    const char* input_string = INPUT_STRING;
    // Call the function to reverse it
    string stringified_input = input_string;
    reverse_string(stringified_input);
    // Call the function to print it
    print_string(stringified_input);
}