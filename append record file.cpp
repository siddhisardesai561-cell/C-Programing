
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("records.txt", ios::app);

    if (!fout)
    {
        cout << "Unable to open file!";
        return 1;
    }

    int n;
    string record;

    cout << "Enter number of records to append: ";
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter record " << i << ": ";
        getline(cin, record);
        fout << record << endl;
    }

    fout.close();

    cout << "\nAll records in the file:\n";

    ifstream fin("records.txt");

    if (!fin)
    {
        cout << "Unable to read file!";
        return 1;
    }

    string line;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
