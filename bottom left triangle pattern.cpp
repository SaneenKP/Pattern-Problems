
#include<iostream>

void drawPattern(int height , char c){

    for (int i = 1; i <= height; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout<<c;
        }
        std::cout<<std::endl;
    }
    

}

int main(){
    int height = 0;
    char c;
    std::cout<<"Enter height of the triangle : ";
    std::cin>>height;
    std::cout<<"Enter character to print : ";
    std::cin>>c;
    drawPattern(height , c);
}