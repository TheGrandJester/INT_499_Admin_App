#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct EZTechMovie {
	string movieName; //Dynamic array of strings string rating;
};

int main() {
	struct EZTechMovie;
    string response; //Should program continue to run? Y/N
    string movieName;
    int castSize;
    vector<string> movieCast;
    string rating;
    
    cout << "Would you like to store additional movies? y/n \nl";
    cin >> response;
    
    while(response == "y") {

        cout << "\nEnter movie title.\nl";
        cin.ignore();
        getline(cin, movieName);

        cout << "Enter number of cast members.";
        cin >> castSize;

            for (int i = 0; i < castSize; ++i) {
                cout << "Enter cast member first and last name.";
                cin.ignore();
                getline(cin, movieCast[i]);
            }

        cout << "Enter movie rating.";
        cin >> rating;

        cout << "Would you like to store additional movies?";
        cin >> response;
    }
 
        cout << "You entered: \nl";
        cout << "Movie name: " + movieName << endl;
        cout << "Main cast: " + castSize << endl;
        cout << "Movie cast: ";
        for (int i=0; i<castSize; i++) {
            cout << movieCast[i];
            cout << ", ";
        }
        cout << endl;
        cout << "Movie rating: " + rating << endl;

	return 0;
}