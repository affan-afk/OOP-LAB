//Muhammad Affan Rasheed (24K-0579)
#include <iostream>
using namespace std;

int ** creatematrice(int rows,int col){
    int **mat = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
       mat[i] = new int[col];
    }
    cout<<"memory allocated! "<<endl;
    return mat;
}
void populateMatrix(int ** mat,int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"enter value for row "<<i+1<<" and column "<<j+1<<": ";
            cin>>*(*(mat+i)+j);
        }
    }
}
void displayMatrix(int ** mat,int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<*(*(mat+i)+j)<<" ";
        }
        cout<<endl;
    }
}
void operationOnMatrix(int ** mat1,int ** mat2,int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp = *(*(mat1+i)+j)-*(*(mat2+i)+j); //temporarily differnece store karraha......
            *(*(mat1+i)+j) += *(*(mat2+i)+j);
            *(*(mat2+i)+j) = temp;
        }
    }
}
void freemem(int**mat1,int**mat2,int rows){
    for (int i = 0; i < rows; i++)
    {
        delete[] mat1[i];
        delete[] mat2[i];
    }
    delete mat1;
    delete mat2;
    cout<<"memory freed!";
}
int main(){
    int rows,col;
    cout<<"enter rows for matrices: ";
    cin>>rows;
    cout<<"enter columns for matrices: ";
    cin>>col;
    int **mat1 = creatematrice(rows,col);
    int **mat2 = creatematrice(rows,col);
    cout<<"for matrice 1:"<<endl;
    populateMatrix(mat1,rows,col);
    cout<<"for matrice 2:"<<endl;
    populateMatrix(mat2,rows,col);
    cout<<"Matrice 1:"<<endl;
    displayMatrix(mat1,rows,col);
    cout<<"Matrice 2:"<<endl;
    displayMatrix(mat2,rows,col);
    operationOnMatrix(mat1,mat2,rows,col);
    cout<<"Addition on matrices will YiElD:"<<endl;
    displayMatrix(mat1,rows,col);
    cout<<"Subtraction on matrices will YiElD:"<<endl;
    displayMatrix(mat2,rows,col);
    freemem(mat1,mat2,rows);
    return 0;
}
