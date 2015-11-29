/*
 * =====================================================================================
 *
 *       Filename:  parse.cpp
 *
 *    Description:  :tabe
 *
 *        Version:  1.0
 *        Created:  11/28/2015 12:20:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Jespersen (), gzackwebs@tfwno.gf
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>
#include <cstdlib>
#include <iostream>
#include <cstring>

#include "parse.h"

using namespace std;

vector<int> parse(int argc, char** argv)
{
    int base = 0;
    int standardDeviation = 0;
    int amount = 0;
    int toFile = 0;
    int decimalPlaces = 0;

    if(argc < 2)
    {
        cout << "Run the program with the -h flag\n";
        exit(1);
    }
    
    else
    {
        for(int i = 1; i < argc; i++)
        {
            if     (!strcmp(argv[i], "-h"))
            {
                cout << "\nOptions\n";
                cout << "\t-b: base number, where the numbers center\n" <<
                        "\t-d: standard deviation\n" <<
                        "\t-a: amount of numbers generated\n" <<
                        "\t-p: round to nearest whole number\n" <<
                        "\t-f: generate numbers to a file\n";
                exit(2);
            }
            else if(!strcmp(argv[i], "-b") && argc > i)
            {
                base = atoi(argv[i+1]);
                i++;
            }
            else if(!strcmp(argv[i], "-d") && argc > i)
            {
                standardDeviation = atoi(argv[i+1]);
                i++;
            }
            else if(!strcmp(argv[i], "-a") && argc > i)
            {
                amount = atoi(argv[i+1]);
                i++;
            }
            else if(!strcmp(argv[i], "-p"))
            {
                decimalPlaces = 1;
            }
            else if(!strcmp(argv[i], "-f"))
            {
                toFile = 1;
            }
            else
            {
                cout << "Run the program with the -h flag\n";
                cout << "Exit code: 3\n";
                exit(3);
            }
        }
    }

    vector<int> toReturn = {base,standardDeviation,amount,decimalPlaces,toFile};
    return toReturn;
}
