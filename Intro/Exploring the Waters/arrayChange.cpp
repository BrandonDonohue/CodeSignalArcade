int result = 0;

int arrayChange(std::vector<int> inputArray) {
    
    std::vector<int>::iterator second;
    for(std::vector<int>::iterator first = inputArray.begin(); first != inputArray.end() - 1; ++first){
        second = first + 1;

        if(*first >= *second){
            int temp = *first + 1;
            int difference = temp - *second;
            result += difference;
            *second = temp;
        }
    }
    
    return result;
    
}