function rotLeft(a, d) {

    while(d > 0){
        let b = a.shift();
        a.push(b);
        d--;
    }
    return a;
  
}
