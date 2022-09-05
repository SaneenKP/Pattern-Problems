#include<iostream>

void drawPattern(int height , int st){

    for (int i = 1; i <= height; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout<<st++<<" ";
        }
        std::cout<<std::endl;
    }
}

int main(){
    int height = 0;
    int st;
    std::cout<<"Enter height of the triangle : ";
    std::cin>>height;
    std::cout<<"Enter starting number : ";
    std::cin>>st;
    drawPattern(height , st);
}