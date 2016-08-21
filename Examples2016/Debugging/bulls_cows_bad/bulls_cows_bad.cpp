#include <iostream>
#include <string>
int main()
{
    std:: string t,f;
    int buki = 0, korovy=0;
    std::cin >> t >> f;
    
    for (int i = 0 ; i < 5 ; i++)
        if (t[i] == f[i])
        {
           buki++;
           f.erase(i-1, 1);
        }
    for (int i = 0 ; i < f.size() ; i++)
        if (t.find(f[i]) != -1)
            korovy++;
    
    std::cout << buki << " " << korovy;
    return 0;
}
