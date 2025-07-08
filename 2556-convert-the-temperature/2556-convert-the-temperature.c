/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double *Array = (double*)malloc(2*sizeof(double));
    double Kelvin = celsius + 273.15;
    Array[0] = Kelvin;
    double Fahrenheit = (celsius * 1.80) + 32.00;
    Array[1] = Fahrenheit;
    *returnSize = 2;
    return Array; 
}