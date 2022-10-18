#include<iostream>
#include"lib_main.h"
using namespace std;
int a = 0,b = 0,z = 0;
char operation;
int oper(char operation){
    switch(operation){
        case('+'):
            z = 1;
            break;
        case('-'):
            z = 2;
            break;
        case('*'):
            z = 3;
            break;
    }
    
    return z;
}