#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {
    int userLine;
    string userFile;
    string userAction;
    string line;
    fstream buf;
    buf.open("output.txt", ios::app);

    cout << "Send\nRecieve\nDelete\n" << endl;
    cin >> userAction;

    if(userAction == "Send"){
        userAction = " ";
        cout << "Send a line or custom text?\nLine\nCustom\n" << endl;
        cin >> userAction;
    } if (userAction == "Line"){
        userAction = " ";
        cout << "What file?" << endl;
        cin >> userFile;
        ifstream file(userFile);
        cout << "What line?";
        cin >> userLine;
         for(int i = 0; i < userLine; ++i) {
            getline(file, line);
            buf << line;
        }
          file.close();
            buf.close();
    } else if(userAction == "Custom") {
      userAction = " ";
      cout << "Please type out the message" << endl;
      cin >> userAction;
      buf << userAction;
      buf.close();
    }
  return 1;
}