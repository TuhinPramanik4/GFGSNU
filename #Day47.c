uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    int bits = sizeof(n) * 8;
    
    for (int i = 0; i < bits; i++) {
        if ((n & (1u << i)) != 0) { 
            result |= 1u << ((bits - 1) - i);
        }
    }

    return result;
}