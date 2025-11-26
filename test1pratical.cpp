#include <iostream>
#include <cmath>
using namespace std;
int getProblem();
void getRateDropFactor(double &,double &);
void getKgRateConc(double &,double &,double &);
int figDropsMin(double,double);
int byWeight(double,double,double);

int main(){
    cout<<"INTRAVENOUS RATE ASSISTANT\n";
    int problem;
    do{
    problem=getProblem();
    if(problem==1)
    {
        double rate,tubing;
        getRateDropFactor(rate,tubing);
        cout<<"The drop rate per minute is"<<figDropsMin(rate,tubing)<<".\n";
    }
    else if(problem==2)
    {
        double rate,weight,concentration;
        getKgRateConc(rate,weight,concentration);
        cout<<"The rate in millilitres per hour is "<<byWeight(rate,weight,concentration)<<".\n";
    }
    else if(problem==3)
    {
       cout<<"You have chosen to quit the program.\n";
       cout<<"Thank you for using our system.";
    }
    else{
        cout<<"Please run the system again and choose a problem number berwwen 1 and 3";
    }}while(problem>0 && problem<3);
    return 0;
}

int getProblem(){
    int  problem;
    cout<<"\n";
    cout<<"Enter the number of the problem you wish to solve\n";
    cout<<"\t GIVEN A MEDICAL ORDER IN"<<"\t\t CALCULATE RATE IN\n";
    cout<<"(1) ml/hr & tubing drop factor"<<"\t\t\t drops/min\n";
    cout<<"(2) mg/kg/hr & concentration in mg/ml"<<"\t\t ml/hr\n";
    cout<<"(3) QUIT\n";
    cout<<"\n";
    cout<<"Problem =>";
    cin>>problem;
    return problem;
}
void getRateDropFactor(double &a,double &b)
{
    cout<<"Enter rate in ml/hr =>";
    cin>>a;
    cout<<"Enter tubing's drop factor(drops/ml) =>";
    cin>>b;
} 
void getKgRateConc(double &a,double &b,double &c)
{
     cout<<"Enter rate in mg/hr => ";
        cin>>a;
        cout<<"Enter patient weight in kg => ";
        cin>>b;
        cout<<"Enter concentration in mg/ml =>";
        cin>>c;
}
int figDropsMin(double a,double b)
{
    int answer=round(b*(a/60));
    return answer;
    
}
int byWeight(double a,double b,double c)
{
    int answer=round((a*b)/c);
    return answer;
}