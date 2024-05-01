class Solution(object):
    def reversePrefix(self, word, ch):
        for i in range(len(word)): #重點1:找到字母
            if word[i]==ch:  #找到字母了,這時i很重要
            #重點2:把 word[0]...word[i]字反過來
                return word[i::-1] + word[i+1:] #Python的特殊範圍寫法
            #如果沒有提早結束,就是找不到,就是原來的字回傳
        return word