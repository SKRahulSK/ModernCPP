#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"Hello World" << endl;
    uint8_t frv[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    std::string vr = "1.0";
    std::copy(vr.begin(), vr.end(), frv);
    cout << frv;
    return 0;
}
