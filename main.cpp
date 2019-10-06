//This program is written by Naren (Ganesh) Kolli
#include   <iostream>    // to use input & output header file
#include  <iomanip>        // to use fixed, set precision header file

using namespace std; // to use standard c++ symbols

int main ()  // main function
{            // starting curly bracket


    double oxygenAtomAmount, carbonAtomAmount, nitrogenAtomAmount, sulfurAtomAmount, hydrogenAtomAmount;

    const double oxygenAtomicWeight = 15.9994;
    const double carbonAtomicWeight = 12.011;
    const double nitrogenAtomicWeight = 14.00674;
    const double sulfurAtomicWeight = 32.066;
    const double hydrogenAtomicWeight = 1.00794;

    double molecularWeight, averageWeightperAtom;

    cout<<"Welcome to the Amino Acid Molecular Weight Calculator by Ganesh Kolli!\n";
    cout<<"Please enter the number of oxygen atoms in the amino acid";
    cin>>oxygenAtomAmount;
    cout<<"Please enter the number of carbon atoms in the amino acid";
    cin>>carbonAtomAmount;
    cout<<"Please enter the number of nitrogen atoms in the amino acid";
    cin>>nitrogenAtomAmount;
    cout<<"Please enter the number of sulfur atoms in the amino acid";
    cin>>sulfurAtomAmount;
    cout<<"Please enter the number of hydrogen atoms in the amino acid";
    cin>>hydrogenAtomAmount;

    molecularWeight = (oxygenAtomAmount*oxygenAtomicWeight) + (carbonAtomAmount*carbonAtomicWeight) + (nitrogenAtomAmount*nitrogenAtomicWeight) + (sulfurAtomAmount*sulfurAtomicWeight) + (hydrogenAtomAmount*hydrogenAtomicWeight);
    averageWeightperAtom = molecularWeight/(oxygenAtomAmount+carbonAtomAmount+nitrogenAtomAmount+sulfurAtomAmount+hydrogenAtomAmount);

    cout<<fixed<<setprecision(3);

    cout<<"The molecular weight of your amino acid is "<<molecularWeight<<" u and the average weight per atom is "<<averageWeightperAtom<<" u.\n";


}     // close bracket for function main
