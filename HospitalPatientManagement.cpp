#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

struct Patient {
    int id;
    string name;
    int priority;
};

struct Compare {
    bool operator()(Patient a, Patient b) {
        if (a.priority == b.priority)
            return a.id > b.id;
        return a.priority < b.priority;
    }
};

int main() {
    priority_queue<Patient, vector<Patient>, Compare> pq;

    // Adding five patients
    pq.push({101, "Rahul", 2});
    pq.push({102, "Aman", 5});
    pq.push({103, "Priya", 3});
    pq.push({104, "Sneha", 5});
    pq.push({105, "Rohan", 1});

    cout << "Hospital Emergency Patient Management\n";

    cout << "\nRegistered Patients:\n";

    priority_queue<Patient, vector<Patient>, Compare> temp = pq;

    while (!temp.empty()) {
        Patient p = temp.top();
        cout << "ID: " << p.id
             << " Name: " << p.name
             << " Priority: " << p.priority << endl;
        temp.pop();
    }

    // Process highest priority patient
    cout << "\nTreating Patients:\n";

    Patient treated = pq.top();

    cout << "Treated Patient: " << treated.name
         << " (Priority: " << treated.priority << ")\n";

    pq.pop();

    // Display remaining patients
    cout << "\nRemaining Waiting Patients:\n";

    while (!pq.empty()) {
        Patient p = pq.top();

        cout << "ID: " << p.id
             << " Name: " << p.name
             << " Priority: " << p.priority << endl;

        pq.pop();
    }

    return 0;
}
