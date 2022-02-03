#include <iostream>
#include <string>
#include <vector>
#include <map>


void string_count_simvol(std::string &str)
{
    std::string tmp = str;
    std::map<char , int> my_map;
    for(int i = 0; i < str.size(); ++i)
    {
        my_map[str[i]]++;
    }

    if(tmp.size() > my_map.size())
    {
        std::cout << tmp;
    }
    else 
    for(auto it = my_map.begin(); it != my_map.end(); ++it)
    {
        std::cout << it->first << "" << it->second;
    }
}

int main()
{
    std::string str = "aaaabbbddddsssxxx";
    string_count_simvol(str);
}
