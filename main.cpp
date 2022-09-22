int main() {
    ifstream inFile;
    inFile.open("README.md");
    if (!inFile) {
        cout << "No file found.";
    }
    string names[3];
    while (inFile) {
        getline(inFile, names, EOF);
    }
    for (int i = 0; i < 2; i++) {
        cout << names[i];
        cout << endl;
    }
    cout << "Program was ran.";
    return 0;
}
