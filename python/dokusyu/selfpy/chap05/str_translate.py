msg = '今日の，あなたの運勢は，●よい感じ●です．'
print(msg.translate(str.maketrans({
    '，': '、',
    '．': '。',
    '●': ''
})))
print(msg.translate(str.maketrans('，．', '、。', '●')))