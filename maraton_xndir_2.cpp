#include <iostream>
#include <string>


bool is_row(std::string &s1 , std::string& s2)
{
    for(int i = 0; i < s1.size(); ++i)
    {
        for(int j = 0; j < s2.size(); ++j)
        {
            if(s1[i] == s2[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    std::string s1 = "abc";
    std::string s2 = "cba";
    std::cout << is_row(s1,s2);
}
