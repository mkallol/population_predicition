#include <iostream>
using namespace std;
double currentPopulation;
double populationRate;

void expectedPopulation()
{   int n=1;
    double population;
    cout<<endl<<endl;
    cout<<"The expected population in next 10 years is:"<<endl;
    cout<<endl;
    cout<<"    Year  "<<"\t"<<" Population"<<endl;
    while(n<=10)
    {
        population=(((populationRate/100)*currentPopulation)+currentPopulation);
        currentPopulation=population;
        
        cout<<"     "<<n<<"  "<<"\t  "<<population<<endl;
        n++;
        
    }       
}
int main()
{
    
    cout<<"Welcome to the population prediction page for the next 10 years! "<<endl;
    
    cout<<"Please enter the current population of this world :";
   
    cin>>currentPopulation;
    cout<<"Please enter the population rate at this time: ";
    
    cin>>populationRate;
    expectedPopulation();
    cout<<endl;
    cout<<endl;
    return 0;   
}
