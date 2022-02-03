#include <iostream>
#include <string>

bool is_equal_row(std::string& s1 , std::string& s2)
{
    for(int i = 0; i < s1.size(); ++i)
    {
        if(s1[i] != s2[i])
        {
            s1.erase(i,1);
        }
        if(s1[i] == s2[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    std::string s1 = "Pales";
    std::string s2 = "Pale";
    std::cout << is_equal_row(s1,s2);
}