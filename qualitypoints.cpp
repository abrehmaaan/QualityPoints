#include<iostream>
using namespace std;
int qualityPoints(int avg){
    switch(avg){
        case 90 ... 100:return 4;break;
        case 80 ... 89:return 3;break;
        case 70 ... 79:return 2;break;
        case 60 ... 69:return 1;break;
        default:return 0;break;
    }
}
int main(){
    cout<<"95 : "<<qualityPoints(95)<<endl;
    cout<<"90 : "<<qualityPoints(90)<<endl;
    cout<<"85 : "<<qualityPoints(85)<<endl;
    cout<<"70 : "<<qualityPoints(70)<<endl;
    cout<<"66 : "<<qualityPoints(66)<<endl;
    cout<<"57 : "<<qualityPoints(57)<<endl;
    return 0;
}
