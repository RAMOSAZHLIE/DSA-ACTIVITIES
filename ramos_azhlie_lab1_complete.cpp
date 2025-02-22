//Sorting Operation
void bubbleSort(){
    int i, j;
    bool swapped;
    for(int i =0; i < numElem - 1; i++){
        swapped = false;
        for(j =0; j < numElem - i -1; j++){
            if(myArray[j] > myArray[j+1]){
                swap(myArray[j], nyArray[j+1]);
                swapped = true;
            }
        }
string InsertArSortedArray(int){
    if(numElem != maxElem){
        bubbleSort();
        int position;
        for(int i = 0; i < numElem; i++){
            if(num < myArray[i]){
                position = i;
                break;
            }
        }
        for(int i = numElem; i>=position; i--){
            myArray[i+1] = myArray{i};
        }
        myArray[position] = num
    }
}
        if(swapped == false){
            break;
        }
    }
}   