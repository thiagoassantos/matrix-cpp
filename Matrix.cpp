#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    int i, j, k, m;
    string result;
    //char sys[] = "color ";
    char tem[100];

    srand((unsigned) time(NULL));

    system("color A");
    do {
        i = rand() % 2;
        j = rand() % 300;
        k = rand() % 100;
        //cout << i;
        cout << setw(j) << i << endl;
       // cout << setw(k) << i << endl;
        Sleep(80);
        //cout << k;
        //system(sys);
        //cout << sys << endl;
    } while(true);


    system("pause");
    return 0;
}
