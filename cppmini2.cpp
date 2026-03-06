#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class OnlineExam {
    float score;
    int correctCount;
	int wrongCount;
	
public:OnlineExam() {
   		 score = 0;
    	correctCount = 0;
   		 wrongCount = 0;
		}	
    void login() {
        string user, pass;
        cout << "-----------------------------\n";
        cout << "   ONLINE EXAMINATION LOGIN\n";
        cout << "-----------------------------\n";

        cout << "Username: ";
        cin >> user;
        cout << "Password: ";
        cin >> pass;

        if (user == "admin" && pass == "1234") {
            cout << "\nLogin Successful!\n";
        } else {
            cout << "\nInvalid Login! Exiting...\n";
            exit(0);
        }
    }

    void startExam() {
        int ans;
        int totalTime = 60; // total exam time in seconds
        time_t startTime, currentTime;

        cout << "\nExam Started! Total Time: 60 seconds\n";
        cout << "----------------------------------\n";

        time(&startTime); // timer start

        // -------- Question 1 --------
        time(&currentTime);
        if (difftime(currentTime, startTime) >= totalTime) {
            cout << "\nTime Over!\n";
            return;
        }

        cout << "\nQ1. C++ is developed by?\n";
        cout << "1. Bjarne Stroustrup\n2. James Gosling\n3. Dennis Ritchie\n";
        cout << "Enter Answer: ";
        cin >> ans;
        if(ans < 1 || ans > 3) {
    	cout << "Invalid choice! No marks added.\n";
		}
        else if (ans == 1) {
   		 score++;
    	correctCount++;
		} else {
   		 score -= 0.25;
   		 wrongCount++;
		}
		

        // -------- Question 2 --------
        time(&currentTime);
        if (difftime(currentTime, startTime) >= totalTime) {
            cout << "\nTime Over!\n";
            return;
        }

        cout << "\nQ2. Which symbol is used for comments?\n";
        cout << "1. //\n2. **\n3. ##\n";
        cout << "Enter Answer: ";
        cin >> ans;
        if(ans < 1 || ans > 3) {
  		  cout << "Invalid choice! No marks added.\n";
		}
       else if (ans == 1) {
   		 score++;
   		 correctCount++;
		} else {
  		  score -= 0.25;
  		  wrongCount++;
		}

        // -------- Question 3 --------
        time(&currentTime);
        if (difftime(currentTime, startTime) >= totalTime) {
            cout << "\nTime Over!\n";
            return;
        }

        cout << "\nQ3. Extension of C++ file?\n";
        cout << "1. .java\n2. .cpp\n3. .py\n";
        cout << "Enter Answer: ";
        cin >> ans;
        if(ans < 1 || ans > 3) {
  	 	 cout << "Invalid choice! No marks added.\n";
		}
        else if (ans == 2) {
    		score++;
    		correctCount++;
			} else {
   			 score -= 0.25;
   			 wrongCount++;
			}
        // -------- Question 4 --------
		time(&currentTime);
		if (difftime(currentTime, startTime) >= totalTime) {
    		cout << "\nTime Over!\n";
   			return;
		}

		cout << "\nQ4. Which concept allows one class to inherit properties of another?\n";
		cout << "1. Encapsulation\n2. Inheritance\n3. Polymorphism\n";
		cout << "Enter Answer: ";
		cin >> ans;
		if(ans < 1 || ans > 3) {
   		 cout << "Invalid choice! No marks added.\n";
			}
			else if (ans == 2) {
  			  score++;
  			  correctCount++;
				} else {
 			   score -= 0.25;
  			  wrongCount++;
				}

		// -------- Question 5 --------
		time(&currentTime);
		if (difftime(currentTime, startTime) >= totalTime) {
    	cout << "\nTime Over!\n";
   		 return;
		}

		cout << "\nQ5. Which operator is used for output in C++?\n";
		cout << "1. >>\n2. <<\n3. &&\n";
		cout << "Enter Answer: ";
		cin >> ans;
		if(ans < 1 || ans > 3) {
    		cout << "Invalid choice! No marks added.\n";
			}
			else if (ans == 2) {
   			 score++;
    		correctCount++;
			} else {
   			 score -= 0.25;
   			 wrongCount++;
		}


        cout << "\nExam Finished!\n";
    }

    void result() {
        cout << "\n-----------------------------\n";
        cout << "           RESULT\n";
        cout << "-----------------------------\n";

        cout << "Your Score: " << score << " / 5\n";

        float percent = (score / 5.0) * 100;
        cout << "Percentage: " << percent << "%\n";
        cout << "Correct Answers: " << correctCount << endl;
		cout << "Wrong Answers: " << wrongCount << endl;

        if (percent>= 40)
            cout << "Status: PASS\n";
        else
            cout << "Status: FAIL\n";
    }
};

int main() {
    OnlineExam exam;

    exam.login();
    exam.startExam();
    exam.result();

    return 0;
}
