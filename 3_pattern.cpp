#include <iostream>
using namespace std;

int main() {
    int END;// fixed ending number
    cin >> END;

    for (int i = 0; i < END; i++) {  // i = 0 to END-1
        for (int j = 0; j < END - i; j++) {  // j = 0 to (END – i – 1)
            cout << (i + j + 1);
            if (j + 1 < END - i) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
