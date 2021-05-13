#include <iostream>



void printTree(int intpHeight) {
    int intNumberofLeaves = 1;
    for(int intBranches = 1; intBranches < intpHeight; intBranches++) {
        for(int intCountSpace = (intHeight - intBranches); intCountSpace > 0; intCountSpace--){
            std::cout << " ";
        }
        for(int intCountLeaves = 1; intCountLeaves <= intNumberofLeaves; intCountLeaves++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        intNumberofLeaves+=2;
    }   
     for(int intCountSpace = (intHeight - 1); intCountSpace > 0; intCountSpace--){
            std::cout << " ";
    }
    std::cout << "#" << std::endl;
}

int main() {

    int intNumberofLine = 5;

    std::cout << std::endl;

    printTree(intNumberofLine);

    std::cout << std::endl;

    //printTree(intNumberofLine + 2);

    return 0; 
}