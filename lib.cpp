//
// Created by antho on 05/12/2022.
//

#include "lib.h"
bool giovannino(char &a){
    if(a>=97&&a<=122){
        a=a-32;
        return true;
    }
    else if(a>=65&&a<=90){
        a=a+32;
        return true;
    }
    else return false;
}
