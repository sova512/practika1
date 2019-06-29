
#include <iostream>
using namespace std;
#define R 1000

double* norm(double* x, int l)//функция возвращает указатель на новый массив,в который помещены нормированные значения
{
    double *a= new double[R];
    double min=x[0], max=x[0];
    int i,k;
    for(i=0; i< l; i++) {
        if(x[i]<min) min=x[i];
        if(x[i]>max) max=x[i];
    }
    for(k=0; k<l; k++) {
        a[k]=(x[k]-min)/(max-min);

    }
    return a;
}

int main(int argc, char **argv)
{
    int leng=5;
    double *x=new double[R];
    cout<<"Исходный массив: "<<endl;
    for(int i=0; i<leng; i++) {
        cin>>x[i];
    }
    double *y;//= new double[R]; 
    cout<<"Нормированный массив:"<<endl;
    y=norm(x, leng);
    for( int j=0; j<leng; j++) {
        cout<<y[j]<<endl;
    } 
 delete [] x;
    delete [] y;//исправлена ошибка памяти: ранее y не освобождался
    return 0;
}
