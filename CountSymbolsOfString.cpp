#include <iostream>
#include <string>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    std::string strLine;
    std::cout << "input a string\r\n";
    std::getline(std::cin, strLine);
    unsigned int nLen = static_cast<unsigned int>(strLine.length());
    for (unsigned int i = 0; i < nLen; i++)
    {
        unsigned int c = 0;
        char chSym1 = strLine[i];
        for (unsigned int j = 0; j < nLen; j++)
        {
            char chSym2 = strLine[j];
            if (chSym1 == chSym2)
                c++;
        }
        std::cout << "The symbol \"" << chSym1 << "\" occurs "
            << c << " times\r\n";
    }
    std::cin.get();
    return 0;
}
