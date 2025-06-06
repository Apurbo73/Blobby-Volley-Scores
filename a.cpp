#include <iostream>

#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int aliceScore = 0, bobScore = 0;
        char server = 'A';
        int i = 0;

        do {
            if (S[i] == server) {
                if (server == 'A') aliceScore++;
                else bobScore++;
            } else {
                server = (server == 'A') ? 'B' : 'A';
            }
            i++;
        } while (i < N);

        cout << aliceScore << " " << bobScore << "\n";
    }
    return 0;
}