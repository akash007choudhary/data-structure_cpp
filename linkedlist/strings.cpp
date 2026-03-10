// #include<iostream>
// #include<string>
// #include <algorithm> //this is included to use all the stls code synatx !  
// using namespace std ;
//  int main (){
// string str= "daabcbaabcbc";
// cout<<str<<endl;
// string part ="abc";
// while(str.find(part)<str.length()&&str.length()>0){
//     str.erase(str.find(part),part.length());
//     cout<<str<<endl;
// }




// //   as cin doesnt take input spaces into consideration 
// //  there a deimeter term also as cin.getline(name, size, delimeter{thats a symbol after which the value is not inputted})


//     return 0 ; 
// }
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

// ===== Patient Class =====
class Patient {
private:
    string name;
    int id;
    string disease;

public:
    Patient(string n = "", int i = 0, string d = "") {
        name = n;
        id = i;
        disease = d;
    }

    // Only friend classes/functions can see sensitive info
    friend class Doctor;
    friend class AccessLog;
};

// ===== User Class (Base) =====
class User {
protected:
    string username;
    string role; // Doctor / Nurse / Admin

public:
    User(string u, string r) {
        username = u;
        role = r;
    }

    string getRole() { return role; }
    string getName() { return username; }
};

// ===== Doctor Class =====
class Doctor : public User {
public:
    Doctor(string u) : User(u, "Doctor") {}

    void viewPatient(Patient &p) {
        cout << "Patient Name: " << p.name << endl;
        cout << "Patient ID: " << p.id << endl;
        cout << "Disease: " << p.disease << endl;

        // Log the access
        AccessLog::writeLog(username, p.id, "VIEWED");
    }
};

// ===== Access Log Class =====
class AccessLog {
public:
    static void writeLog(string user, int patientId, string action) {
        ofstream fout("access_log.txt", ios::app);

        // Get current time
        time_t now = time(0);
        string dt = ctime(&now);
        dt.pop_back(); // remove newline

        fout << dt << " | User: " << user
             << " | Patient ID: " << patientId
             << " | Action: " << action << endl;

        fout.close();
    }

    static void showLogs() {
        ifstream fin("access_log.txt");
        string line;
        cout << "\n---- ACCESS LOGS ----\n";
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    }
};

// ===== Main Program =====
int main() {
    // Sample data
    Patient p1("John Doe", 101, "Flu");
    Patient p2("Alice Smith", 102, "Diabetes");

    Doctor d1("Dr. Sharma");

    int choice;
    do {
        cout << "\n==== Access Control Menu ====\n";
        cout << "1. Doctor view Patient 1\n";
        cout << "2. Doctor view Patient 2\n";
        cout << "3. Show Access Logs\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: d1.viewPatient(p1); break;
            case 2: d1.viewPatient(p2); break;
            case 3: AccessLog::showLogs(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
