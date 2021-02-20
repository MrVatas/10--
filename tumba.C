def fun (a,w,l,q):
    if len(w)==l:
        if w.count("ы")==2 or w.count("ш")==2 or w.count("ч")==2 or w.count("о")==2:
            print(w),
        return
    
    for i in a:
            fun(a,w+i,l,q)
    
p=0
fun("ышчо","",4,p)
