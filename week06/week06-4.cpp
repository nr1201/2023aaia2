int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {};//�έp�Ʀr�X�{������,�@�}�l�O0(�C�Ӱ}�C��l��,���|��0)
    int best = 0;//�X�{�̦h���ƪ��O best ��
    for(int i=0; i<numsSize; i++){
        int now = nums[i];//�{�b�n�έp���L�{���Onow
        a[now]++;//�{�b���Ʀr now �έp�X�{������
        if(a[now]>best) best = a[now];
    }
    int ans = 0;
    for(int i=1; i<=100; i++){
        if(a[i]==best) ans += a[i];//�O�̦n������,���W�[����(���έp�X��,�[�X��)
    }
    return ans;
}
