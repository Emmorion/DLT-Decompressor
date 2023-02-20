#include <string>


class CompressionLibrary
{
public:
    CompressionLibrary();
    ~CompressionLibrary();
    void compression(std::string& text);
    void decompression(std::string& text);
};