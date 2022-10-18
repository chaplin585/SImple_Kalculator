#include<stdio.h>
#include<iostream>

#include"lib_oper.h"
using namespace std;

int main(int a,int b, int z, char operation){
    
    printf("%s","Hello! I am Simple- Calculator\n");
    cout<<"I can |A+B|A-C|A*C|"<<endl;
    while(true){
        cout<<"Write the example"<<endl;
        cin>>a>>operation>>b;
        cout<<1;
        oper(operation);
        
    }
    


}