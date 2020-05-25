s = input()
hours = s[:2]
minutes = s[3:]
while True:
    minutes = str((int(minutes)+1)%60)
    if len(minutes)==1:
        minutes = '0'+minutes
    if(minutes=='00'):
        hours = str((int(hours)+1)%24)
    if len(hours)==1:
        hours = '0'+hours
    if hours == minutes[::-1]:
        break

print(hours+':'+minutes)