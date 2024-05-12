#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Input {
public:
    string userAction;
    string fileName;
    string userName;
    fstream file;

    void getFile(string fileNameTemp) {
        fileNameTemp = fileName;
    }

    void downloadToDesktop(string data) {
        ofstream outputFile("C:\\Users\\danny\\Desktop\\" + fileName + ".txt"); // Specify the complete path and file name
        if (outputFile.is_open()) {
            outputFile << data;
            outputFile.close();
            cout << "File downloaded to desktop successfully." << endl;
        }
        else {
            cout << "Error: Unable to download the file to desktop." << endl;
        }
    }
};

class Output {
public:
    string userAction;
    int fileName;
    fstream buf;
    fstream file;

    void sendFile(string fileNameTemp) {
        buf.open("output.txt", ios::app);
        cout << "Choose a file" << endl;
        cin >> fileNameTemp;
        ifstream inputFile(fileNameTemp);
        if (inputFile.is_open()) {
            string line;
            while (getline(inputFile, line)) {
                buf << line << endl;
            }
            inputFile.close();
        }
        else {
            cout << "Error: Unable to open input file" << endl;
        }
    }
};

int main() {
    int userLine;
    string userFile;
    string userAction;
    string line;
    string data;
    fstream buf;
    Output o;
    Input i;

    cout << "Send\nDownload\nDelete\n" << endl;
    cin >> userAction;

    if (userAction == "Send") {
        o.sendFile("awdawds.txt");
    } 
    else if (userAction == "Download") {
        cout << "Enter data to download: ";
        cin.ignore(); // Ignore the previous newline character
        getline(cin, data);
        i.getFile("fileNameTemp");
        i.downloadToDesktop(data);
    }

    return 0;
}