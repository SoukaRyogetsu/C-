#include <iostream>
using namespace std;
int main(){
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;  //4
    cout<<"short: "<<sizeof(short)<<" bytes"<<endl;  //2
    cout<<"long int: "<<sizeof(long int)<<" bytes"<<endl;  //4
    cout<<"long long: "<<sizeof(long long)<<" bytes"<<endl;   //8
    cout<<"char: "<<sizeof(char)<<" byte"<<endl;  //1
    cout<<"bool: "<<sizeof(bool)<<" byte"<<endl;  //1
    cout<<"float: "<<sizeof(float)<<" bytes"<<endl;  //4
    cout<<"double: "<<sizeof(double)<<" bytes"<<endl;  //8
    cout<<"long double: "<<sizeof(long double)<<" bytes"<<endl;  //12
    return 0;
}
