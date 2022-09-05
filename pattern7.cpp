#include<iostream>

void drawPattern(int height){

    for (int i = height; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}

int main(){
    int height = 0;
    int st;
    std::cout<<"Enter height of the triangle : ";
    std::cin>>height;
    drawPattern(height);
}