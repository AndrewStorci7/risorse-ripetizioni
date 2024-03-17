/**
 * Lezione 3: Stringhe
 */

#include <iostream>
#include <string>

// use namespace std;

int main()
{

    char stringa_c[] = "CiaoCiao";

    char stringa_c_2[10];

    std::cin >> stringa_c_2;

    std::cin.getline(stringa_c_2, 10);

    std::cout << stringa_c_2 << std::endl;
    std::cout << stringa_c << std::endl;

    return 0;
}