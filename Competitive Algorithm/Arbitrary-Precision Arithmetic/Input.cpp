for (int i=(int)strlen(s); i>0; i-=9) {
    s[i] = 0;
    a.push_back (atoi (i>=9 ? s+i-9 : s));
}
while (a.size() > 1 && a.back() == 0)
    a.pop_back();
