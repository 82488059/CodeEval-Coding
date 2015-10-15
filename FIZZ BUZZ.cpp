/* Sample code to read in test cases:*/
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    int a, b, c, t = 20;
    while (t--)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        
        for (int i = 1; i <= c; ++i)
        {
            if (0 == i%a)
            {
                cout << 'F' ;
                if (0 == i%b)
                {
                    cout << 'B';
                }
            }
            else if (0 == i%b)
            {
                cout << 'B';
            }
            else
            {
                cout << i ;
            }
            cout << " ";
            
        }
        cout << endl;
    }
    return 0;
} 