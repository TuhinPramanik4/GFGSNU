double* convertTemperature(double celsius, int* returnSize) {
    double *result = (double*)malloc(2 * sizeof(double));
    if (result == NULL) {
        *returnSize = 0; 
        return NULL;
    }

    result[0] = celsius + 273.15;
    result[1] = celsius * 1.80 + 32.00;
    
    *returnSize = 2;
    return result;
}
