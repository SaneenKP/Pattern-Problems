#include<iostream>

void drawPattern(int height){

    for (int i = 1; i <= height; ++i)
    {
        int bit = (i%2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; ++j){
            std::cout<<bit;
            bit = 1 - bit; 
        }
        std::cout<<"\n";
    }
}

int main(){
    int height = 0;
    std::cout<<"Enter height of the triangle : ";
    std::cin>>height;
    drawPattern(height);
}