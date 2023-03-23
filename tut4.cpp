//VARIABLE SCOPE AND DATA TYPES



# include<iostream>

using namespace std;
int glo =6;  // {ye global variable ho gaya glo ka.}
void sum(){
    int a;
    cout<<glo<<endl;
}

int main(){
    int glo=9;  // {ye local variable ho gaya glo ka.}
    glo=78;
    // int a = 14;
    // int b = 15;

   // {yeha pe back slash n line change karne ke liye use ho raha hai ("\n")}


    int a = 14, b = 15;
    a=12;     // {yeha pe local variable 'a' me upgradation hua hai}
    float pi = 3.14;
    char c = 'a';
    bool k = false;  //{ true ka value '1' print hoga and false ka value '0'}
    sum();

    cout<<glo<<endl; 
    cout<<k<<endl; 
    cout<< "\nThis is tutorial 4. \nHere the value of a is "<<a<<". \nThe value of b is "<<b;
    cout<< "\nthe value of pi is: "<<pi;
    cout<< "\nthe value of c is: "<<c;
    return 0;
}
