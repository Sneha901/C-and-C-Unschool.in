#include <iostream>

using namespace std;

float area(float r)
{
    return(3.14*r*r);
}
float area(float b,float h)
{
    return(0.5*b*h);

}
float area1(float l,float b)
{
    return(l*b);
}
int main()
{
    float r,b,h,l;
    int ch;
    while(ch!=4)
    {
        cout<<"\n \n Enter choice----> \n";
        cout<<" 1 for Area of circle \n";
        cout<<" 2 for Area of triangle\n ";
        cout<<"3 for Area of rectangle \n";
        cout<<" 4 to exit \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<" Enter radius of circle: \n";
            cin>>r;
            cout<<" Area of circle= "<<area(r);
            break;
        case 2:
            cout<<" \n Enter base and height of triangle: \n";
            cin>>b>>h;
            cout<<" Area of triangle = "<<area(b,h);
            break;
        case 3:
            cout<<" \n Enter length and breath of rectangle: \n";
            cin>>l>>b;
            cout<<" Area of rectangle = "<<area1(l,b);
            break;
        case 4:
            exit(0);
        default:
            cout<<"\n Invalid choice \n";

        }
    }
    return 0;
}
