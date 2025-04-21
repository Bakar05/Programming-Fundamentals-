#include <iostream>
#include <string>
using namespace std;

int main() {
    string mood, preference;

    cout << "How are you feeling today (energetic, relaxed, or adventurous)? ";
    cin >> mood;
    cout << "Do you prefer indoor or outdoor activities? ";
    cin >> preference;

    if (mood == "energetic") {
        if (preference == "outdoor") {
            cout << "Go for a hike or a bike ride!" << endl;
        } else {
            cout << "Try a music class or hit the gym!" << endl;
        }
    } else if (mood == "relaxed") {
        if (preference == "outdoor") {
            cout << "Consider a leisurely walk in the park or fishing." << endl;
        } else {
            cout << "How about reading a book or practicing meditation?" << endl;
        }
    } else if (mood == "adventurous") {
        if (preference == "outdoor") {
            cout << "Go rock climbing or try surfing!" << endl;
        } else {
            cout << "Escape rooms or indoor skydiving might be fun!" << endl;
        }
    } else {
        cout << "Invalid mood or preference." << endl;
    }

    return 0;
}
