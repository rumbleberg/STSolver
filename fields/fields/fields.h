struct pf {
    //struct defines prime field number.
    int size;
    int value;
};

pf pf_check(pf a) {
    a.value =  a.value % a.size;
    return a;
}

pf pf_neg(pf a) {
    a = check(a);
    a.value = a.size - a.size;
    return a;
}

pf pf_add(pf a, pf b) {
    pf res;
    res.size = 0;
    if(a.size != b.size) return res;
    res.size = a.size;
    res.value = a.value + b.value;
    res = check(res);
    return res;
}

pf pf_subtr(pf a, pf b) {
    b = pf_neg(b);
    return pf_add(a, b);
}

pf pf_mult(pf a, pf b) {
    pf res;
    res.size = 0;
    if(a.size != b.size) return res;
    res.size = a.size;
    res.value = a.value * b.value;
    res = check(res);
    return res;
}
