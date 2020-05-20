int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int maxDiff = 0;
    
    for(int index = 0; index <= inputArray.size() - 1; ++index) {
        if(index == 0) {
            int firstDiff = inputArray[index] - inputArray[index + 1];
            maxDiff = firstDiff; 
        }

        else if(index == inputArray.size() - 1) {
            int lastDiff = inputArray[index] - inputArray[index - 1];
            maxDiff = (maxDiff > lastDiff) ? maxDiff : lastDiff;
        }

        else {
            int leftDiff = inputArray[index] - inputArray[index - 1];
            int rightDiff = inputArray[index] - inputArray[index + 1];
            int diff = (leftDiff > rightDiff) ? leftDiff : rightDiff;      
            maxDiff = (maxDiff > diff) ? maxDiff : diff;   
        }
    }

    return maxDiff;
}
