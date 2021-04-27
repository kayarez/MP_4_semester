#include "stdafx.h"
#include <iostream>
#include <iomanip> 
#include "Salesman.h"

#define N 5

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
 setlocale(LC_ALL, "Russian");

 int d[N][N] = { {INF,14,28,INF,7},
                 {7,INF,22,61,77},
                 {9,21,INF,86,56},
                 {24,51,28,INF,21},
                 {86,73,52,20,INF} };
			   
int r[N];    
 
int s = salesman (            
                  N,          // [in]  ���������� ������� 
                  (int*)d,    // [in]  ������ [n*n] ���������� 
                  r           // [out] ������ [n] ������� 0 x x x x  
      
                 );

 cout << "-- ������ ������������ -- ";
 cout << endl << "-- ����������  �������: " << N;
 cout << endl << "-- ������� ���������� : ";
 
 for(int i=0; i<N; i++)
 { 
    cout << endl;
    
	for(int j=0; j<N; j++)

       if (d[i][j] != INF) 
		   cout << setw(3) << d[i][j] << " ";

       else 
		   cout << setw(3) << "INF" << " ";
 }
 
 cout << endl << "-- ����������� �������: "; 
 
 for(int i=0; i<N; i++) 
	 cout << r[i] << "-->"; 
     cout << 0;
     cout << endl << "-- ����� ��������     : " << s;  
     cout << endl;
 
system("pause");
return 0;
}