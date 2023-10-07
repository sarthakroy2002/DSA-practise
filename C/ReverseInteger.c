// C program to reverse the given integer while checking the 32-bit integer boundaries
int reverse(int x){
    bool negative = (x < 0) ? true : false; // Bool to store the sign of the number
    if (x < 0 && abs(x+1) == INT_MAX) return 0; // Boundary check
    int value = abs(x);
    int digits = log10(value)+1;
    int rev=0;
    for (int i=0; i < digits; i++, value /= 10) {
        if (rev > INT_MAX/10) return 0; // Boundary check
        rev *= 10;
        if (rev > (INT_MAX - value % 10)) return 0; // Boundary check
        rev += value % 10;
    }
    if (negative) rev *= -1;
    return rev;
}