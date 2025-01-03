#include <iostream>
#include <map>
#include <string>
using namespace std;

class DocumentDB {
    map<int, map<string, string>> documents;

public:
    void insert(int docID, const map<string, string>& data) {
        documents[docID] = data;
        cout << "Document inserted successfully.\n";
    }

    void display() {
        for (const auto& [id, doc] : documents) {
            cout << "Document ID: " << id << "\n";
            for (const auto& [key, value] : doc) {
                cout << key << ": " << value << "\n";
            }
            cout << "\n";
        }
    }
};

int main() {
    DocumentDB db;
    db.insert(1, {{"name", "Alice"}, {"role", "Manager"}});
    db.insert(2, {{"name", "Bob"}, {"role", "Developer"}});

    cout << "Document DB Contents:\n";
    db.display();
    return 0;
}
