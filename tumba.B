   if len(w)==l:
        if w.count("ыы")==1 or w.count("шш")==1 or w.count("чч")==1 or w.count("оо")==1:
            print(w)
        return
    for i in a:
            fun(a,w+i,l)
fun("ышчо","",4)
