#include <iostream>
using namespace std;

class Cricketer {
public:
    string playerName;
    int matches;
    int runs;
    float average;

    void input() {
        cout << "Enter Player Name: ";
        cin >> playerName;

        cout << "Enter Matches Played: ";
        cin >> matches;

        cout << "Enter Total Runs: ";
        cin >> runs;

        if (matches > 0)
            average = (float)runs / matches;
        else
            average = 0;
    }

    void display() {
        cout << "\nPlayer Name: " << playerName;
        cout << "\nMatches: " << matches;
        cout << "\nRuns: " << runs;
        cout << "\nAverage: " << average << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    Cricketer c[n];

    for (int i = 0; i < n; i++) {
        cout << "\n Enter details of Player " << i + 1 << " \n";
        c[i].input();
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (c[j].average < c[j + 1].average) {
                Cricketer temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    cout << "\n\nPlayers Sorted by Average (Descending) \n";
    for (int i = 0; i < n; i++) {
        c[i].display();
    }

    return 0;
}