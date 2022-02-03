#include <iostream>
#include <string>
#include <vector>

std::string ret_row(std::string& str)
{
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] ==  ' ')
        {
            str.erase(i,1);
            str.insert(i,"%20");
        }
    }
    return str;

}

int main()
{
    std::string str = "";
    std::cout << "Plase Input Row" << std::endl;
    std::getline(std::cin , str);
    std::cout << ret_row(str);
}