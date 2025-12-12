#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void getInput(int &, int &, int &);
void dispTier(double);
double calcAverage(int, double);
void dispSummary(double);

int main() {
    string name;
    int a, b, c;
    double lowest = 999;
    double highest = -1;
    double totalm = 0;
    string highestname,lowestname;
    int n = 0;
    
    while(true) {
        cout << "<<<<<<<<<<<< DATA >>>>>>>>>>>" << endl;
        cout << "Name : ";
        getline(cin, name);
        
        if (name=="") {
            break;
        } 
        
        getInput(a, b, c);
        cin.ignore();
        double total = (a / 100.0) * 35 + (b / 100.0) * 25 + (c / 100.0) * 40;
        
        dispSummary(total);
        
        if (n == 0) {
            highest = total;
            lowest = total;
            highestname = name;
            lowestname = name;
        } else {
            if (total > highest) {
                highest = total;
                highestname = name;
            }
            if (total < lowest) {
                lowest = total;
                lowestname = name;
            }
        }
        
        n = n + 1;
        totalm = totalm + total;
        cout << endl;
    }
    
    cout << "<<<<<<<< RESULTS ANALYSIS >>>>>>>>" << endl;
    cout << "Lowest mark : " << lowest << " (" << lowestname << ")" << endl;
    cout << "Highest mark : " << highest << " (" << highestname << ")" << endl;
    cout << "Average for " << n << " students: " << calcAverage(n, totalm) << endl;
    
    return 0;
}

void getInput(int &a, int &b, int &c) {
    cout << "Q1 mark: ";
    cin >> a;
    cout << "Q2 mark: ";
    cin >> b;
    cout << "Q3 mark: ";
    cin >> c;
}

void dispTier(double total) {
    cout << "Tier : ";
    if (total >= 75) {
        cout << "Tier 1";
    } else if (total >= 40) {
        cout << "Tier 2";
    } else {
        cout << "Tier 3";
    }
    cout << endl;
}

double calcAverage(int n, double totalm) {
    return totalm / n;
}

void dispSummary(double total) {
    cout << "<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
    cout << "Total marks: " <<total << endl;
    dispTier(total);
} 