#include <string> 
#include <iostream>
#include "address.h"

Address::Address() {

}

Address::~Address(){

}

void Address::print() {

}
 std::string Address::toString() {
     std::string strAddress = getFirst() + " " + getLast() + " " + getPhoneNumber();
     return strAddress;
 }
void Address::init() {

}
void Address::setFirst(std::string strpFirst) {

}
void Address::setLast(std::string strpLast) {

}
void Address::setPhone(std::string strpPhoneNumber) {

}
std::string Address::getFirst() {
    return "First";
}
std::string Address::getLast() {
    return "Last";
}
std::string Address::getPhoneNumber() {
    return "Phone";
}       