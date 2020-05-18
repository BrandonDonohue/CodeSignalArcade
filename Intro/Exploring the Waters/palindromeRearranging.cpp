/*
    A SET OF CHARACTERS CAN BE A PALINDROME IF AT MOST 1 CHARACTER OCCURS ODD NUMBER TIMES
    AND ALL OTHER CHARACTERS OCCUR EVEN NUMBER OF TIMES
*/

bool charIsOdd(std::string inputString, char currChar){
    int count = 0;

    for(std::string::iterator index = inputString.begin(); index != inputString.end(); ++index){
        if(*index == currChar)
            ++count; 
    }

    if (count % 2 != 0)
        return true;
    else
        return false;
}


bool palindromeRearranging(std::string inputString) {
    if(inputString.size() == 1)
        return true;
    
    int numOfOdds = 0;
    int index = 0;
    char currChar = inputString[index];

    while(index != inputString.size()) {
        if(charIsOdd(inputString, currChar)) {
            ++numOfOdds;
        }

        index = inputString.find_first_not_of(currChar, index);
        if(index == std::string::npos)
            break;

        currChar = inputString[index];   
    }

    if(numOfOdds > 1)
        return false;
    else
        return true;
}
