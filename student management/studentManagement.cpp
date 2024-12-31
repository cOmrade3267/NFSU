#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int enrollmentNo;
        string name;
        int semester;

    public:
        Student() {}
        
        void setRecord(int eno, string n, int sem) {
            enrollmentNo = eno;
            name = n;
            semester = sem;
        }

        void displayRecord(int displayIndex) const {
            cout << displayIndex << ". Enrollment Number: " << enrollmentNo 
                 << "  Name: " << name 
                 << "  Semester: " << semester << endl;
        }

        int getEnrollmentNo() const { return enrollmentNo; }
        string getName() const { return name; }
        int getSemester() const { return semester; }
};

class StudentManager {
    private:
        static const int MAX_STUDENTS = 20;
        Student students[MAX_STUDENTS];
        int currentCount;

    public:
        StudentManager() : currentCount(0) {}

        void addRecord() {
            if (currentCount >= MAX_STUDENTS) {
                cout << "Maximum student limit reached!" << endl;
                return;
            }

            int eno, sem;
            string name;
            
            cout << "Enter enrollment number: ";
            cin >> eno;
            cout << "Enter name: ";
            cin.ignore();  // Clear the newline from previous input
            getline(cin, name);  // Allow names with spaces
            cout << "Enter semester: ";
            cin >> sem;

            students[currentCount].setRecord(eno, name, sem);
            currentCount++;
            cout << "Record added successfully!" << endl;
        }

        void displayAllRecords() const {
            if (currentCount == 0) {
                cout << "No records found!" << endl;
                return;
            }

            cout << "\nStudent Records:\n";
            for (int i = 0; i < currentCount; i++) {
                students[i].displayRecord(i + 1);
            }
        }

        void deleteRecord(int eno) {
            bool found = false;
            for (int i = 0; i < currentCount; i++) {
                if (students[i].getEnrollmentNo() == eno) {
                    found = true;
                    // Shift remaining records
                    for (int j = i; j < currentCount - 1; j++) {
                        students[j] = students[j + 1];
                    }
                    currentCount--;
                    break;
                }
            }
            cout << (found ? "Record deleted successfully!" : "Record not found!") << endl;
        }

        void searchRecord(int eno) const {
            bool found = false;
            for (int i = 0; i < currentCount; i++) {
                if (students[i].getEnrollmentNo() == eno) {
                    students[i].displayRecord(i + 1);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Record not found!" << endl;
        }

        void modifyRecord(int idx) {
            if (idx <= 0 || idx > currentCount) {
                cout << "Invalid index!" << endl;
                return;
            }

            int eno, sem;
            string name;
            
            cout << "Enter new enrollment number: ";
            cin >> eno;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new semester: ";
            cin >> sem;

            students[idx - 1].setRecord(eno, name, sem);
            cout << "Record modified successfully!" << endl;
        }

        int getCurrentCount() const { return currentCount; }
};

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n1. ADD RECORD"
             << "\n2. DISPLAY RECORD"
             << "\n3. DELETE RECORD BY ENROLLMENT NUMBER"
             << "\n4. DISPLAY RECORD BY ENROLLMENT NUMBER"
             << "\n5. MODIFY BY INDEX"
             << "\n0. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addRecord();
                break;
            case 2:
                manager.displayAllRecords();
                break;
            case 3: {
                int eno;
                cout << "Enter enrollment number to delete: ";
                cin >> eno;
                manager.deleteRecord(eno);
                break;
            }
            case 4: {
                int eno;
                cout << "Enter enrollment number to search: ";
                cin >> eno;
                manager.searchRecord(eno);
                break;
            }
            case 5: {
                int idx;
                cout << "Enter index to modify (1 to " << manager.getCurrentCount() << "): ";
                cin >> idx;
                manager.modifyRecord(idx);
                break;
            }
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}