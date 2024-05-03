#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdio>
using namespace std;

class Input {
  public:
    string userAction;
    int fileName;
    fstream buf;
    fstream file;
    void sendFile(string fileNameTemp){
      buf.open("output.txt", ios::app);
      cout << "Choose a file" << endl;
      cin >> fileNameTemp;
      ifstream file(fileNameTemp);
      buf << file;
    }
};


int main() {
    int userLine;
    string userFile;
    string userAction;
    string line;
    fstream buf;
    Input i;

    cout << "Send\nRecieve\nDelete\n" << endl;
    cin >> userAction;

    if(userAction == "Send"){
      i.sendFile("input.txt");
    }
}