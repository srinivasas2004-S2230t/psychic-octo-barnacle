#include<iostream>
using namespace std;

class Exam {
    int score = 0;

public:
    void login() {
        string user, pass;
        cout << "Enter Username: ";
        cin >> user;
        cout << "Enter Password: ";
        cin >> pass;

        if (user == "admin" && pass == "1234")
            cout << "\nLogin Successful!\n";
        else {
            cout << "\nInvalid Login!";
            exit(0);
        }
    }

    void startExam() {
        int ans;

        cout << "\nQ1. C++ is developed by?\n";
        cout << "1. Bjarne Stroustrup\n2. James Gosling\n3. Dennis Ritchie\n";
        cin >> ans;
        if (ans == 1) score++;

        cout << "\nQ2. Which symbol is used for comments?\n";
        cout << "1. //\n2. **\n3. ##\n";
        cin >> ans;
        if (ans == 1) score++;

        cout << "\nQ3. Extension of C++ file?\n";
        cout << "1. .java\n2. .cpp\n3. .py\n";
        cin >> ans;
        if (ans == 2) score++;
    }

    void result() {
        cout << "\nYour Score: " << score << "/3\n";

        if (score >= 2)
            cout << "Status: PASS\n";
        else
            cout << "Status: FAIL\n";
    }
};

int main() {
    Exam e;
    e.login();
    e.startExam();
    e.result();
    return 0;
}
