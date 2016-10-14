/**
 *  This file provides an example of using getopt to parse
 *  command line options. 
 *  
 *  
 *  Author: Sharon Westfall
 *  Created: 10/07/2016
 *  
 *  
 */

#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //exit
#include <string>

using namespace std;
bool a_specified;
bool b_specified; 

/**
 * Print the usage statement. 
 * 
 * @author Sharon Westfall (10/7/2016)
 * 
 * @param exit_code 
 */
void usage(int exit_code) {
    cerr << "Usage: foo [options]" << endl
        <<  endl
        << "Options: (*mandatory)" << endl
        << "  -a filename      a sample option with no argument" << endl
        << "  -b filename      another sample option with no argument" << endl
        << "* -c filename      a mandatory option with an argument" << endl
        << endl;
    exit(exit_code);
}


/**
 * Parse the command line options.
 * 
 * @author Sharon Westfall (10/7/2016)
 * 
 * @param argc the number of arguments
 * @param argv a vector containing the arguments
 */
void parse_command_line(int argc, char **argv) {
    int opt;
    extern char *optarg;
    extern int optind, optopt, opterr;
    string c_arg = "";

    while ((opt = getopt(argc, argv, ":abc:")) != -1) {
        switch (opt) {
        case 'a' :
            cout << "option -a specified" << endl;
            break;
        case 'b' :
            cout << "option -b specfied" << endl;
            break;
        case 'c' :
            c_arg = optarg;
            cout << "option -c specified, c_arg is " << c_arg << endl;
            break;
        case ':':
            printf("-%c without filename\n", optopt);
            break;
        case '?':
            printf("unknown arg %c\n", optopt);
            break;
        default:
            usage(1);
            break;
        }
    }

    // Require c to have an argument
    if (c_arg.empty()) {
        cerr << "Missing mandatory option -c" << endl;
        usage(1);
    }
}



int main(int argc, char **argv) {
    parse_command_line(argc, argv);
    return 0;
}
