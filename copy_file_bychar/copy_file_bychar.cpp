// copy_file_bychar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main(int argc, char** argv)
{
    int c;
    if (argc != 3)
    {
        std::cout << "Wrong number of arguments! Requires 2 arguments";
        return 0;
    }
    FILE* inpt = fopen(argv[1], "rb");
    if (!inpt)
    {
        std::cout << "ERROR! File " << argv[1] << " does not exist\n";
        return 0;
    }
    
    FILE* outpt = fopen(argv[2], "wb");

    while (c = fgetc(inpt), !feof(inpt))
    {
        fputc(c, outpt);
    }

    fclose(inpt);
    fclose(outpt);
    return 0;
}
