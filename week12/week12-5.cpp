#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;///�ܪ����F��A�C�@�泣�Oint

    v.push_back(10);///�[�J10�B20�B30
    v.push_back(20);
    v.push_back(30);

    for(int i=0;i<3;i++){
        cout << v[i];
        cout << endl;

    }
}
