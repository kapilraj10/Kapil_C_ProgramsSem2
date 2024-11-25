#include<graphics.h>
#include<conio.h>

int main (){
    int gd = DETECT, gm, errorcode;
    intigrap(&gd, &gm, "C:\\TURBOC3\\BGI");
    errorcode = graphicsult();
    if(errorcode!=0)
    {
        printf("Graphics initialization falied");
        exit(0);
    }
    closegraph();
    return 0;
}
