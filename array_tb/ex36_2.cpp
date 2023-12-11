#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ; cin >> n;
    int a[n];
    int sum = 0;
    multiset<int> sumSet;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        sum += a[i];
        if(sum == 0 || sumSet.count(sum) > 0){
            cout << 1 << endl;
            return 0;
        }
        sumSet.insert(sum);
    }
    cout << -1 << endl;
}

// Làm thế nào có thể sử dụng một tập hợp để kiểm tra xem một giá trị sum đã xuất hiện trước đó hay không? Hãy giải thích:

// Trong quá trình duyệt qua mảng, chúng ta tính tổng các phần tử và lưu giá trị tổng vào biến sum.

// Tại mỗi bước, chúng ta kiểm tra xem giá trị sum đã xuất hiện trước đó trong tập hợp hay chưa. Nếu đã xuất hiện, điều này có nghĩa là chúng ta đã gặp lại một giá trị sum giống như trước đó, tức là có một đoạn mảng con có tổng bằng 0 từ điểm xuất hiện trước đó đến điểm hiện tại.

// Nếu sum chưa xuất hiện trước đó, chúng ta thêm giá trị sum vào tập hợp để theo dõi.

// Dưới đây là ví dụ giải thích cách tập hợp hoạt động:

// Giả sử chúng ta có mảng A = [4, -2, 3, -1, 2]. Dưới đây là quá trình duyệt qua mảng và cập nhật tập hợp:

// i=0, sum=4: Tập hợp = {4}.
// i=1, sum=2: Tập hợp = {4, 2}.
// i=2, sum=5: Tập hợp = {4, 2, 5}.
// i=3, sum=4: Tập hợp không thay đổi vì giá trị 4 đã xuất hiện trước đó.
// i=4, sum=6: Tập hợp = {4, 2, 5, 6}.
// Ở bước 4, giá trị sum là 4 đã xuất hiện trước đó trong tập hợp {4, 2}. Do đó, có một mảng con có tổng bằng 0 từ vị trí 1 đến vị trí 3 trong mảng A.

// Hy vọng giải thích này giúp bạn hiểu rõ hơn về cách sử dụng tập hợp để kiểm tra tồn tại của mảng con có tổng bằng 0 trong mảng.