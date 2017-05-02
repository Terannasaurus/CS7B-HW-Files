/************************************************************
 *                                                          *
 *                   -------------------                    *
 *                   || Brandon Teran ||                    *
 *                   -------------------                    *
 *                                                          *
 *  Class Variables:    int emplNum                         *
 *                      String fName                        *
 *                      String lName                        *
 *                      double income                       *
 *                                                          *
 *  Implement Accessors and Mutators for all variables      *
 *                                                          *
 *  Use default constructor to set variables to zero        *
 *  or empty string                                         *
 *                                                          *
 *  Your overloaded constructor is using your implemented   *
 *  Mutators to set the values of the variables.            *
 *                                                          *
 *  Use this -> where you think it is appropriate           *
 *                                                          *
 *  To read records back into the array, look into          *
 *  istringstream. There are other ways to do it, but I     *
 *  find it particularly easy to use.                       *
 *                                                          *
 *  DUE THURSDAY MARCH 23.                                  *
 ************************************************************/



#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

class Employee {
    
private:
    
    int    emplNum;
    string fname;
    string lname;
    double income;
    int    arrCtrl;
    
    Employee *arr = nullptr;
    
    void writeArr();
    
    
public:
    
    Employee() {
        
        this->emplNum = 0;
        this->fname = "";
        this->lname = "";
        this->income = 0.0;
        
    }
    
    Employee(int, string, string, double);
    Employee(int);
    
    void setMemNum(int);
    void setFname(string);
    void setLname(string);
    void setIncome(double);
    
    int    getMemNum() const;
    string getFname()  const;
    string getLname()  const;
    double getIncome() const;
    
    void addRecord(int, string, string, double);
    void sortArray();
    void printArray();
    
    ~Employee();
    
};


void printArr(const Employee[], const int);
void sortEmpArray(Employee[], int);
void writeArrToFile(Employee[], int, string);
void readClassDataToArray(Employee[], int);


ostream &operator<<(ostream&os,const Employee &e);


int main() {
    
    const int SIZE = 8;
    
    Employee emplArr[] = {Employee(5, "John",   "Doe",      2000),
                          Employee(2, "Peter",  "Doe",      2500),
                          Employee(1, "George", "Turner",   7450),
                          Employee(7, "Hannah", "Johnson",  10988),
                          Employee(4, "Betty",  "Peterson", 10000),
                          Employee(1, "Peter",  "Ture",     17450),
                          Employee(7, "Colin",  "Johnson",  10988),
                          Employee(4, "Holly",   "Shet",    100000)};
    
    
    cout << "This is the records in the Employee Array" << endl;
    printArr(emplArr, SIZE);
    
    
    cout << endl << endl;
    
    
    
    writeArrToFile(emplArr, SIZE, "employee.txt");
    
    
    
    cout << "\nThis is the SORTED records in the Employee Array" << endl;
    sortEmpArray(emplArr, SIZE);
    
    
    printArr(emplArr, SIZE);
    
    
    cout << endl << endl;
    
    
    writeArrToFile(emplArr, SIZE, "emplSort.txt");
    

    readClassDataToArray(emplArr, SIZE);
    
    
    Employee newEmployee(8);
    
    
    newEmployee.addRecord(1, "Ivan", "Broke-Nigga", 0.00);
    newEmployee.addRecord(1, "Chris", "Davis", 2304.00);
    newEmployee.addRecord(1, "Swaggy-P", "Patricio-Broke-Nigga", 0.00);
    
    
    cout << "This is the records in the Employee Array" << endl;
    newEmployee.printArray();
    
    
    newEmployee.sortArray();
    
    
    cout << "\nThis is the SORTED records in the Employee Array" << endl;
    newEmployee.printArray();
    
    
    
    return 0;
}

/***********************************************************************************/

void printArr(const Employee arr[], int SIZE) {
    
    for(int i = 0; i < SIZE; i++) {
        
        cout << arr[i] << " " << endl;
        
    }
    
}

/***********************************************************************************/

void writeArrToFile(Employee arr[], int SIZE, string myFile) {
    
    ofstream out(myFile);
    
    if(out.good()) {
        
        for(int i = 0; i < SIZE; i++) {
            
            out << arr[i] << endl;
            
        }
        
        out.close();
        
    }
    
}

/***********************************************************************************/

void readClassDataToArray(Employee arr[], int SIZE) {
    
    string str, fname, lname;
    int mem, income;
    int counter = 0;
    
    ifstream inFile("members.txt");
    
    if(inFile.fail()) {
        
        //cout << "Could not open file" << endl;
        
    } else {
        
        while(getline(inFile, str)) {
            
            istringstream iss(str);
            
            iss >> mem >> fname >> lname >> income;
            arr[counter].setMemNum(mem);
            arr[counter].setFname(fname);
            arr[counter].setLname(lname);
            arr[counter].setIncome(income);
            counter++;
            
        }
        
    }
    
}

/***********************************************************************************/

void sortEmpArray(Employee arr[], int SIZE) {
    
    int minIndex, minValue;
    
    for(int i = 0; i < (SIZE - 1); i++) {
        
        minIndex = i;
        minValue = arr[i].getIncome();
        
        for(int j = i + 1; j < SIZE; j++) {
            
            if(arr[j].getIncome() > minValue) {
                
                minValue = arr[j].getIncome();
                minIndex = j;
                
            }
            
        }
        
        swap(arr[minIndex], arr[i]);
        
    }
    
}


/***********************************************************************************/
                        ///Employee Class Member Functions\\\
/***********************************************************************************/


Employee::Employee(int memNum, string firstName, string lastName, double incomeNum) {
    
    this->emplNum = memNum;
    this->fname   = firstName;
    this->lname   = lastName;
    this->income  = incomeNum;
}

/***********************************************************************************/

Employee::Employee(int ctrl) {
    
    arrCtrl = ctrl;
    arr = new Employee[ctrl];
    
    string str, fname, lname;
    int mem, income;
    int counter = 0;
    
    ifstream inFile("employee.txt");
    
    if(inFile.fail()) {
        
        //cout << "Could not open file" << endl;
        
    } else {
        
        while(getline(inFile, str)) {
            
            istringstream iss(str);
            
            iss >> mem >> fname >> lname >> income;
            
            arr[counter].setMemNum(mem);
            arr[counter].setFname(fname);
            arr[counter].setLname(lname);
            arr[counter].setIncome(income);
            
            counter++;
            
        }
        
    }
    
}

/***********************************************************************************/

void Employee::setMemNum(int mem) {
    
    this->emplNum = mem;
}

/***********************************************************************************/

void Employee::setFname(string fn) {
    
    this->fname = fn;
}

/***********************************************************************************/

void Employee::setLname(string ln) {
    
    this->lname = ln;
}

/***********************************************************************************/

void Employee::setIncome(double inc) {
    
    this->income = inc;
}

/***********************************************************************************/

int Employee::getMemNum() const {
    
    return this->emplNum;
}

/***********************************************************************************/

string Employee::getFname() const {
    
    return this->fname;
}

/***********************************************************************************/

string Employee::getLname() const {
    
    return this->lname;
}

/***********************************************************************************/

double Employee::getIncome() const {
    
    return this->income;
}

/***********************************************************************************/

void Employee::addRecord(int num, string firstName, string lastName, double inc) {
    
    Employee *temp = nullptr;
    
    temp = new Employee[arrCtrl];
    
    for(int i = 0; i < arrCtrl; i++) {
        
        temp[i] = arr[i];
        
    }
    
    delete [] arr;
    
    arr = new Employee[arrCtrl + 1];
    
    for(int i = 0; i < arrCtrl; i++) {
        
        arr[i] = temp[i];
        
    }
    
    arrCtrl ++;
    
    arr[arrCtrl - 1].setMemNum(num);
    arr[arrCtrl - 1].setFname(firstName);
    arr[arrCtrl - 1].setLname(lastName);
    arr[arrCtrl - 1].setIncome(inc);
    
    writeArr();
    
}

/***********************************************************************************/

void Employee::writeArr() {
    
    ofstream outFile("employee.txt");
    
    if(outFile.good()) {
        
        for(int i = 0; i < arrCtrl; i++) {
            
            outFile << arr[i].getMemNum() << " " << arr[i].getLname()
            << " " << arr[i].getFname() << " " << arr[i].getIncome() << endl;
            
        }
        
        outFile.close();
        
    }
    
}

/***********************************************************************************/

void Employee::sortArray() {
    
    int minIndex, minValue;
    
    for(int i = 0; i < (arrCtrl - 1); i++) {
        
        minIndex = i;
        minValue = arr[i].getIncome();
        
        for(int j = i + 1; j < arrCtrl; j++) {
            
            if(arr[j].getIncome() > minValue) {
                
                minValue = arr[j].getIncome();
                minIndex = j;
                
            }
            
        }
        
        swap(arr[minIndex], arr[i]);
        
    }
    
}

/***********************************************************************************/

void Employee::printArray() {
    
    cout << arrCtrl << " Number of Employees" << endl;
    
    for(int i = 0; i < arrCtrl; i++) {
        
        cout << arr[i] << " " << endl;
        
    }
    
    cout << endl;
    
}

/***********************************************************************************/

ostream & operator<<(ostream & os, const Employee & e) {
    
    os << e.getMemNum() << " " << e.getLname() << " " << e.getFname() << " " << e.getIncome();
    
    return os;
}

/***********************************************************************************/

Employee::~Employee(){
    
    delete [] arr;
}












