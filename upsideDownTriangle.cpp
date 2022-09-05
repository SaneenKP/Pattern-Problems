#include<iostream>

void drawPattern(int height , char c){

    int totalCharacters = ((2*height)-1);
    for (int i = 0; i<height ; ++i)
    {
        for (int j = totalCharacters; j >=1 ; --j)
        {
            if (j <= (totalCharacters-i) && j >= (1+i))
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