#define _FIND_A(a, b) find(b, a[index])
#define _FIND_B(b, a) find(a, b[index])
#define _NOT_IN_ARRAY INT_MIN


int find(std::vector<int> inputVect, int value) {
    for(int index = 0; index < inputVect.size(); index++) {
        if(inputVect[index] == value)
            return index; 
    }

    return _NOT_IN_ARRAY;
}

int swapIndexOfA = INT_MAX;
int numOfSwaps = 1;


bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if(a == b)
        return true;
        
    
    for(int index = 0; index < a.size(); index++) {
        if(index == swapIndexOfA) {
            ++numOfSwaps;
        }
        else {
            if(a[index] != b[index]) {
                //If we've already found a swap
                if(numOfSwaps > 1) {
                    return false;
                }

                //If value in a is not in b and vice-versa
                if(_FIND_A(a, b) == _NOT_IN_ARRAY || _FIND_B(b, a) == _NOT_IN_ARRAY) {
                    return false;
                }

                //If positions to be swapped are not the same
                if(_FIND_A(a, b) != _FIND_B(b, a)) {
                    return false;
                }
                
                swapIndexOfA = _FIND_A(a, b);
            }
        }
    }

    if(numOfSwaps <= 1)
        return true;

}
