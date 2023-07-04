#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include <utility>
#include <vector>
class bigint{
    std::vector<char> number;
public:
    explicit operator unsigned int()const{
        unsigned int answer = 0;
        unsigned mult = 1;
        for (unsigned int i = number.size(); i != 0; i--){
            answer+=number[i]*mult;
            mult++;
        }
        return answer;
    }
    bigint(){
        number = {'0'};
    }
    bigint(const std::string& a){
        for (char i: a){
            number.push_back(i);
        }
    }
    bigint(int a){
        std::string c;
        c = std::to_string(a);
        for (char i: c){
            number.push_back(i);
        }
    }
     std::string to_string ()const{
        std::string answer;
        for (char i: number){
            answer+=i;

        }
        return answer;

    }
    int toInt(){
        int answer = 0;
        int mult = 1;
        for (unsigned long long int i = number.size(); i != 0; i--){
            answer+=static_cast<int>(number[i])*mult;
            mult++;
        }
        return answer;

    }
};
bool operator<(bigint a, bigint b){

    return a.toInt() < b.toInt();
};
bool operator==(bigint a, bigint b){

    return a.toInt() == b.toInt();
};
bool operator<=(bigint a, bigint b){

    return a.toInt() <= b.toInt();
};


bool operator<(int a, bigint b){

    return a < b.toInt();
};
bool operator>(int a, bigint b){

    return a > b.toInt();
};
bool operator==(int a, bigint b){

    return a == b.toInt();
};
bool operator<=(int a, bigint b){

    return a <= b.toInt();
};

bool operator<(bigint a, int b){

    return a.toInt() < b;
};
bool operator==(bigint a, int b){

    return a.toInt() == b;
};
bool operator<=(bigint a, int b){

    return a.toInt() <= b;
};

bool operator!=(bigint a, bigint b){

    return a.toInt() != b.toInt();
};
bool operator!=(bigint a, int b){

    return a.toInt() != b;
};
bool operator!=(int a, bigint b){

    return a != b.toInt();
};

bool operator>(bigint a, bigint b){

    return a.toInt() > b.toInt();
};

bool operator>(bigint a, int b){

    return a.toInt() > b;
};

bool operator>=(int a, bigint b){

    return a >= b.toInt();
};

bool operator>=(bigint a, bigint b){

    return a.toInt() >= b.toInt();
};

bool operator>=(bigint a, int b){

    return a.toInt() >= b;
};

bool operator>=(bigint a, const std::string& b){
    bigint c(b);
    return std::move(a) >= c;
};

bool operator>=(const std::string& a, bigint b){
    bigint c(a);
    return c >= std::move(b);
};
bool operator>(bigint a, const std::string& b){
    bigint c(b);
    return std::move(a) > c;
};

bool operator>(const std::string& a, bigint b){
    bigint c(a);
    return c > std::move(b);
};
bool operator<=(bigint a, const std::string& b){
    bigint c(b);
    return std::move(a) <= c;
};

bool operator<=(const std::string& a, bigint b){
    bigint c(a);
    return c <= std::move(b);
};
bool operator<(bigint a, const std::string& b){
    bigint c(b);
    return std::move(a) < c;
};

bool operator<(const std::string& a, bigint b){
    bigint c(a);
    return c < std::move(b);
};
bigint operator +(bigint a, bigint b){
    int c = a.toInt()+b.toInt();
    bigint result(c);
    return result;
}
bigint operator +=(bigint a, bigint b){
    int c = a.toInt()+b.toInt();
    bigint result(c);
    return result;
}
bigint operator ++(bigint a, int){
    int c = a.toInt()+1;
    bigint result(c);
    return result;
}
bigint operator ++(bigint a ){
    int c = a.toInt()+1;
    bigint result(c);
    return result;
}

bigint operator -(bigint a, bigint b){
    int c = a.toInt()-b.toInt();
    bigint result(c);
    return result;
}
bigint operator -=(bigint a, bigint b){
    int c = a.toInt()-b.toInt();
    bigint result(c);
    return result;
}
bigint operator --(bigint a){
    int c = a.toInt()-1;
    bigint result(c);
    return result;
}
bigint operator --(bigint a, int){
    int c = a.toInt()-1;
    bigint result(c);
    return result;
}

bigint operator -(int a, bigint b){
    int c = a-b.toInt();
    bigint result(c);
    return result;
}
bigint operator -=(int a, bigint b){
    int c = a-b.toInt();
    bigint result(c);
    return result;
}

bigint operator -(bigint a, int b){
    int c = a.toInt()-b;
    bigint result(c);
    return result;
}
bigint operator -=(bigint a, int b){
    int c = a.toInt()-b;
    bigint result(c);
    return result;
}

bigint operator +(int a, bigint b){
    int c = a-b.toInt();
    bigint result(c);
    return result;
}
bigint operator +=(int a, bigint b){
    int c = a-b.toInt();
    bigint result(c);
    return result;
}

bigint operator +(bigint a, int b){
    int c = a.toInt()-b;
    bigint result(c);
    return result;
}
bigint operator +=(bigint a, int b){
    int c = a.toInt()-b;
    bigint result(c);
    return result;
}
