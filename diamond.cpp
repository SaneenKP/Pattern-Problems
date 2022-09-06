#include<iostream>

void drawPattern(int height , char c){

    int triangleState = 0;
    for (int i = 0; i<height ; ++i)
    { 
       switch (triangleState)
       {
            case 0 : {

                for (int j = 1; j <= ((2*height)-1); ++j)
                {
                    if (j >= (height-i) && j <= (height+i))
                        std::cout<<c;
                    else
                        std::cout<<" ";
                }
                break;
            }
            case 1 : {

                int totalCharacters = ((2*height)-1);
                for (int j = totalCharacters; j >=1 ; --j)
                {
                    if (j <= (totalCharacters-i) && j >= (1+i))
                        std::cout<<c;
                    else
                        std::cout<<" ";
                }
                break;
            }
       }
       std::cout<<"\n";
       if (i == (height-1) && triangleState == 0){
            triangleState = 1;
            i = 0;
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