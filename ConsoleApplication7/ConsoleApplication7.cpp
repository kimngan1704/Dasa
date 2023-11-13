#include <iostream>
#include <string>

using namespace std;

int main() {
    string userType;
    int optionT, optionS;

    cout << "Welcome to the Quiz Program!" << endl;
    cout << "Are you a 'teacher' or a 'student'? ";
    cin >> userType;

    if (userType == "teacher") {
        cout << "Welcome, Teacher! Select the function !" << endl;
        cout << "1. Random exam. " << endl;
        cout << "2. Grade exam. " << endl;
        cout << "3. Review history.  " << endl;
        cin >> optionT;
        switch (optionT) {
        case 1:
            // Tạo đề random
            cout << "You are generating a random exam." << endl;
            break;
        case 2:
            // Chấm điểm
            cout << "You are grading exams." << endl;
            break;
        case 3:
            // Xem lịch sử bài làm
            cout << "You are reviewing history." << endl;
            break;
        default:
            cout << "Invalid option." << endl;
            break;
        }
    }
    else if (userType == "student") {
        cout << "Welcome, Student! Select the function !" << endl;
        cout << "1. Take a quiz." << endl;
        cout << "2. Review exam." << endl;
        cout << "3. Review result." << endl;
        cin >> optionS;
        switch (optionS) {
        case 1:
            // Làm bài trắc nghiệm
            cout << "You are taking a quiz." << endl;
            break;
        case 2:
            // Xem lại bài làm
            cout << "You are reviewing your exam." << endl;
            break;
        case 3:
            // Xem kết quả
            cout << "You are reviewing your result." << endl;
            break;
        default:
            cout << "Invalid option." << endl;
            break;
        }
    }
    else {
        cout << "Invalid user type. " << endl;
        return 1;
    }

    return 0;
}
