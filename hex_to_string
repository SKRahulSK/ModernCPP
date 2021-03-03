#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    uint8_t frv[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    std::string vr = "1.0";
    std::copy(vr.begin(), vr.end(), frv);
    
    stringstream list;

    for (int i=0; i<sizeof(frv); ++i)
    {
        list << (char)frv[i];
    }
    std::string key_string = list.str();
    cout << key_string << endl;
    cout << sizeof(key_string);
    
    return 0;
}
