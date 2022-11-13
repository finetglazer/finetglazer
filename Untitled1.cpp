bool dayTang(vector<int> arr, int l, int r) {
    for (int i = l; i < r; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

bool dayGiam(vector<int> arr, int l, int r) {
    for (int i = l; i < r; i++)
        if (arr[i] < arr[i + 1])
            return false;
    return true;
}

bool vuaTangGiam(vector<int> arr, int l, int r) {
    bool tang = true, giam = true;
    int n;
    n = (l + r) / 2;
    for (int i = l; i < n; i++) {
        if (arr[i] > arr[i + 1])
            tang = false;
    }

    for (int i = r; i > n; i--) {
        if (arr[i] > arr[i - 1])
            giam = false;
    }
    return tang && giam;// nghia la 1 trong 2 thang sai la sai
}

int main() {
    int t, x, n, l, r;
    cin >> t;
    
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> l >> r;
        if (dayTang(arr, l, r) || dayGiam(arr, l, r) || vuaTangGiam(arr, l, r)) cout << "Yes";
        else cout << "No";
        cout << endl;

    }
}
