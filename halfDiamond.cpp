#include<iostream>

void drawPattern(int height , char c){

    int state = 0;
    for (int i = 1; i <= height; ++i)
    {
        switch (state)
        {
            case 0 : {
                for (int j = 0; j < i; ++j)
                {
                    std::cout<<c;
                }
                break;
            }
            case 1 : {
                for (int j = height; j >= i; --j)
                {
                    std::cout<<c;
                }
                break;
            }
        }
        std::cout<<"\n";
       if (i == (height) && state == 0){
            state = 1;
            i = 1;
       }
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