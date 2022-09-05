#include<iostream>

void drawPattern(int height , char c){

    for (int i = 0; i<height ; ++i)
    {
        for (int j = 1; j <= ((2*height)-1); ++j)
        {
            if (j >= (height-i) && j <= (height+i))
                std::cout<<c;
            else
                std::cout<<" ";
        }
       std::cout<<std::endl; 
    }
}

int main(){
    int height = 0;
    char c;
    std::cout<<"Enter height of the triangle : ";
    std::cin>>height;
    std::cout<<"Enter character : ";
    std::cin>>c;
    drawPattern(height , c);
}