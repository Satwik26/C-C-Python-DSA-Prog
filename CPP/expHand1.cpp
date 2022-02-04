#include <iostream>
using namespace std;
float Division(float num, float den){
    if (den == 0) {
        throw den;
    }else
        return (num / den);
}
int main(){
    float numerator, denominator, result;
    cout<<"Enter numrerator and denominator: ";
    cin>>numerator>>denominator;
    try {
        result = Division(numerator, denominator);
        cout << "The quotient is " << result << endl;
    }
    catch (float e){
        cout << "Exception occurred: Dividing by 0 not allowed " << endl;
    }
  
}