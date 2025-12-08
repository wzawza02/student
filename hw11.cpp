#include <iostream>
using namespace std;

int main()
{
    int password = 7;
    int enterKey;

    cout << "¿é¤J±K½X(1-10): ";
    cin >> enterKey;
    while(password != enterKey) {
        cout << "±K½X¿ù»~¦A¦¸¿é¤J(1-10): ";
        cin >> enterKey;
    }
    cout << "±K½X¥¿½T¹CÀ¸µ²§ô" << endl;
    return 0;
}
