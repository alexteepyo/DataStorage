#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

class Delete {
public:
    string userAction;
    string userFile;
    string fileName;
    fstream file;

    void deleteFile(string fileNameTemp) {
        cin >> fileNameTemp;
        if (remove(fileNameTemp.c_str()) != 0) {
            cout << "Error: Unable to delete the file." << endl;
        } else {
            cout << "File deleted successfully." << endl;
        }
    }
};

class Input {
public:
    string userAction;
    string fileName;
    string userName;
    fstream file;

  void getFile(string fileNameTemp) {
    fileName = fileNameTemp; // Update the assignment to set the fileName correctly
    ifstream inputFile(fileName);
}

void downloadToDesktop() {
    ifstream inputFile(fileName); // Open the file with the specified fileName
    if (inputFile.is_open()) {
        ofstream outputFile("C:\\Users\\danny\\Desktop\\" + fileName + ".txt"); // Specify the complete path and file name
        string line;
        while (getline(inputFile, line)) {
            outputFile << line << endl; // Write the content of the file to the output file
        }
        inputFile.close();
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
    Delete d;

    cout << "Send\nDownload\nDelete\n" << endl;
    cin >> userAction;

    if (userAction == "Send") {
        o.sendFile("awdawds.txt");
    } 
    else if (userAction == "Download") {
        cout << "Enter data to download: ";
        cin.ignore(); // Ignore the previous newline character
        getline(cin, data);
        i.getFile(userFile);
        i.downloadToDesktop();
    } else if (userAction == "Delete"){
        d.deleteFile(userFile);
    }

    return 0;
}