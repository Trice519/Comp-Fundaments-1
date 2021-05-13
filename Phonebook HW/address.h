#include <string>


class Address
{
    public:                                     //public interface 
        Address();
        ~Address();
        void print();
        std::string toString();
        void init();
        void setFirst(std::string strpFirst);
        void setLast(std::string strpLast);
        void setPhone(std::string strpPhoneNumber);
        std::string getFirst();
        std::string getLast();
        std::string getPhoneNumber();
    private:                                //private interface
        std::string strFirst;
        std::string strLast;
        std::string strPhoneNumber;

}