bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int yourNonZero;
    int friendsNonZero;

    //Handle any zero value cases
    if(yourLeft == 0 || yourRight == 0 || friendsLeft == 0 || friendsRight == 0){
        if(yourLeft == 0 && yourRight > 0)
        yourNonZero = yourRight;
    else
        yourNonZero = yourLeft;

    if(friendsLeft == 0 && friendsRight > 0)
        friendsNonZero = friendsRight;
    else
        friendsNonZero = friendsLeft;

    if(yourNonZero == friendsNonZero)
        return true;
    else
        return false;
    }
    
    int yourTotal = yourLeft * yourRight;
    int friendsTotal = friendsLeft * friendsRight;

    if(yourTotal == friendsTotal)
        return true;
    else
        return false;
}
