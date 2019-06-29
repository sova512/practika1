
#include <iostream>

using namespace std;
#define R 1000

void norma(double x[], int l)// данная функция не возвращает ничего и проводит нормировку в исходном массиве
{
    double min=x[0], max=x[0];
    int i,k;
    for(i=0; i< l; i++) {
        if(x[i]<min) min=x[i];
        if(x[i]>max) max=x[i];
    }
    for(k=0; k<l; k++) {
        x[k]=(x[k]-min)/(max-min);
    }
   

}

int main(int argc, char **argv)
 {
    int leng=5;
    double x[R];
     cout<<"Исходное:"<<endl;
     for(int i=0; i<leng; i++) {
        cin>>x[i];
    }
    norma(x,leng);
    cout<<"Нормированное:"<<endl;
for(int j=0; j<leng; j++) {
        cout<<x[j]<<endl;;
    }
    return 0;
}
