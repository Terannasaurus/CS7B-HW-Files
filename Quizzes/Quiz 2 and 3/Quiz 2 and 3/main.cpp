/******************************************************
 *  Class Variables:    int emplNum
 *                      String fName
 *                      String lName
 *                      double income
 *
 *  Implement Accessors and Mutators for all variables
 *
 *  Use default constructor to set variables to zero
 *  or empty string
 *
 *  Your overloaded constructor is using your implemented
 *  Mutators to set the values of the variables.
 *
 *  Use this -> where you think it is appropriate
 *
 *  To read records back into the array, look into
 *  istringstream. There are other ways to do it, but I
 *  find it particularly easy to use.
 *
 *  DUE THURSDAY MARCH 23.
 *******************************************************
 */


#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

class Employee {
    
private:
    
    int emplNum;
    string fname;
    string lname;
    double income;
    
public:
    
    Employee() {
        this->emplNum = 0;
        this->fname = "";
        this->lname = "";
        this->income = 0.0;
    }
    
    Employee(int, string, string, double);
    
    void setMemNum(int);
    void setFname(string);
    void setLname(string);
    void setIncome(double);
    
    int getMemNum() const;
    string getFname() const;
    string getLname() const;
    double getIncome() const;
    
};

/// Function Prototypes
void printArr(const Employee[], const int);
void sortArray(Employee[], int);
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
    
    
    ///Write the records to the a file called emplUnsort.txt
    writeArrToFile(emplArr, SIZE, "unsortedEmployeesFile.txt");
    
    
    ///Sort by income, Highest to lowest.
    cout << "\nThis is the SORTED records in the Employee Array" << endl;
    sortArray(emplArr, SIZE);
    
    
    printArr(emplArr, SIZE);
    
    
    ///Write the records to the a file called emplSort.txt
    writeArrToFile(emplArr, SIZE, "sortedEmployeesFile.txt");
    
    
    ///Use this function to read data from file into the array.
    ///Create a txt file by copying the data from emplUnsort and add 10 new records.
    readClassDataToArray(emplArr, SIZE);
    
    
    cout << "\nThis is the SORTED records in the Employee Array" << endl;
    printArr(emplArr, SIZE);
    
    
    return 0;
}

/***********************************************************************************/

void printArr(const Employee arr[], int SIZE){
    
    for(int i = 0; i < SIZE; i++) {
        
        cout << arr[i] << " " << endl;
        
    }
    
}

/***********************************************************************************/

void writeArrToFile(Employee arr[], int SIZE, string myFile){
    
    ofstream out(myFile);
    
    if(out.good()) {
        
        for(int i = 0; i < SIZE; i++) {
            
            out << arr[i] << endl;
            
        }
        
        out.close();
        
    }
    
}

/***********************************************************************************/

void readClassDataToArray(Employee arr[], int SIZE){
    
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

void sortArray(Employee arr[], int SIZE){
    
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

Employee::Employee(int memNum, string firstName, string lastName, double incomeNum) {
    
    this->emplNum = memNum;
    this->fname   = firstName;
    this->lname   = lastName;
    this->income  = incomeNum;
}


void Employee::setMemNum(int mem) {
    
    this->emplNum = mem;
}


void Employee::setFname(string fn) {
    
    this->fname = fn;
}


void Employee::setLname(string ln) {
    
    this->lname = ln;
}


void Employee::setIncome(double inc) {
    
    this->income = inc;
}


int Employee::getMemNum() const{
    
    return this->emplNum;
}


string Employee::getFname() const{
    
    return this->fname;
}


string Employee::getLname() const{
    
    return this->lname;
}


double Employee::getIncome() const{
    
    return this->income;
}


ostream & operator<<(ostream & os, const Employee & e) {
    
    os << e.getMemNum() << " " << e.getLname() << " " << e.getFname() << " " << e.getIncome();
    
    return os;
}





















