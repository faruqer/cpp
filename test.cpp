#include <iostream>

using namespace std;

void findMInMax(int *arr, int num);

int main()
{
    int arr[5], num, *ptr;
    for(int i=0; i<5; i++){
        cout<<"enter a number: ";
        cin>>arr[i];
    }
    ptr=arr;
    cout<<"Enter a number to find min and max: ";
    cin>>num;
    findMInMax(ptr, num);
    return 0;
}

void findMInMax(int *arr, int num){
    int count=0;
    for(int i=0; i<5; i++){
        if (arr[i]>num){
            count++;
        }
    }
    int newArray[count], index=0;
    for(int i=0; i<5; i++){
        if (arr[i]>num){
            newArray[index]=arr[i];
            index++;
        }
    }
    int max=num;
    for(int i=0; i<count; i++){
        if(newArray[i] > max)
            max=newArray[i];
    }
    int min=max;
    for(int i=0; i<count; i++){
    if(min > newArray[i])
        min=newArray[i];
    }
    cout<<min<<" "<<max;
}
