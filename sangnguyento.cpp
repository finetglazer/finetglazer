// Sang nguyen to cho test lon nhat
void Sieve_Prime(void) {	   
    memset(Prime, true, sizeof(Prime));
    Prime[0]=Prime[1] = false; //so 0, 1 khong la nguyen to
    for (int p = 2; p * p <MAX; p++) { //duyet tu so 2 tro di
        if (Prime[p] == true) { //neu p la nguyen to 
            // cap nhat cac so khong la nguyen to
            for (int i = p * p; i <= MAX; i += p)
                Prime[i] = false;
        }
    }
} 