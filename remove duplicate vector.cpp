#include<bits/stdc++.h>
using namespace std;

void remove(std::vector<string> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }

    v.erase(end, v.end());
}

int main(){
    

    return 0;
}