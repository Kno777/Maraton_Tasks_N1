#include <iostream>
#include <string>

bool is_unique(std::string& str)
{
    for(int i = 0; i < str.size(); ++i)
    {
        for(int j = i+1; j < str.size(); ++j)
        {
            if(str[i] == str[j])
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    std::string row = "";
    std::cout << "Plase Enter Row" << std::endl;
    std::getline(std::cin, row);
    std::cout << is_unique(row);
}