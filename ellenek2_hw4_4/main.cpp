//
//  main.cpp
//  ellenek2_hw4_4
//
//  Created by Ellen Kirsh on 9/27/21.
//

#include <iostream>
using namespace std;

int *MergeArrays(int *a, int *b, int sizea, int sizeb){
    int size = sizea + sizeb;
    int *newarray;
    newarray = new int[size];
    for(int i=0; i<sizea; i++){
        newarray[i] = a[i];
    }
    for(int i=0; i<sizeb; i++){
        newarray[sizea+i] = b[i];
    }
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++){
            if(newarray[i]>newarray[j]){
                int temp = newarray[i];
                newarray[i]=newarray[j];
                newarray[j]=temp;
            }
        }
    }
    cout << "The new array is: ";
    for(int i=0; i<size; i++){
        cout << newarray[i] << " ";
    }
    return 0;
}

int main() {
    int a[] = {4, 3, 7, 8, 6};
    int b[] = {2, 5, 3};
    int sa = 5;
    int sb = 3;
    MergeArrays(a, b, sa, sb);
    cout << endl;
    return 0;
}
