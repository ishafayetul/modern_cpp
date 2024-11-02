#include<iostream>
#include<cfloat>

using namespace std;    

int main(){
    cout<<"Minimum value of float: "<<FLT_MIN<<endl;
    cout<<"Maximum value of float: "<<FLT_MAX<<endl;
    cout<<"Size of float: "<<sizeof(float)<<endl;
    cout<<"Minimum value of double: "<<DBL_MIN<<endl;
    cout<<"Maximum value of double: "<<DBL_MAX<<endl;
    cout<<"Size of double: "<<sizeof(double)<<endl;
    cout<<"Minimum value of long double: "<<LDBL_MIN<<endl;
    cout<<"Maximum value of long double: "<<LDBL_MAX<<endl;
    cout<<"Size of long double: "<<sizeof(long double)<<endl;
}