#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;///很長的東西，每一格都是int

    v.push_back(10);///加入10、20、30
    v.push_back(20);
    v.push_back(30);

    for(int i=0;i<3;i++){
        cout << v[i];
        cout << endl;

    }
}
