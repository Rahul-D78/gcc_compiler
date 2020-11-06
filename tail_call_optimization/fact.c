int fact(int n, int a) {

    if(n == 1) {
        return n;
    }
    else {
        //javascript interpeter also supports tail call optimization
        //
        //____"tail Recurtion"_____ =>>>>> when the return line is a pure call to the function itself
        //pure call -> have not computed the value of function
        //pure call -> returned a single call to the function

        return fact(n-1 , n * a);
        // return n * fact(n -1);
    }
}