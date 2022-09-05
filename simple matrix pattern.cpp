#include<iostream>

void drawPattern(int row , int col , char ch){

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout<<ch;
        }
        std::cout<<std::endl;
    }
}

int main(){
    int row , col;
    char ch;
    std::cout<<"Enter the row and column : "<<std::endl;
    std::cout<<"row : ";
    std::cin>>row;
    std::cout<<"col : ";
    std::cin>>col;
    std::cout<<"Enter character to be printed : ";
    std::cin>>ch;
    drawPattern(row , col , ch);
}