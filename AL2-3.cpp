#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<chrono>
#define NULL __null
using namespace std;
using namespace std::chrono;
void showcase();
int insert(int *);
int view(int *);
int asscendingSort(int *,int&);
int descendingSort(int *);
int durationsort(int&);
int sortedduration(int&);
int revsortedduration(int&);
int ultimatum();
void showcase(){
    cout << "\nMENU" << endl;
    cout<<"\nEnter 0 to Exit:\t"<<endl;
    cout<<"\nEnter 1 to insert element in array:\t"<<endl;
    cout<<"\nEnter 2 to view element in array:\t"<<endl;
    cout<<"\nEnter 3 to Sort element of array in Asscending Order:\t"<<endl;
    cout<<"\nEnter 4 to Sort element of array in Descending Order:\t"<<endl;
    cout<<"\nEnter 5 to Get the Time Complexity to sort ascending of random data:\t"<<endl;
    cout<<"\nENter 6 to Get the Time Complexity to sort ascending of data already sorted in Ascending Order:\t" << endl;
    cout<<"\nENter 7 to Get the Time Complexity to sort ascending of data already sorted in Descending Order:\t" << endl;
    cout<<"\nENter 8 to Get the Time Complexity to sort ascending of data for all Cases(n=5,000->50,000):\t" << endl;
}
int main()
{
    int a[100],counter=0;
    int ch;
    do{
        showcase();
            cout<<"\n   **** Enter Your Choice ****  \n"<<endl;
            cin >> ch;
            switch (ch)
            {
                case 0:
                    break;
            case 1:
                insert(a);
                break;
            case 2:
                view(a);
                break;
            case 3:{
                asscendingSort(a,counter);
                break;
            }
            case 4:
                descendingSort(a);
                break;
            case 5:{
                // auto start = high_resolution_clock::now();
                durationsort(counter);
                // auto stop = high_resolution_clock::now();
                // auto duration = duration_cast<seconds>(stop - start);
                // cout << "Time taken for sorting: "<< duration.count() << " seconds" << endl;
                break;
            }
            case 6:{
                // auto start = high_resolution_clock::now();
                sortedduration(counter);
                // auto stop = high_resolution_clock::now();
                // auto duration = duration_cast<seconds>(stop - start);
                // cout << "Time taken for sorting: "<< duration.count() << " seconds" << endl;
                break;
            }
            case 7:{
                // auto start = high_resolution_clock::now();
                revsortedduration(counter);
                // auto stop = high_resolution_clock::now();
                // auto duration = duration_cast<seconds>(stop - start);
                // cout << "Time taken for sorting: "<< duration.count() << " seconds" << endl;
                break;
            }
            case 8:
                ultimatum();
                break;
            }
    } while (ch != 0);
}
int insert(int *a)
{
    int i,n;
    cout<<"Enter the no. of elements in array:\t";
    cin>>n;
    cout<<"\nEnter "<< n <<" elements in array: \n";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    a[i]=NULL;
    return *a;
}
int view(int *a)
{
    int j;
    cout << "Elements in array: ";
    for(j=0;a[j]!=NULL;j++)
    {
        cout<<a[j]<<"  ";
    }
    return *a;
}
int asscendingSort(int *a,int& counter)
{
    int i, key, j;
    counter = 0;
    for (i = 0; a[i]!=NULL; i++)
    {
        counter++;
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    return *a;
    return counter;
}
int descendingSort(int *a){
    int i, j, temp;
    for(i=0;a[i]!=NULL;i++)
	{		
		for(j=i+1;a[j]!=NULL;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int durationsort(int& counter){
    cout<<"Time Complexity to sort ascending of random data is: O("<<counter*counter<<")"<<endl;
    return counter;
}
int sortedduration(int& counter){
    cout << "Time Complexity to sort ascending of data already sorted in ascending order is: O(" << counter << ")" << endl;
    return counter;
}
int revsortedduration(int& counter){
    cout<<"Time Complexity to sort ascending of data already sorted in descending order is: O("<<counter*counter<<")"<<endl;
    return counter;
}
int ultimatum(){
    cout << "Sl.\t\t"
         << "Value\t\t"
         << "Time   Complexity\t\t"
         << "Time   Complexity\t\t"
         << "Time   Complexity\t\t" << endl;
    cout << "No.\t\t"
         <<"of n\t\t"
         << "(Random Data)\t\t\t"
         << "(Data in Ascending)\t\t"
         << "(Data in Descending)" << endl;
    cout << endl;
    cout << "1.\t\t"
         << "5000\t\t"
         << "O(" << 5000 * 5000 << ")\t\t\t\t" <<"O(" << 5000 << ")"<< "\t\t\t   " <<"O(" << 5000 * 5000 << endl;
    cout << "2.\t\t"
         << "10000\t\t"
         << "O(" << 10000 * 10000 << ")\t\t\t\t" <<"O(" << 10000 <<")"<< "\t\t   " <<"O(" << 10000 * 10000 <<")"<< endl;
    cout << "3.\t\t"
         << "15000\t\t"
         << "O(" << 15000 * 15000 << ")\t\t\t\t" <<"O(" << 15000 << ")"<<"\t\t   " <<"O(" << 15000 * 15000 <<")"<< endl;
    cout << "4.\t\t"
         << "20000\t\t"
         << "O(" << 20000 * 20000 << ")\t\t\t\t" <<"O(" << 20000 << ")"<<"\t\t   " <<"O(" <<20000 * 20000 <<")"<< endl;
    cout << "5.\t\t"
         << "25000\t\t"
         << "O(" << 25000 * 25000 << ")\t\t\t\t" <<"O(" << 25000 << ")"<<"\t\t   " <<"O(" << 25000 * 25000 <<")"<< endl;
    cout << "6.\t\t"
         << "30000\t\t"
         << "O(" << 30000 * 30000 << ")\t\t\t\t" <<"O(" << 30000 << ")"<<"\t\t   " <<"O(" << 30000 * 30000 <<")"<< endl;
    cout << "7.\t\t"
         << "35000\t\t"
         << "O(" << 35000 * 35000 << ")\t\t\t\t" <<"O(" << 35000 << ")"<<"\t\t   " <<"O(" << 35000 * 35000 <<")"<< endl;
    cout << "8.\t\t"
         << "40000\t\t"
         << "O(" << 40000 * 40000 << ")\t\t\t\t" <<"O(" << 40000 << ")"<<"\t\t   " << "O(" <<40000 * 40000 <<")"<< endl;
    cout << "9.\t\t"
         << "45000\t\t"
         << "O(" << 45000 * 45000 << ")\t\t\t\t" <<"O(" << 45000 << ")"<<"\t\t   " <<"O(" << 45000 * 45000 << ")"<<endl;
    cout << "10.\t\t"
         << "50000\t\t"
         << "O(" << 50000 * 50000 << ")\t\t\t\t" <<"O(" << 50000 << ")"<<"\t\t   " << "O(" <<50000 * 50000 << ")"<<endl;
}
