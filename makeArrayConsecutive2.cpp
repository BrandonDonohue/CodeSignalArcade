int makeArrayConsecutive2(std::vector<int> statues) {
    //need min and max value to establish range [min, max]
    //calculate the difference between the min and max
    //result should be the the difference between min and max and how many statues we have
    //difference - length of vector 

    int min = *min_element(statues.begin(), statues.end());
    int max = *max_element(statues.begin(), statues.end());
    int difference = max - min + 1;

    return difference - statues.size();
    
    
}