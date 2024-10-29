// copy_file_byline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

const size_t N{ 50 };

int main(int argc, char** argv)
{
    char s[N];
      if (argc != 3)
    {
        std::cout << "Wrong number of arguments! Requires 2 arguments";
        return 0;
    }
    FILE* inpt = fopen(argv[1], "r");
    if (!inpt)
    {
        std::cout << "ERROR! File " << argv[1] << " does not exist\n";
        return 0;
    }
    FILE* outpt = fopen(argv[2], "w");

    while (fgets(s, N, inpt))
    {
        fputs(s, outpt);
    }

    fclose(inpt);
    fclose(outpt);
}
