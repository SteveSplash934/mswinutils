#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <vector>

void touch(const std::string &path)
{
    HANDLE hFile = CreateFile(path.c_str(),
                              GENERIC_READ | GENERIC_WRITE,
                              0,                     // No sharing
                              NULL,                  // Default security attributes
                              OPEN_ALWAYS,           // Open the file if it exists, or create it if it doesn't
                              FILE_ATTRIBUTE_NORMAL, // Normal file
                              NULL);                 // No template file

    if (hFile == INVALID_HANDLE_VALUE)
    {
        std::cerr << "Error creating or accessing file: " << path << std::endl;
        return;
    }

    FILETIME ftWrite;
    GetSystemTimeAsFileTime(&ftWrite); // Get current system time

    // Set both creation and last write time to current system time
    if (!SetFileTime(hFile, NULL, NULL, &ftWrite))
    {
        std::cerr << "Error setting file time: " << path << std::endl;
    }

    CloseHandle(hFile);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: touch <file1> <file2> ..." << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i)
    {
        std::string path = argv[i];
        touch(path);
        // std::cout << "Touched: " << path << std::endl;
    }

    return 0;
}


// g++ touch.cpp -o ../bin/touch.exe