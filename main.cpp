#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    infotype ipt;
    stack stk;
    createStack_103012300339(stk);
    while (Top(stk) != 11){
        cout << "Masukkan Huruf ke-" << Top(stk) + 1<< ": ";
        cin >> ipt;
        cout << endl;
        push_103012300339(stk, ipt);
        cout << "Inputan Setelah Loop ke-" << Top(stk) + 1 << ":" << endl;
        printInfo_103012300339(stk);
    }
    while (Top(stk) != 7){
                cout << "PENGHAPUSAN" << endl;
                pop_103012300339(stk);
                cout << "Penghapusan dengan Elemen Sisa: " << Top(stk)  << endl;
                printInfo_103012300339(stk);
    }
    return 0;
}
