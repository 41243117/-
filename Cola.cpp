#include<iostream>
using namespace std;

int main() {

    int Coke;
    int Coke_sum;
    int Coke_empty;

    while (cin>>Coke) {

        Coke_sum = Coke;
        Coke_empty = Coke;

        while (Coke_empty >= 3) {
            Coke_sum = Coke_sum + (Coke_empty / 3);
            Coke_empty = (Coke_empty / 3) + (Coke_empty % 3);
        }

        cout << Coke_sum + Coke_empty / 2 << endl;
    }

    return 0;
}

/*int main() {

    int n;

    while (cout<<n) {
        cout << n * 3 / 2 << endl;
    }

    return 0;
}*/