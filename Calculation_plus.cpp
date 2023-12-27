#include<iostream>
using namespace std;

const int mat_size = 2;
void please_sum_it(int a, int b);
void please_decrease_it(int a, int b);
void please_multiply_it(int a, int b);
void please_exponent_it(int a, int b);
int please_find_factorial(int a);
void please_sum_matrices(int a[mat_size][mat_size], int b[mat_size][mat_size]);

int main()
{
    int a = 0;
    int num1 = 0;
    int num2 = 0;
    int mat1[mat_size][mat_size];
    int mat2[mat_size][mat_size];

    while(true)
    {
        cout<<"What do you want to do? \n 1 -> + \n 2 -> - \n 3 -> * (multiply) \n 4 -> ^ (exponentiation) \n 5 -> factorial \n 6 -> sum of matrices \n";
        cin>>a;

        switch(a)
        {
        case 1:
            cout<<"Enter two integer digits to sum them: ";
            cin>>num1>>num2;
            please_sum_it(num1, num2);
            break;
        case 2:
            cout<<"Enter two integer digits to decrease: ";
            cin>>num1>>num2;
            please_decrease_it(num1, num2);
            break;
        case 3:
            cout<<"Enter two integer digits to multiply: ";
            cin>> num1>>num2;
            please_multiply_it(num1, num2);
            break;
        case 4:
            cout<<"Enter integer base of exponent: ";
            cin>> num1;
            cout<<"Enter exponent: ";
            cin>> num2;
            please_exponent_it(num1, num2);
            break;
        case 5:
            cout<<"Enter an integer digit: ";
            cin>> num1;
            cout<<please_find_factorial(num1);
            break;
        case 6:
            cout<<"The first matrix.";
            for(int i = 0; i<mat_size; i++)
                for(int j = 0; j<mat_size; j++)
                {
                    cout<<"Enter the ("<<i+1<<", "<<j+1<<") element: ";
                    cin>>mat1[i][j];
                }

            cout<<"The second matrix.";
            for(int i = 0; i<mat_size; i++)
                for(int j = 0; j<mat_size; j++)
                {
                    cout<<"Enter the ("<<i+1<<", "<<j+1<<") element: ";
                    cin>>mat2[i][j];
                }
            please_sum_matrices(mat1, mat2);
            break;
        default:
            cout<<"Wrong input. Try again later... \n";
        }
        cout<<"\n \n";
        if (a==9) {return 0;}
    }

}

void please_sum_it(int a, int b)
{
    cout<<a+b;
}

void please_decrease_it(int a, int b)
{
    cout<< a-b;
}

void please_multiply_it(int a, int b)
{
    cout<< a*b;
}

void please_exponent_it(int a, int b)
{
    int result=1;
    for(int i = 0; i<b; i++)
        result=result*a;
    cout<<result;
}

int please_find_factorial(int a)
{
    if (a<0){cout<<"Wrong input"; return 0;}
    int result = 1;
    for(int i = a; i>1;i--) result = result*i;

    return result;
}

void please_sum_matrices(int a[mat_size][mat_size], int b[mat_size][mat_size])
{
    int result[mat_size][mat_size];
    for(int i = 0; i<mat_size; i++)
        for(int j = 0; j<mat_size; j++)
            result[i][j]=a[i][j]+b[i][j];

    cout<<"The result matrix. ";
        for(int i = 0; i<mat_size; i++)
            for(int j = 0; j<mat_size; j++)
                cout<<"The ("<<i+1<<", "<<j+1<<") element: "<<result[i][j];
}
