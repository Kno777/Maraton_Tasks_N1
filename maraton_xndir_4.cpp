#include <iostream>
#include <string>

bool palindrom_str_swap(std::string &str)
{
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] == ' ')
        {
            str.erase(i,1);
        }
    }
    for(int i = 0; i < str.size(); ++i)
    {
        for(int j = i+1; j < str.size(); ++j)
        {
            if(str[i] == str[j])
            {
                std::swap(str[j] , str[str.size() - 1 - i]);
            }
        }
    }
    
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] != str[str.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string str = "aaaabb";
    std::cout << palindrom_str_swap(str);
}