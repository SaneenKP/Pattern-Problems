#include<iostream>

void drawPattern(int row , int col , int st){

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout<<st++<<" ";
        }
        std::cout<<std::endl;
    }
}

int main(){
    int row , col , st;
    std::cout<<"Enter the row and column : "<<std::endl;
    std::cout<<"row : ";
    std::cin>>row;
    std::cout<<"col : ";
    std::cin>>col;
    std::cout<<"Enter starting number : ";
    std::cin>>st;
    drawPattern(row , col , st);
}