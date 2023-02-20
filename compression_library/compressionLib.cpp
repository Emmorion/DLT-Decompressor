#include <string>
#include "compressionLib.hpp"

CompressionLibrary::CompressionLibrary(){};

CompressionLibrary::~CompressionLibrary(){};

void CompressionLibrary::compression(std::string& text)
{
    for(char& el : text)
    {
        el = static_cast<int>(el) + 1;
    }
}

void CompressionLibrary::decompression(std::string& text)
{
    for(char& el : text)
    {
        el = static_cast<int>(el) - 1;
    }
}

