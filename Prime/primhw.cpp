#include <iostream>

int main() {

    int intNumber = 10;
    bool boo1IsPrime = true;

    
    
    
    for(intNumber == 1 || intNumber <= 10000; intNumber++) {

        if(intNumber == 0 || intNumber == 1) {
            boo1IsPrime = false;
        } else {
            for(int intCounter = 2; intCounter <= intNumber / 2; intCounter++) {
                if(intNumber % intCounter == 0) {
                    boo1IsPrime = false;
                    break;
                }
            }
        }
        
        std::cout << intNumber << " is a " << (boo1IsPrime ? "": "not ") << "prime number." << std::endl;
    return 0;
            }
        
    }
    
    
    
    


    

}