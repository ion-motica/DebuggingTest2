#include <iostream>
void f1(){

}
void f2(){
}
void f3(){
    f2();

}



int main() {
    std::cout << "Hello, World!" << std::endl;
    int a=0;
    std::cout<<a<<std::endl;
    a++;
    std::cout<<a<<std::endl;
    a=a*2;
    std::cout<<a<<std::endl;
    a=++a + a++;
    std::cout<<a<<std::endl;

    a=0;a++;a=a*2;
    std::cout<<a<<std::endl;
    for (int i = 0; i < 3; ++i) {
        f1();
        if(i%2==0)f1();
        for (int j = 0; j < 7; ++j) {
            if(i%3==0)f2();
            std::cout<<i<<" "<<j<<std::endl;
        }
    }


    return 0;
}
