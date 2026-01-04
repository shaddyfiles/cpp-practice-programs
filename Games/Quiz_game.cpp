#include <iostream> 
#include <string>

using namespace std;


int qna(string question[5], string options[5][4], int ans[5], int size, int width) {
    int choice;
    int correct = 0;

    for (int i = 0; i < size; i++) {
        cout << "\n--------------------------------------------" << endl;
        cout << " QUESTION " << i + 1 << endl;
        cout << "--------------------------------------------" << endl;
        cout << question[i] << "?" << endl << endl;

        for (int j = 0; j < width; j++) {
            cout << "  " << j + 1 << ")  " << options[i][j] << endl;
        }

        cout << "\n>> Choose the correct option: ";
        cin >> choice;

        if (choice == ans[i]) {
            cout << "   CORRECT! ✅" << endl;
            correct++;
        } else {
            cout << "   WRONG! ❌ (Answer: " << ans[i] << ")" << endl;
        }
    }
    return correct;
}

int main() {
   
    string question[5] = {
        "Which element is known as the 'King of Chemicals'",
        "What is the power house of the cell",
        "Which planet is known as the Red Planet",
        "What is the most abundant gas in Earth's atmosphere",
        "Which is the hardest natural substance on Earth"
    };

    string options[5][4] = {
        {"Nitric Acid", "Sulfuric Acid", "Hydrochloric Acid", "Acetic Acid"},
        {"Nucleus", "Ribosome", "Mitochondria", "Golgi Body"},
        {"Venus", "Mars", "Jupiter", "Saturn"},
        {"Oxygen", "Carbon Dioxide", "Hydrogen", "Nitrogen"},
        {"Gold", "Iron", "Diamond", "Quartz"}
    };

    int ans[5] = {2, 3, 2, 4, 3}; // Correct answers
    
    int size = sizeof(question) / sizeof(question[0]);
    int width = sizeof(options[0]) / sizeof(options[0][0]);
   
    cout << "============================================" << endl; 
    cout << "        WELCOME TO THE KNOWLEDGE QUIZ       " << endl;
    cout << "============================================" << endl;

    int correct = qna(question, options, ans, size, width);

    // Using 'size' instead of hardcoded 4 to keep percentage accurate
    double percentage = ((double)correct / size) * 100;

    cout << "\n============================================" << endl; 
    cout << " FINAL RESULT" << endl;
    cout << " Your score      : " << correct << " / " << size << endl;
    cout << " Your percentage : " << percentage << "%" << endl;
    cout << "============================================" << endl;

    return 0; 
}
