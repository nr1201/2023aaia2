///LeetCode 1137. N-th Tribonacci Number
/// 0 1 1 2 4 7 13 24 ... �аݲ� n �������׬O�h��?
int tribonacci(int n){
    int a[40] = {0, 1, 1};///�e3�����ǳƦn�A�᭱��37���S�g�A�N���O0
    for(int i=3; i<=n; i++)
    {
        a[i] = a[i-1] + a[i-2] + a[i-3];///�e3���ۥ[�A�o��s����
    }
    return a[n];///���׭n��X��n��
}
