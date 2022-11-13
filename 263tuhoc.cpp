const ll m = 1e9 + 7;

}
template <class spe, class spe2>
spe2 sum(spe  &a, spe2  &b){
return a+b;
}
void fill_array(int *a, int array_size, int num_of_new_ele){
    for (int i = array_size + 1; i <= array_size + num_of_new_ele ; i++)
        a[i] = 0;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n + 5];
        int b[m + n];//mang b co m+n gia tri
        long long sum_a = 0, sum_b = 0;
        for (int i = 1; i <= n; i++){//tinh tong ca mang a
            cin >> a[i];
            sum_a += a[i];//index tu 1 den n
        }
        for (int i = 1; i <= m; i++){
            cin >> b[i];
            sum_b += b[i];// tinh tong ca mang b
        }
        int max_size;
        if (n > m){// mang a dai hon b thi cho mang b =0 tu cac ptu con lai
            fill_array(b, m, n - m);
            max_size = n;// gan max size = thang lon hon
        }
        else{// ngc lai
            fill_array(a, n, m - n);
            max_size = m;// max size =5
        }
        a[max_size + 1] = sum_a;//gan index n+1 cho sum
        b[max_size + 1] = sum_b;// cha de lm cai cc j
        long long sum = 0, max = sum_a;
        for (int i = 1; i <= max_size; i++){
            sum += a[i];
            sum_b -= b[i];// tru dan an c a//
                           //vd sum a=34 b=21 sum = 2 sumb= 20
						   // 22>0 max =22 // 
						   // sum = 5 sumb=15 // 20 <22
						   // sum=12 sumb =8 
						   //sum =22 sumb= 0
						   //sum =34 sumb =0
						   //max =34 sumb =0
            if (sum + sum_b > max)
                max = sum + sum_b;
 
        }
        sum = 0;
        for (int i = 1; i <= max_size; i++){
            sum += b[i];
            sum_a -= a[i];
            if (sum + sum_a > max)// sum=1 suma=32 //max =33
			// sum =6 suma = 29 //max =35
			//sum = 13 suma = 22 max =35
			//sum =20 sum a = 15;
			//sum = 28 suma = 5 max=33
                max = sum + sum_a;
        }
        cout<< max << endl;    
    }
}//b1 tao mang a va b voi kich thuwoc m,n+m
// nhap cm no gia tri vao
// if m>n thi cac ptu con thieu cua cai it hon se la y 
// b2 thi gan gia tri cac ptu con thieu =0
// b3 


// noichung la chi lay tong tat ca tru di tung gia tri sau do lay cong len 