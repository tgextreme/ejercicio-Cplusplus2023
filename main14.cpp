#include <iostream>
using namespace std;

class Test{
public:
    char* name;
    Test(char* n):name(n){}
};

int main(){
    char in[10];
    Test* data[3];
    
    for(int i=0;i<3;++i){
        cin>>in;//input: A B C
        data[i] = new Test(in);
    }
    
    for(int i=0;i<3;++i){
       cout<< data[i]->name<<endl;//output: C C C
    }
    
    return 0;
}